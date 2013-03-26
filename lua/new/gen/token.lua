--WRITE BASIS BLADE from INPUTS a AND b
package.path = "../vsrmodule/?.lua;"..package.path

local F = require "funcs"
require "types"
module("token", package.seeall)

--PASS IN PRODUCT LIST
makePToken = function(tx, lhid, rhid)
 	out = ""
 	for j, jv in ipairs(tx) do
		if jv.r == -1 then out = out .. " - "
		else
			if j ~= 1 then out = out .. " + " end
		end
		local ta = jv.a -1
		local tb = jv.b -1
		out = out .. lhid.."["..ta.."] * "..rhid.."["..tb.."]"		
	end
	return out
end

makeVToken = function (tx)
	out = ""
	for k, kv in ipairs (tx) do
		if kv.w == -1 then out = out .. "-" end
		out = out .. "a[" .. k-1 .. "]"
	end
	return out
end

--unrolled type from argument
makeAType = function(tx, id, td)
	return "const "..tx.id .. "& "..td.." = "..id..";"
end

--unrolled type from productList
makePType = function(tx, lhid, rhid)

	local res = tx.type--F.getProductListType(tx)
	local out = "(\n"
	local sep = ","	
	
	--for each result blade
	for i, iv in ipairs(tx) do
--		for j, jv in ipairs(iv) do			
			out = out .. makePToken(iv, lhid, rhid)
			if ( i < #tx ) then out = out .. sep end
			out = out .."\n"					
--		end	
	end
	
	return out .. ")"
		
end

--VERSIONS (REVERSIONS, INVERSIONS, CONJUGATIONS)
makeVType = function (tx, lhid)
	local res = F.getVersionListType(tx)

	out = "("
	local sep = ","	
	
	for k, kv in ipairs (tx) do
		if kv.w == -1 then out = out .. "-" end
		out = out .. lhid.."[" .. k-1 .. "]"
		if ( k < #tx ) then out = out .. sep end
	end
	out = out .. ")"
	return out		
end

--CASTING
makeCType = function (ctype, tx, rhid)
	
	print("CASTING")

	local out = "("
	local sep = ","	
	local res = {}
	
	for i = 1, #ctype.bases, 1 do
		table.insert(res,-1)
	end
	
	for i, iv in ipairs(tx)do
		res[ iv[1] + 1 ] = iv[2]
	end

	for i = 1, #res, 1 do

		if res[i] == -1 then out = out .. "0"
		else out = out .. rhid .. "["..res[i].."]" end 	
		if ( i < #res ) then out = out .. sep end
		
	end
	
	out = out .. ")"	
	
	return out	
end

makeSType = function(tx, lhid, rhid)
	local out = "("
	local sep = ","	
	for i, iv in ipairs(tx) do
		out = out .. lhid .. "["..iv[1].."] ".. iv[3] .. rhid .. "["..iv[2].."]"
		if ( i < #tx ) then out = out .. sep end
	end
	out = out .. ")"	
return out
end
