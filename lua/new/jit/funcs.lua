-- MAIN FUNCTIONS FOR ANALYSIS OF GENERATION OF GA RETURN TYPES
package.path = "../util/?.lua;"..package.path
require "routines"

local B = require "bitBasis"

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



--Convert List of Bases to string
tableToString = function(x, sep)
	local out = ""
	for i,iv in ipairs(x) do
		out = out..iv.id..sep
	end
	return out
end


--List of -1 or 1s
versionList = function (tx, operation)
	local res = {}
	for i, iv in ipairs(tx.bases) do
		res[i] = B.S[iv][operation].w
	end
	return res
end

--Cast from TY to TX
castList = function (tx, ty)
	local res = {}
	for i, iv in ipairs(tx.bases) do
		for k, kv in ipairs(ty.bases) do
			if iv == kv then				
				table.insert( res, {i, k} )
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

--list of instructions for how to combine tx and ty multivectors
productList = function(tx,ty,operation)
		
	local tally = {} 		--running tally
	local combined = {}		--compressed tally
	
	--fetch table pairs of values in types
	idx = 0
	for i,iv in ipairs(tx.bases) do
		
		for j,jv in ipairs(ty.bases) do			
		
			prod = B.S[iv][operation][jv]
		
			for k, kv in ipairs(prod) do
				instruction = {a = i, b = j, r = kv}
				idx = idx + 1
				tally[idx] = instruction 
			end
		end
	end

	-- --check for similar ids in the tally, or if weight is 0	
	for i,iv in ipairs(tally) do
		
		-- print ( basisString( iv.r.id) , iv.a, iv.b, iv.r.w )
		local exists = 0
		
		--if basis already in a table, insert additional instruction
		for j, jv in pairs(combined) do
			if iv.r.id == j then
				exists = 1
				if iv.r.w ~= 0 then
					table.insert(jv, iv )
				end
			end
		end
	 
		--otherwise, add the new instruction to table
		if exists == 0 then	
			if iv.r.w ~= 0 then
				local newBasis = iv.r.id
				combined[newBasis] = {iv}
			end
		end
	end
	
	return B.order(combined)
end

--pass in a product list to make a new type
makeType = function(p, nd)

	local f = B.keyCalc(p)
	
	local sum = 0	
	for i, iv in ipairs(f) do sum = sum + iv end
	if sum == 0 then return end

	local isMem = false
	local t = ""

	for i,iv in pairs( B.keys ) do
		
		if B.keyCheck(f, iv) then isMem = true return i end
	
	end
		
	-- if (isMem==true) then 
	-- 	--print("IS OLD: ", t)  
	-- 	return t
	-- else   
	--if function hasn't returned yet, then type iss NEW   
		--add to keys  
		B.keys[ nd ] = f
		--add to built types
		B.types[ nd ] = p
		--print info 
		print (nd, "NEW KEY: ", B.keyString( nd ))
		for i, iv in ipairs(p) do
			print ( B.basisString(iv) )
		end
		print("\n")  
		return nd
   -- end
	
end


--x is a paired ordered instruction list, outputs a simplified return type and ipaired ordered nstruction list
--format is
-- toInstructionList = function(x, states)
-- 	n = 1
-- 	ntab = {}
-- 	mvtype = ""
-- 	
-- 	for i,iv in ipairs(x) do
-- 		for k, kv in pairs(iv) do
-- 			mvtype = mvtype .. k
-- 			ntab[n] = kv
-- 			for j, jv in ipairs(ntab[n]) do
-- 				jv.r = jv.r.w
-- 			end
-- 			n = n + 1
-- 		end
-- 	end
-- 	
-- 	local t = getTypeFromBasisString(mvtype, states)
-- 	return {type=t, inst=ntab}
-- end

-- --Convert String s of BASES to Type culled from List x of types (typicall AllStates)
-- getTypeFromBasisString = function(s,x)
-- 	local n = 0
-- 	local out = ""
-- 	local ba = {}
-- 	for b in string.gmatch(s, "%w+") do
-- 		base = "_" .. b
-- 		for i, v in ipairs (order) do
-- 			if base == v.id then 
-- 				n = n + v.key 
-- 				table.insert(ba, v)
-- 				--print(base)
-- 			end
-- 		end
-- 	end
-- 	--print(s)
-- 	local nm = getTypeId(n,x)
-- 	--print (nm)
-- 	--if nm == "Muv" then return 0 end
-- 	t = { id = nm, desc = getTypeDesc(n,x), bases = ba, key = n}
-- 	return t
-- end

-- versionTypeString = function (result)
-- 	local mvtype = ""
-- 	
-- 	for i, iv in ipairs(result) do
-- 		mvtype = mvtype .. iv.id
-- 	end
-- 	
-- 	return mvtype
-- end


--Experimental: Looks For Difference in Type between two Types and looks up in list x
-- diffType = function(tx, ty, x)
-- 	local n = 0 
-- 	if tx.key == ty.key then n = tx.key end
-- 	if tx.key > ty.key then
-- 		n = tx.key - ty.key
-- 	end
-- 	if tx.key < ty.key then
-- 		n = ty.key - tx.key
-- 	end
-- --	print(n)
-- 	return getType(n, x)
-- --	return getType(n,x)
-- end



--copies values from type tx to type ty 
-- cast = function (tx, ty)
-- 	local out = ""
-- 	for i, iv in ipairs(tx.bases) do
-- 		for k, kv in ipairs(ty.bases) do
-- 			if iv == kv then				
-- 				out = out .. string.format( "a[%d] = b[%d];\n", i-1, k-1 )
-- 			end 
-- 		end
-- 	end
-- 	return out
-- end

--copies first x elems
-- directCast = function(tx)
-- 	local out = ""
-- 	for i, iv in ipairs(tx.bases) do
-- 		out = out .. string.format("a[%d] = b[%d];\n", i-1, i-1)
-- 	end
-- 	return out
-- end