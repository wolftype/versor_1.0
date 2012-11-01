--WRITE BASIS BLADE from INPUTS a AND b

--PASS IN PRODUCT LIST
makePToken = function(tx, lhid, rhid)
 	out = ""
	for k, kv in pairs(tx) do
	 	if kv.r.w == -1 then out = out .. " - "
		else
			if k ~= 1 then out = out .. " + " end
		end
		out = out .. lhid.."["..kv.a.."] * "..rhid.."["..kv.b.."]"		
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

	local res = getProductListType(tx)
	local out = "(\n"
	local sep = ","	
	
	--for each result blade
	for i, iv in ipairs(tx) do
		for j, jv in pairs(iv) do			
			out = out .. makePToken(jv, lhid, rhid)
			if ( i < #tx ) then out = out .. sep end
			out = out .."\n"					
		end	
	end
	
	return out .. ")"
	
--	local typ = "MV<" ..#res.bases..">"	
--	return typ .. " ".. string.lower(res.id).." " .. out .. ")"
	
end

--unrolled type from versionList
makeVType = function (tx, lhid)
	local res = getVersionListType(tx)

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

--casting
makeCType = function (ctype, tx, rhid)

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
