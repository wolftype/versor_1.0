package.path = "../?.lua;../vsrmodule/?.lua;".. package.path
local F = require "funcs"

local NSP = {id ="ID", bases = { _s, _e12noni, _e13noni, _e23noni, _e123no, _e123ni }}


local c = F.productTally(NSP,Par,"gp")

F.printResult( c )

print( F.productList(NSP,Par,"gp").type.id )

-- for i,iv in ipairs(AllStates) do
-- 
-- 
-- 	local match = "_s_e12noni_e13noni_e23noni_e123no_e123ni"
-- 	print( F.getTypeFromBasisString(match, AllStates).id )
-- 	
-- 	-- if #iv.bases == 5 then 
-- 	-- 	print (iv.id) 
-- 	-- 	for k,kv in ipairs(iv.bases) do
-- 	-- 		print (kv.id)
-- 	-- 	end
-- 	-- end
-- end