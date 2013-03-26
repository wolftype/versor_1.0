local G = require "grammar"
local F = require "funcs"
require "cosmo"

local function eval(ma, mb, list)
	
	local result =  {}
	result[1] = F.getProductListType( list )

	local word = {}
	for i, iv in ipairs(list) do										-- For every new blade
		idx = i + 1
		result[idx] = 0													-- Default
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
			word[i] = ts
			--print(ts)
		end 
	end	
	
	local fs = ""
	for i,iv in ipairs(word) do
		fs = fs .. iv
		if i < #word then
			fs = fs .. ","
		end
	end
	
	return fs
end


local test = function(ta, tb)
	a = ta
	b = tb
	local func = loadstring("return a + b")
	print ( func() )
end

test(3,5)

-- local loadtest = function()
-- 	a = 3
-- 	b = 5
-- 	local func = loadstring("local a = ta; local b = tb; return a + b")
-- 	return func()
-- end
-- 
-- loadtest()

	-- local template =[[
	-- 	return MV:new{ {$instructions} }
	-- ]]
	-- local cosmo.f(template){
	-- 	instructions = "test"
	-- }


--print( eval(Vec,Vec,F.productList(Vec,Vec,"gp")) )