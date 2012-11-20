-- local G = require "grammar"
local T = require "types"
local F = require "funcs2"

local symbols = {gp=1, op=2, ip=3}
local tempTable = {}
local instructions = {}


instance = function(ma,mb,instruct)
	return _G[instruct.type.id]( calcProd( ma,mb,instruct ) )
end

makeInstructions = function(ma,mb,op)
	local tlist = F.productList(ma,mb,op)	
	local ttype = F.getProductListType(tlist)
	return {type = ttype, list = tlist}
end

--valAt = function(ma,mb,i);

calcProd = function(ma,mb, instruct)

	local tmp = instruct.list
	local out = {}

	local t = 0	
	for i, iv in ipairs(tmp) do 
		for k,kv in pairs(iv) do 
--			print(k,kv)
			t = t + 1
			local res = 0
			for j, jv in ipairs(kv) do
				if (jv.r.w > 0) then res = res + ma[jv.a+1] * mb[jv.b+1]
				else res = res - ma[jv.a+1] * mb[jv.b+1] end
			end
			out[t] = res
		end
	end
	
	return out
end

product = function (ma, mb, op)
	--index of function 
	local idx = ma.idx * #AllStates * 3 + mb.idx * 3 + symbols[op]
	
	if (instructions[idx]==nil) then 
		print(ma.id, mb.id, op, "first time calculating must make instructions")
		instructions[idx] = makeInstructions(ma,mb,op)
	--	tempTable[idx] = makeFunc( instructions[idx] )
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
	print(self.id, self.idx, out)
	
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


-- t = function(...)
-- 	if (type(arg[1]) == "table") then print("TABLE") 
-- 		--for k,kv in ipairs(arg[1]) do print(kv) end
-- 	else print("NOT") end
-- 	
-- 	x = {}
-- 	if( type(arg[1]) == "table" ) then print("is a arg list") x = arg[1]
-- 	else 
-- 		for k,v in ipairs(arg) do x[k] = v end
-- 	end
-- 	
-- 	for k,kv in ipairs(x) do print(kv) end
-- end
-- 
-- t({1,2,3,4})

-- k = Rot({1,3,4,5})
-- k:print()
g = Pnt(1,1,0,.3,2) ^ Pnt(1,2,1,3,3) ^ Pnt(3,3,3,5,6)--Vec(1,2,0) * Vec(6,1,9) * Vec(2,3,4) * Rot(1,1,1,1)
g:print()

e = Pnt(1,1,0,.3,2) ^ Pnt(1,2,1,3,3) ^ Pnt(3,3,3,5,6)--Vec(1,2,0) * Vec(6,1,9) * Vec(2,3,4) * Rot(1,1,1,1)

e:print()
--f = Vec * Rot

-- --Make subclass
-- function MV:sub(x)
-- 	x = x or {}
-- --	local mt = {__index = x}	
-- 	
-- 	function x:new(a)
-- 		a = a or {}
-- 		setmetatable(a, self)
-- 		self.__index = self
-- 		print("making a",a.id)
-- 		return a
-- 	end
-- 	
-- 	setmetatable(x, self)
-- 	self.__index = self
-- 	return x
-- end