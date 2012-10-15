require "funcs"
require "types"

--unrolled type from argument
makeShaderAType = function(tx, id, td)
	return ""..tx.id .. " "..td.." = "..id..";"
end


--WRITE BASIS BLADE from INPUTS a AND b
makeShaderPToken = function(sx, sy, tx, n1, n2)
 	out = ""
	for k, kv in pairs(tx) do
	 	if kv.r.w == -1 then out = out .. " - "
		else
			if k ~= 1 then out = out .. " + " end
		end
		out = out ..n1.."."..sx.bases[kv.a+1].id:gsub("_","").." * "..n2.."."..sy.bases[kv.b+1].id:gsub("_","")		
	end
	return out
end



--unrolled type from productList
makeShaderPType = function(tx, sx, sy, n1, n2 )

	local res = getProductListType(tx)
	local out = "(\n"
	local sep = ","	
	
	--for each result blade
	for i, iv in ipairs(tx) do
		for j, jv in pairs(iv) do			
			out = out .. makeShaderPToken(sx, sy, jv, n1, n2)
			if ( i < #tx ) then out = out .. sep end
			out = out .."\n"					
		end	
	end
	
	return out .. ")"
	
end


makeShaderVToken = function (tx)
	out = ""
	for k, kv in ipairs (tx) do
		if kv.w == -1 then out = out .. "-" end
		out = out .. "a[" .. k-1 .. "]"
	end
	return out
end


--unrolled type from versionList
makeShaderVType = function (tx, lhid)
	local res = getVersionListType(tx)

	out = "("
	local sep = ","	
	
	for k, kv in ipairs (tx) do
		if kv.w == -1 then out = out .. "-" end
		out = out .. lhid.."." .. res.bases[k].id:gsub("_","")
		if ( k < #tx ) then out = out .. sep end
	end
	out = out .. ")"
	return out		
end

--casting
makeShaderCType = function (tx, rhid)

	local out = "("
	local sep = ","	
	for i, iv in ipairs(tx) do
--		out = out .. rhid .. "."..tx.bases[iv[2]].id:gsub("_","")
		if ( i < #tx ) then out = out .. sep end
	end
	out = out .. ")"	
	return out	
end

makeShaderSType = function(tx, lhid, rhid)
	local out = "("
	local sep = ","	
	for i, iv in ipairs(tx) do
		out = out .. lhid .. "["..iv[1].."] ".. iv[3] .. rhid .. "["..iv[2].."]"
		if ( i < #tx ) then out = out .. sep end
	end
	out = out .. ")"	
return out
end