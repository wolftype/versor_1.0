-- local G = require "grammar"
local T = require "types"
local F = require "funcs"

local symbol = {op="^",ip="<",gp="*"}
local symidx = {gp=1, op=2, ip=3}
local tempTable = {}
local instructions = {}

module("vsr", package.seeall)

instance = function(ma,mb,instruct)
	return _G[instruct.type.id]( calcProd( ma,mb,instruct ) )
end

calcProd = function(ma,mb, inst)

	local out = {}

	local t = 0	
	for i, iv in ipairs(inst.inst) do 
		t = t + 1
		local res = 0
		for j, jv in ipairs(iv) do
			if (jv.r > 0) then res = res + ma[jv.a] * mb[jv.b] 
			else res = res - ma[jv.a] * mb[jv.b] end
		end
		out[t] = res
	end
	
	return out
end

product = function (ma, mb, op)
	--index of function 
	local idx = ma.idx * #AllStates * 3 + mb.idx * 3 + symidx[op]
	
	if (instructions[idx]==nil) then 
		instructions[idx] = F.productList(ma,mb,op)
		print(ma.id .. symbol[op] .. mb.id .. "="..instructions[idx].type.id, "first time calculating, assembling instructions . . .")		
	end
	
	return instance( ma,mb, instructions[idx] )	
end

local MV = {
	id = "base",
	idx = 0,
	__mul = function(a,b) return product(a, b, "gp") end, -- *  (geometric product)
	__pow = function(a,b) return product(a, b, "op") end, -- ^  (outer product)
	__concat  = function(a,b) return product(a, b, "ip") end,  -- .. (inner product)
	__call = function(table,...) return table:new(...) end,
}

MV.__index = MV

function MV:print()
	local out = ""
	for k, kv in pairs(self) do out = out .. kv .." " end
	print(self.id, out)
	
end

function MV:new(...)
	
	x = {}
	if( type(arg[1]) == "table" ) then --x = arg[1]
		for k,v in ipairs(arg[1]) do x[k] = v end
	else 
		for k,v in ipairs(arg) do x[k] = v end
	end
	
	setmetatable(x, self)
	self.__index = self
	
	--METAMETHODS are NOT INHERITED UNLESS EXPLICITLY DONE SO !!
    local m=getmetatable(self)
    
	if m then
        for k,v in pairs(m) do
            if not rawget(self,k) and k:match("^__") then
                self[k] = m[k]
            end
        end
    end
	
	return x
end

--COPY OVER TO PREDEFINED TABLES
for i, iv in ipairs(AllStates) do
	--print(iv.id)
	setmetatable(iv,MV)
	iv.__index = MV
	local m=getmetatable(MV)
	    
	if m then
        for k,v in pairs(m) do
            if not rawget(MV,k) and k:match("^__") then
                MV[k] = m[k]
            end
        end
    end
	
end
