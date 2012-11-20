local G = require "grammar"
local F = require "funcs"
require "cosmo"
local product_1;

local MV = {
	__mul = function(a,b) return product(a, b, "gp") end, -- *  (geometric product)
	__pow = function(a,b) return product(a, b, "op") end, -- ^  (outer product)
	__concat  = function(a,b) return product(a, b, "ip") end,  -- .. (inner product)
}

-- So any inhertance can also grab member functions like new, reverse, conjugate ,etc
MV.__index = MV

function MV:print()
	local out = ""
	for _, v in ipairs( self ) do 
		if (type(v) == "table") then print (v.id, v.idx) else out = out .. v .. " " end
	end
	print(out)
end

function MV.new(x)
	x = x or {}
	return setmetatable(x, MV)
end
setmetatable(MV, { __call = function(t, ...) return MV.new(...) end })




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

--	print (ma, mb)
--	print ("making func ", ma.id, " "..op.." ", mb.id)
	
--	local tmp = eval(ma,mb, op)
	-- 
	-- local template =[[
	-- 	return MV:new{ {$instructions} }
	-- ]]
	-- 
	-- local code = cosmo.f(template){
	-- 	instructions = tmp
	-- }
--	return "MV:new("..tmp..")";
--	loadstring
end

local function tempFunc(t, k) 
	print("meta index")
	print(k)
	return nil
end

local tempTable = setmetatable({}, {__index = tempFunc } )
--local metaTable = { __index = tempFunc(table, key) } 
--setmetatable( tempTable, metaTable)

local symbols = {gp=1, op=2, ip=3}

product = function (ma, mb, op)
	
	--index of function 
	local idx = ma.idx * #AllStates * 3 + mb.idx * 3 + symbols[op]
	if ( tempTable[idx] == nil ) then 
		tempTable[idx] = makeFunc(ma, mb, op)
	end
	
--	print( tempTable[idx] )
	-- print( tempTable[idx] )
	-- print( tempTable[idx] )
	
end






--INSTANCES
local a = MV({Vec,1,2,3})--MV.new({Vec,1,4,3})
local b = MV.new({Vec,1,2,3})

local c = Vim(1,2,3)

c:print()




--product(Vec, Vec, "gp")
