package.path = "../tab/?.lua;../util/?.lua;" .. package.path

require "basis"
require "types"
require "funcs"


print("goal: figure out how to unroll\n")


--[[
step 1: figure out return Value
step 2: trace back contributing factors
]]

local test = function()

	print("reversion")
	local t = versionList( Rot, "conjugate" )
	for i, iv in ipairs(t) do
		print (iv.id, iv.w)
	end
	print("\n")

	print("product")
	local s = productList( Vec, Vec, "gp")
	for i, iv in ipairs(s) do
		for j, jv in pairs(iv) do
			print(j)
			for k, kv in pairs(jv) do
				print(kv.a, kv.b,  kv.r.w)
			end
		end	
	end

end


--make variables from productList
makeVars = function(tx)
	for i, iv in ipairs (tx) do
		for j, jv in pairs(iv) do
			out = "T "..string.sub(j,2).." = "
			print( out )
			for k, kv in pairs(jv) do
				print(k)--out = out .. 
			end
		end
	end
end

--makeVars(s)



-----------------TEST-----------------------------

local s = productList( Dll, Pnt, "op")

print( makeType(s) )






-- local s2 = productList( Rot_Vec, Rot, "gp")
-- local u2 = productType(s)
-- print("\n", u2.id, "\n")
-- 
-- for i, iv in ipairs(s2) do
-- 	for j, jv in pairs(iv) do
-- 		print( calcWord(jv) )
-- 	end	
-- end

--given a productList and idx
--[[
--calc new LH productList from LH productList and RH State
productTrail = function(tx, rh, op)
	
	local lh = getProductListType(tx)

	local ret = productList(lh, rh, op)
	local typ = getProductListType(ret)

	print ("lh: ", lh.id)
	print ("rh: ", rh.id)
	print ("r: ", typ.id)
	


	for i, iv in ipairs (ret) do
		for j, jv in pairs(iv) do

			print("\n\n",j)
			
			for k, kv in pairs(jv) do
				print("\n\nat: ",kv.a)
				for l, lv in pairs(tx[ kv.a +1 ]) do
					print ("\t", l)
					for m, mv in pairs(lv) do
						print ("\t\t", mv.a, mv.b, mv.r.w)
					end
				end
				print("\n\t", kv.b, kv.r.w)
				
			end
		end
	end

end

productTrail(s, Pss, "gp")

--]]