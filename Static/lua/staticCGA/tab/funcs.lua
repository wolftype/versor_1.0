require "basis"
--require "types"

--PRINTING

pretty = function(tx)
	print(tx.id, #tx.bases, "\n")
	for k, kv in ipairs(tx.bases) do
		print(kv.id)
	end
end


checkMembership = function(tx, list)
	for i, iv in ipairs(list) do
		if iv.id == tx.id then return true end
	end
	return false
end

--SORTING

--x is a table of blades.  For each k in x, find order
--w1 and w2 are "words" -- i.e. instruction lists for calculating specific blades
--"order" is the order of basis blades
compare = function(w1, w2) 
	a = 0
	b = 0
	for k, kv in pairs(w1) do
		for i, iv in ipairs(order) do
			if k == iv.id then a = i end
		end
	end
	for k, kv in pairs(w2) do
		for i, iv in ipairs(order) do
			if k == iv.id then b = i end
		end
	end
	return a < b
end

--x is an instruction list
toNumberedList = function(x)
	n = 1
	ntab = {}
	for k, kv in pairs(x) do
		ntab[n] = {}
		ntab[n][k] = kv
		n = n + 1
	end
	return ntab
end

--check for similar grade usage for assignment
gradeShare = function(tx, ty) 
	local n = 0
	for i, iv in ipairs(tx.bases) do
		for j, jv in ipairs(ty.bases) do
			if iv.id == jv.id then n = 1 end
		end
	end
	return n
end




--Find name string of type from string (by comparing key value n to list of types x)
getType = function(n,x)

	if n == 0 then
		return "Sca"
	end
	
	for i, v in ipairs(x) do
		if v.key == n then 			
			return v.id
		end
	end

	--print("no type found")
	return "Muv"
end


getTypeDesc = function(n,x)
	if n == 0 then
		return "scalar null"
	end
	for i, v in ipairs(x) do
		if v.key == n then
			return v.desc
		end
	end
	return "Multivector"
end

--Convert String s to Type culled from List x of types
getTypeFromString = function(s,x)
	local n = 0
	local out = ""
	local ba = {}
	for b in string.gmatch(s, "%w+") do
		base = "_" .. b
		for i, v in ipairs (order) do
			if base == v.id then 
				n = n + v.key 
				table.insert(ba, v)
				--print(base)
			end
		end
	end
	--print(s)
	local nm = getType(n,x)
	--print (nm)
	--if nm == "Muv" then return 0 end
	t = { id = nm, desc = getTypeDesc(n,x), bases = ba, key = n}
	return t
end

--Convert List of Bases to string
tableToString = function(x, sep)
	local out = ""
	for i,iv in ipairs(x) do
		out = out..iv.id..sep
	end
	return out
end

getTypeFromTable = function(t)
	return getTypeFromString( tableToString(t,""), States );
end

--Experimental: Looks For Difference in Type between two Types and looks up in list x
diffType = function(tx, ty, x)
	local n = 0 
	if tx.key == ty.key then n = tx.key end
	if tx.key > ty.key then
		n = tx.key - ty.key
	end
	if tx.key < ty.key then
		n = ty.key - tx.key
	end
--	print(n)
	return _G[getType(n, x)]
--	return getType(n,x)
end

--not sure what use this is
vers = function(tx, operation)
	local tmp = ""
	for i,iv in ipairs(tx.bases) do
		res = iv[operation]
		tmp = tmp .. res.id
	end
	return getTypeFromString(tmp)
end

--STRING RETURNING FUNCTIONS (version, cast, product)
--operations that always return same type 

--RETURNS LIST OF CHANGES
versionString = function(tx, operation)
	local tally = {}	
	for i, iv in ipairs(tx.bases) do
		local out = ""
		res = iv[operation]
		local tn = i-1
		if res.w == -1 then out = out .. "-" end
		out = out .. "a[" .. tn .. "]"
		tally[i] = out
	end		
	local final = "("
	for i,iv in ipairs(tally) do
		final = final .. iv
		if i < #tally then final = final .. "," end
	end
	final = final ..");"
	return final
end


versionList = function (tx, operation)
	local res = {}
	for i, iv in ipairs(tx.bases) do
		res[i] = iv[operation]
	end
	return res
end

--Cast from TY to TX
castList = function (tx, ty)
	local res = {}
	for i, iv in ipairs(tx.bases) do
		for k, kv in ipairs(ty.bases) do
			if iv == kv then				
				table.insert( res, {i-1, k-1 } )
			end 
		end
	end	
	return res
end

--add TY to TX
sumList = function(tx, ty, op)
	
	local cl = castList(tx,ty)

	for i, iv in ipairs(cl) do
		iv[3] = op
	end

	
end

--copies values from type tx to type ty 
cast = function (tx, ty)
	local out = ""
	for i, iv in ipairs(tx.bases) do
		for k, kv in ipairs(ty.bases) do
			if iv == kv then				
				out = out .. string.format( "a[%d] = b[%d];\n", i-1, k-1 )
			end 
		end
	end
	return out
end

--copies first x elems
directCast = function(tx)
	local out = ""
	for i, iv in ipairs(tx.bases) do
		out = out .. string.format("a[%d] = b[%d];\n", i-1, i-1)
	end
	return out
end	

--returns a table with instructions and type
productList = function(tx, ty, operation) 	
	--list of instructions
	local tally = {} 		--running tally
	local combined = {}		--compressed tally
	
	--fetch table pairs of values in types
	idx = 0
	for i,iv in pairs(tx.bases) do
		for j,jv in pairs(ty.bases) do			
			prod = iv[operation][jv]
			for k, kv in pairs(prod) do
				instruction = {a = i-1, b = j-1, r = kv}
				idx = idx + 1
				tally[idx] = instruction 
			end
		end
	end

	--check for similar ids, or if weight is 0	
	for i,v in pairs(tally) do
		exists = 0
		--if basis already in a table, insert additional instruction
		for j,jv in pairs(combined) do
			if v.r.id == j then
				exists = 1
				if v.r.w ~= 0 then
					table.insert(jv, v )
				end
			end
		end

		--otherwise, add new v to table
		if exists == 0 then	
			if v.r.w ~= 0 then
				newBasis = v.r.id
				--print (newBasis)
				combined[newBasis] = {v}
			end
		end
	end
	
--	for i, iv in pairs(combined) do
--		print(i)
--	end
	
	--  convert to ordered list _e1 = inst, _e2 = inst, etc.
	local Ordered = toNumberedList(combined)
	table.sort(Ordered, compare)
	
	return Ordered

end

	
-- build type string (to be used with getTypeFromString)
productTypeString = function (result)
	local mvtype = ""

	for i, iv in ipairs(result) do
		for j, jv in pairs(iv)do
				mvtype = mvtype .. j
		end
	end
	
	return mvtype
	
end

versionTypeString = function (result)
	local mvtype = ""
	
	for i, iv in ipairs(result) do
		mvtype = mvtype .. iv.id
	end
	
	return mvtype
end

-- getTYPE of productList from States
getProductListType = function (list)
	return getTypeFromString( productTypeString(list), AllStates )
end

getVersionListType = function (list)
	return getTypeFromString( versionTypeString(list), AllStates)
end

getProductType = function( tx, ty, op)
	return getProductListType( productList(tx,ty,op) )
end

--WRITE BASIS BLADE from INPUTS a AND b
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


--CREATE LIST AND TURN INTO STRING
product = function(tx, ty, operation) 

	local Final = productList(tx,ty,operation)
	local word = productComputeString(Final)

	return word
end

--TURNS RESULT INTO STRING
productComputeString = function(result)	

	local bases = {}
	local words = {}
	
	for i, iv in ipairs(result) do
		
		--words will store a lhs result and a rhs expression
		words[i] = {"",""}

		for j, jv in pairs(iv)do

			--lhs (e.g. r[i])
			words[i][1] = j

			for k, kv in pairs(jv) do

				local tok = ""
				
				if k > 1 then 
					if kv.r.w < 0 then tok = " - "
					else tok = " + " end
				else
					if kv.r.w < 0 then tok = " - " end
				end
				
				tok = tok .. string.format("(a[%d] * b[%d])", kv.a, kv.b)
				
				words[i][2] = words[i][2] .. tok

			end
			
		end
	end
	
	local t = {}
	t["inst"] = words
	t["type"] = productTypeString(result)
	return t
end

-- GEN KEYS  --
getKey = function(x) 
	local n = 0
	for i, iv in pairs(x) do
		n = n + iv.key		
	end
	return n
end

calcKeys = function(x)
--	print(" TYPE KEYS ")
	x.key = getKey(x.bases)
--	print(x.id, "\t", x.key)		
end


sym = {"op","ip", "gp"}

for i, iv in pairs(sym) do
--	pretty ( getProductListType( productList( Dll, Dll, iv) ) )
end

--print ( makeCType(Pnt, castList(Pnt,Vec), "a") )

--TEST REQUIRE--
--for i, iv in ipairs(States) do
--	for k, kv in ipairs(States) do
		--t = product(iv,kv,"gp")
		--print(t.type)
--	end
--end
--END TEST--