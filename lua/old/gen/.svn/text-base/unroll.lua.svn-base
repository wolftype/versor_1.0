--unroll tests (e.g. r * v * !r)

require "cosmo"
require "basis"
require "types"
require "funcs"

--input A, B, and An Operation (inner, outer, geometric)
local prod = function(tx,ty,op)

	local result = productList( tx, ty, op )	

	--return type	
	local rtype = productType(result);
	--getTypeFromString( productTypeString(result), States )
	 		
	--a list of bases
	for i, iv in ipairs(result) do	
		--the basis
		for j, jv in pairs(iv) do
			print(j)
			--a list of contributing expressions
			for k, kv in pairs( jv ) do
				print(kv.a, kv.b, " w: ", kv.r.w)
			end
		end
	end

	return rtype
end

local version = function(tx, op)
	local res = versionList (tx, op)
	for i, iv in ipairs(res) do
		print(iv.id, iv.w)
	end
end

--has parenthesis
local parenthesis = function (w)
	if w:find("%b()") then return true
	else return false
end

--strip parenthesis
local strip = function(w)
	local s, e = w:find("%b()") 
	w = tmp:sub(s+1, e-1)
	return w
end

local match = function(w)
	local out = {}
	local found = 0
	for x in w:gmatch("%b()") do
		table.insert(out, strip(x))
		found = 1
	end
	if found then return out
	else return false
end

--parenthetical operations graph
local pgraph = function(w)

	local temp = w
	local out = {}

--[[	
	while ( parenthesis(temp) ) do
	
	result = match(temp)
	
	for i, v in ipairs(result) do match(v) end
	

	while temp:find("%b()") do

		for w in temp:gmatch("%b()") do				

			local sub = {}
			local tmp = w
			while tmp:find("%b()") do
					
					local s, e = tmp:find("%b()") 
					tmp = tmp:sub(s+1, e-1)
					table.insert(sub, tmp)					

			end		
		
			table.insert(out, sub)
		end
	end
--]]	
	

	return out

end



--parse a GA expression
local unroll = function(expression)

	local words = pgraph(expression)	
	
	for i, iv in ipairs(words) do
		--for all non space tokens
--		print (iv)
--		for w in iv:gmatch("%S+") do 
--			print(w)
--			if w:match("%w") then print ("(is a type)") end
--			if w:match("[%*%^%<]") then print ("(is an op)") end
--		end
	
	end
	
end

unroll("(Rot * (Vec * (v+r) - (v+r) ) * ~Rot)")

--get casting (relevant parts of output to input)
--return type, expression list
--local exp = {}
-- exp[1] = prod(Rot, Vec, "gp") 
-- exp[2] = prod(Rot, Vec, "gp")
-- unrollProduct( Vec,  !Rot, )