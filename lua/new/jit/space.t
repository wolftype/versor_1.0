local utils = require"utils"
local printt = utils.printt
local B = require "bitBasis"
local F = require "funcs"
local Proxy = (function()
	local M
	return function()
		if(not M) then
			M = require"Proxy"
		end
		return M
	end
end)()
local Lust = require"Lust"

-----------------------------------------------
-- GLOBALS:
CoordType = CoordType or double

-----------------------------------------------
local cmath = terralib.includec("math.h")
local format = string.format

-- Templates
local function nl(str) return string.gsub(str, [[\n]], "\n"):gsub([[\t]], "\t") end
local tem = Lust[[]]

tem.op = [[
terra $op(@map{inputs, _=", "}:{{$name : $type}})
	@result
end
]]
tem.result = nl[[
return $res{
	@map{blades, inst=inst, _=",\n"}:{{@inst.(1):inst}}
}
]]
tem.inst = [[@map{.}:instop]]
tem.instop = [[@if(i1 == "1")<{{@if(r.w ~= "1")<{{$r.w*}}>}}>else<{{$op}}>a.$ida*b.$idb]]

tem.type = nl[[
struct $name {
	@map{coords, _="\n"}:{{$1 : CoordType;}}
}

terra create$name(@map{coords, _=", "}:{{v$i1 : CoordType}})
	return $name{
		@map{coords, _=", "}:{{v$i1}}
	}
end
]]

tem.unop = nl[[
terra $op(a : $type)
	return $type{
		@map{coefficients, bases=bases, _=",\n"}:coefficient
	}
end
]]
tem["unop.coefficient"] = [[@if(1 ~= "1")<{{-}}>a.$bases.(i1)]]

tem.cast = [[
terra cast$res(a : MV)
	return $res{@map{fields, _=", "}:{{$1}}}
end
]]
-----------------------------------------------
-- Utilities
local function basis_names(ty)
	local coords = {}
	for i=1, #ty do
		coords[i] = B.basisString(ty[i])
	end
	return coords
end

local function eval(name, code, env)
	-- eval and run the code in environment env
	setfenv(terralib.loadstring(code), env)()
	return env[name]
end
-----------------------------------------------

local M = {}
local generated = {}		-- map of generated functions with unique keys
local generated_funcs = {}	-- map of generated functions (non-unique keys), gives access to terra funcs
local generated_types = {}	-- map of generated types
local operator_macros = {}	-- macros for use when evaluating dependent operators based on type
local operator_generators = {} -- operator generator functions

-- primitive ops
local primitives = {
	gp = "binop",
	op = "binop",
	ip = "binop",
	reverse = "unop",
	conjugate = "unop",
	involute = "unop",
}

-- generate a unique key based on function name and types
local function opkeyty(name, aname, bname)
	if(bname)
		then return name..aname..bname
		else return name..aname
	end
end

----------------------------------------------------
-- Type Generation
local function cast_operator(st)
	local fieldmap = {}
	for i=1, #st.entries do
		local e = st.entries[i]
		fieldmap[e.field] = true
	end
	
	return function(from, to, exp)
		-- build up the arguments to the 'to' constructor
		local vals = {}
		for i=1, #to.entries do
			local e = to.entries[i]
			if(fieldmap[e.field])
				then vals[i] = "exp."..e.field
				else vals[i] = "0"
			end
		end
		
		-- generate and eval cast code
		local code = format("return `%s{%s}", to.displayname, table.concat(vals, ", "))
		local env = { exp=exp }
		env.__index = _G
		setmetatable(env, env)
		return setfenv(terralib.loadstring(code), env)()
	end
end

local function mv_terra_metamethods(st)
	-- Terra metamethods
	st.metamethods.__mul = operator_macros.gp
	st.metamethods.__pow = operator_macros.op
	st.metamethods.__div = operator_macros.div
end

local function constructor(name)
	local st = _G[name]		
	st.constructor = _G["create"..st.displayname]

	st.metamethods.__cast = cast_operator(st)
	mv_terra_metamethods(st)
	
	-- for Lua usage
	getmetatable(st).__call = function(st, ...)
		return Proxy()(st.constructor(...))
	end
end

local function codegen_type(name)
	local ty = B.types[name]
	local model = { name=name, coords=basis_names(ty) }
	local code = tem:gen(model, "type")
	terralib.loadstring(code)()
	constructor(name)
	return code
end

local function generate_type(name)
	if(not generated_types[name]) then
		generated_types[name] = codegen_type(name)
	end
end

-------------------------------------------------------
-- Operator Generation

--- Environments for code eval
local function primitive_env()
	local env = { __index=_G }
	return setmetatable(env, env)
end

local function definition_env(aname, bname)
	local env = { __index=_G }
	env.MV1 = _G[aname]
	if(bname) then
		env.MV2 = _G[bname]
	end
	for name, mac in pairs(operator_macros) do
		env[name] = mac
	end
	for name, f in pairs(cmath) do
		env[name] = f
	end
	env.abs = env.fabs
	env.Inf = e5
	env.isdual = macro(function(a)
		local ty = a.tree.expressions[1].type.displayname
		if(ty == "Pnt") then
			return `true
		else
			return `false
		end
	end)
	
	return setmetatable(env, env)
end

--- Primitive op models
local function binop_model(name, aname, bname)
	local abases = B.types[aname]
	local bbases = B.types[bname]
	local op = F.productList(abases, bbases, name)

	for idx, instops in pairs(op.inst) do
		for k=1, #instops do
			local instop = instops[k]
			if(instop.r.w == 1) then
				instop.op = "+"
			elseif(instop.r.w == -1) then
				instop.op = "-"
			else
				instop.op = "+"..instop.r.w.."*"
			end
		end
	end
	
	op.op = name
	op.inputs = {
		{ name="a", type=aname },
		{ name="b", type=bname },
	}
	op.res = F.makeType(op.blades, aname..bname) 
	generate_type(op.res)
	return op
end

local function unop_model(name, aname)
	local bases = B.types[aname]
	local m = {
		desc = aname,
		bases = bases,
	}
	return {
		type = aname,
		op = name,
		coefficients = F.versionList(m, name),
		bases = basis_names(bases),
	}
end

--- Op codegen
local function codegen_binop(name, aname, bname)
	local model = binop_model(name, aname, bname)
	local code = tem:gen(model, "op")
	return eval(name, code, primitive_env())
end

local function codegen_unop(name, aname)
	local model = unop_model(name, aname)
	local code = tem:gen(model, "unop")
	return eval(name, code, primitive_env())
end

local function codegen_definition(name, aname, bname)
	local model = {
		op = name,
		inputs = {},
	}
	model.inputs[1] = { name="a", type=aname }
	if(bname) then
		model.inputs[2] = { name="b", type=bname }
	end
	
	local code = tem:gen(model, name)
	return eval(name, code, definition_env(aname, bname))
end

--- Op generators
local operator_generator = function(name, kind)
	if(kind == "unop") then
		return function(aname)
			local k = opkeyty(name, aname)
			if(not generated[k]) then
				generated[k] = codegen_unop(name, aname)
				generated_funcs[name] = generated[k]
			end
			return generated[k]
		end
	else
		return function(aname, bname)
			local k = opkeyty(name, aname, bname)
			if(not generated[k]) then
				generated[k] = codegen_binop(name, aname, bname)
				generated_funcs[name] = generated[k]
			end
			return generated[k]
		end
	end
end

function definition_generator(name)
	return function(aname, bname)
		local k = opkeyty(name, aname, bname)
		if(not generated[k]) then
			generated[k] = codegen_definition(name, aname, bname)
			generated_funcs[name] = generated[k]
		end
		return generated[k]
	end
end

--- Op macros (used in to generate operator dependencies based on types)
local function operator_macro(name, kind)
	local g = operator_generators[name]
	
	if(kind == "binop") then
		return macro(function(a, b)
			local aname = a.tree.expressions[1].type.displayname
			local bname = b.tree.expressions[1].type.displayname
			local f = g(aname, bname)
			return `f(a, b)
		end)
	else
		return macro(function(a)
			local aname = a.tree.expressions[1].type.displayname
			local f = g(aname)
			return `f(a)
		end)
	end
end

local function definition_macro(name)
	local g = definition_generator(name)
	
	return macro(function(a, b)
		local aname = a.tree.expressions[1].type.displayname
		if(b) then
			local bname = b.tree.expressions[1].type.displayname
			local f = g(aname, bname)
			return `f(a, b)
		else
			local f = g(aname)
			return `f(a)
		end
	end)
end

--- Op application
local operator_apply = function(name, kind)
	local g = operator_generators[name]
	
	if(kind == "binop") then
		return function(a, b)
			local aname = terralib.typeof(a).displayname
			local bname = terralib.typeof(b).displayname
			return g(aname, bname)(a, b)
		end
	else
		return function(a)
			local aname = terralib.typeof(a).displayname
			return g(aname)(a)
		end
	end
end

local function definition_apply(name)
	local g = definition_generator(name)
	return function(a, b)
		local aname = terralib.typeof(a).displayname
		if(b) then
			local bname = terralib.typeof(b).displayname
			return g(aname, bname)(a, b)
		else
			return g(aname)(a)
		end
	end
end

--- initialize the system
function M.initialize()
	M.define("inverse", [[
	terra inverse(a : MV1)
		var sca = (a*reverse(a)).s
		return a*s{1/sca}
	end
	]])
	
	M.define("div", [[
	terra div(a : MV1, b : MV2)
		return a*inverse(b)
	end
	]])
	
	for name, kind in pairs(primitives) do
		operator_generators[name] = operator_generator(name, kind)
		operator_macros[name] = operator_macro(name, kind)
		M[name] = operator_apply(name, kind)
	end
	
	-- must come last (depends on primitives and div for Terra metamethods)
	for name in pairs(B.types) do
		generate_type(name)
	end
end

--- define a function based on primitive and already defined operators
function M.define(name, codetem)
	tem[name] = codetem
	M[name] = definition_apply(name)
	operator_macros[name] = definition_macro(name)
end

--- get a Terra function for a given name
function M.operator(name)
	return generated_funcs[name]
end

return M