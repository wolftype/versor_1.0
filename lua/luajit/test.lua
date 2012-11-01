local G = require "grammar"
local F = require "funcs"
require "cosmo"
local product_1;

local MV = {
	__mul = function(a,b) return product(a, b, "gp") end, -- *  (geometric product)
	__pow = function(a,b) return product(a, b, "op") end, -- ^  (outer product)
	__concat  = function(a,b) return product(a, b, "ip") end  -- .. (inner product)
}

local ftable = {}

local function eval(ma, mb, op)

	local result =  {}
	
	local list = F.productList(ma,mb,op)	
	result[1] = F.getProductListType( list ).id

	for i, iv in ipairs(list) do										-- For every new blade
		idx = i + 1
		for j, jv in pairs(iv) do										-- For every word
			
			local ts = ""
			
			for k, kv in pairs(jv) do
				if (kv.r.w > 0) then 
					if k > 1 and k <= #jv then 
						ts = ts .. " + "
					end
					ts = ts .. "ma[" .. (kv.a + 2) .. "] * mb[" .. (kv.b+2) .. "]"
				else 
					ts = ts .. " - ( ma[" .. (kv.a+2) .. "] * mb[" .. (kv.b+2) .. "] )" 
				end
			end
			result[idx] = ts
		end 
	end	
	
	local fs = ""
	for i,iv in ipairs(result) do
		fs = fs .. iv
		if i < #result then
			fs = fs .. ","
		end
	end
	
	return fs
end

local function makeFunc(ma, mb, op)
	
	local tmp = eval(ma,mb, op)
	
	local template =[[
		return MV:new{ {$instructions} }
	]]
	
	local code = cosmo.f(template){
		instructions = tmp
	}
	
	loadstring
end



product = function (ma, mb, op)

	--check if function is in table
		
		
	return MV:new( result )	
	
end



function MV:new( x )
	x = x or {}
	local tmp = {}
	setmetatable(tmp, self)
	self.__index = self
	for i, v in ipairs( x ) do tmp[i] = v end	

	return tmp
end

function MV:print()
	for _, v in ipairs( self ) do 
		if (type(v) == "table") then print (v.id) else print( v ) end
	end
end


--INSTANCES
local a = MV:new({Vec,1,2,3})
local b = MV:new({Vec,1,2,3})

--a:print();

--local c = a <= b
--c:print();

--local tmp =  F.product(Vec, Vec,"op")


--print(tmp.type.id )
--print( tmp.inst[1][2] )


--G.ctPrint( G.Expr:match("Vec(ab) ^ Vec(cd)"), 0 )

--has this been done?  return 

-- local result = {}
-- 
-- local tmp = F.productList(ma[1],mb[1],op) 						-- Create Combinatorics Instructions	
-- 
-- local s = eval(ma,mb,tmp)
-- 
-- local type = F.getProductListType( tmp )
-- 
-- result[1] = type
-- 
-- for i, iv in ipairs(tmp) do										-- For every new blade
-- 	idx = i + 1
-- 	result[idx] = 0		
-- 	for j, jv in pairs(iv) do									-- For every word
-- 		for k, kv in pairs(jv) do
-- 			if (kv.r.w > 0) then result[idx] = result[idx] + ma[kv.a+2] * mb[kv.b+2]
-- 			else result[idx] = result[idx] - ( ma[kv.a+2] * mb[kv.b+2] ) end
-- 		end
-- 	end 
-- end