-- MAIN FUNCTIONS FOR ANALYSIS OF GENERATION OF GA RETURN TYPES

require "basis"
--require "types"

module("funcs", package.seeall)

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
local compare = function(w1, w2) 
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

printResult = function(x)
	for i,iv in ipairs(x) do
		for k, kv in pairs(iv) do
			print (kv[1].r.id)
			-- for j, jv in ipairs(kv) do
			-- 	print (jv.r.id)
			-- end
		end
	end	
end

--x is a paired ordered instruction list, outputs a simplified return type and ipaired ordered nstruction list
--format is
toInstructionList = function(x, states)
	n = 1
	ntab = {}
	mvtype = ""
	
	for i,iv in ipairs(x) do
		for k, kv in pairs(iv) do
			mvtype = mvtype .. k
			ntab[n] = kv
			for j, jv in ipairs(ntab[n]) do
				jv.r = jv.r.w
			end
			n = n + 1
		end
	end
	
	local t = getTypeFromBasisString(mvtype, states)
	return {type=t, inst=ntab}
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
getTypeId = function(n,x)

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

--Convert String s of BASES to Type culled from List x of types (typicall AllStates)
getTypeFromBasisString = function(s,x)
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
	local nm = getTypeId(n,x)
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

-- getTypeFromTable = function(t)
-- 	return getTypeFromString( tableToString(t,""), States );
-- end



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

productTally = function(tx,ty,operation)
	--list of instructions
	local tally = {} 		--running tally
	local combined = {}		--compressed tally
	
	--fetch table pairs of values in types
	idx = 0
	for i,iv in pairs(tx.bases) do
		for j,jv in pairs(ty.bases) do			
			prod = iv[operation][jv]
			for k, kv in pairs(prod) do
				-- instruction = {a = i-1, b = j-1, r = kv}
				instruction = {a = i, b = j, r = kv}
				idx = idx + 1
				tally[idx] = instruction 
			end
		end
	end

	--check for similar ids in the tally, or if weight is 0	
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
		
	--  convert to ordered list _e1 = inst, _e2 = inst, etc.
	local Ordered = toNumberedList(combined)
	table.sort(Ordered, compare)
	return Ordered
end
--returns a table with instructions and type
--basis blades are keys to lists of 
productList = function(tx, ty, operation, states) 	
	
	local ordered = productTally(tx,ty,operation)
	-- convert to ipairs of inst and type
	return toInstructionList(ordered, states)

end

	
-- build type string (to be used with getTypeFromString)
-- productTypeString = function (result)
-- 	local mvtype = ""
-- 
-- 	for i, iv in ipairs(result) do
-- 		for j, jv in pairs(iv)do
-- 				mvtype = mvtype .. j
-- 		end
-- 	end
-- 	
-- 	return mvtype
-- 	
-- end

versionTypeString = function (result)
	local mvtype = ""
	
	for i, iv in ipairs(result) do
		mvtype = mvtype .. iv.id
	end
	
	return mvtype
end



-- getTYPE of productList from States
getProductListType = function (list)
	return list.type
--	return getTypeFromBasisString( productTypeString(list), AllStates )
end
getTypeFromProductList = function(list)
	return getTypeFromBasisString( productTypeString(list), AllStates )
end

getVersionListType = function (list)
	return getTypeFromBasisString( versionTypeString(list), AllStates)
end

getProductType = function( tx, ty, op)
	return getProductListType( productList(tx,ty,op) )
end

--TURNS RESULT OF PRODUCTLIST INTO STRING OF INSTRUCTIONS
--deprecated use Token MakePType instead
-- productCompute = function(result)	
-- 
-- 	local bases = {}
-- 	local words = {}
-- 	
-- 	for i, iv in ipairs(result.inst) do
-- 
-- 		words[i] = ""
-- 
-- 		for k, kv in ipairs(iv) do
-- 
-- 				local tok = ""
-- 				
-- 				if k > 1 then 
-- 					if kv.r < 0 then tok = " - "
-- 					else tok = " + " end
-- 				else
-- 					if kv.r < 0 then tok = " - " end
-- 				end
-- 				
-- 				--note the -1 here, to align lua array (which start at 1) with c arrays (which start at 0)
-- 				tok = tok .. string.format("(a[%d] * b[%d])", kv.a-1, kv.b-1)
-- 				
-- 				words[i] = words[i] .. tok
-- 
-- 			end
-- 	end
-- 	
-- 	local t = {}
-- 	t["type"] = result.type--productTypeString(result)
-- 	t["inst"] = words
-- 	return t
-- end

--CREATE LIST AND TURN INTO Table with ["type"] and ["inst"]
-- product = function(tx, ty, operation) 
-- 
-- 	local tlist = productList(tx,ty,operation)
-- 	local phrase = productCompute(tlist)
-- 
-- 	return phrase
-- end


-- GEN KEYS  --
getKey = function(x) 
	local n = 0
	for i, iv in pairs(x) do
		n = n + iv.key		
	end
	return n
end

calcKeys = function(x)
	x.key = getKey(x.bases)
end


--- DEPRECATED ---

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
	return getType(n, x)
--	return getType(n,x)
end

--not sure what use this is
-- vers = function(tx, operation)
-- 	local tmp = ""
-- 	for i,iv in ipairs(tx.bases) do
-- 		res = iv[operation]
-- 		tmp = tmp .. res.id
-- 	end
-- 	return getTypeFromString(tmp)
-- end


