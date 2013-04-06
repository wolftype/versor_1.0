--luajit bit op test

require "routines" 

local bit = require("bit")
local tobit = bit.tobit
local bnot = bit.bnot
local band = bit.band
local bxor = bit.bxor
local bor = bit.bor
local lshift = bit.lshift
local rshift = bit.rshift

S = {}
metric = {1,1,1,1,-1}
basis = {}
subspace = {}

--bit places of origin and infinity
ORIGIN = lshift(1,#metric-2)
INFINITY = lshift(1,#metric-1)
EP = ORIGIN
EM = INFINITY
EPLANE = bor(ORIGIN,INFINITY)



blade = function(b, wt)
	return {id = b, w = wt}
end

bitString = function(x)
	local out = ""
	local tmp = x
	for i,iv in ipairs(metric) do
		if band(tmp,1) == 1 then out =  "1" ..out
		else out =  "0" .. out end
		tmp = rshift(tmp,1)
	end
	 
	return out
end

basisString = function(x)
	local tmp = x
	local n = 0
	local out = ""
	while tmp ~= 0 do
		n = n+1
		if band(tmp,1) == 1 then out = out .. n end
		tmp = rshift(tmp,1)
	end
	if n > 0 then return "_e"..out 
	else return "_s" end
end

bladeString = function(x)
	local out = bitString (x.id)
	out = out .. " " .. x.w .. " " .. basisString(x.id)
	return out
end



buildBasis = function(m)
	--make e1, e2, e3, e4 . . .
	table.insert(basis,0)
	local nb = 1--tobit(1)
	for i,iv in ipairs(m) do
		table.insert(basis,nb)
		nb = lshift(nb,1)
	end
	
	--make e12, e23 . . .
	local tally = {}
	for i, iv in ipairs(basis) do
		for j, jv in ipairs(basis) do
			if (i~=j) then 
				local r = outer(iv,jv)
				if ( r.id ~= 0 ) and ( isMember(r.id,basis) == nil )  then --and ( isMember(r[0],basis) == nil )
					table.insert(basis, r.id )
				end
			end
		end
	end
end		

compare = function(a,b)
	local l = grade(a) - 1.0 / a
	local r = grade(b) - 1.0 / b
	return l < r
end

reorderBasis = function()
	table.sort(basis, compare)
end

printBasis = function()
	for i,iv in ipairs(basis) do
		printBit(iv, metric)
	end
end

sign = function(a,b)
	local n = rshift(a,1)
	local sum = 0
	while n ~= 0 do
		sum = sum + grade( band(n,b) )
		n = rshift(n,1)
	end
	if band(sum,1) == 0 then return 1
	else return -1 end
end

grade = function (x)
	local n = 0
	while( x ~= 0 ) do
		if ( band(x,1) == 1 ) then n = n + 1 end
		x = rshift(x,1)
	end
	return n
end

outer = function(a, b)
	if ( band(a,b) ~= 0 ) then return blade(0,0) end
	return product(a,b)
end

product = function(a, b)
	local res = bxor(a,b)
	local s = sign(a,b)
	return blade(res, s)
end

metricProduct = function(a,b)
	local tmp = product(a,b)
	local bs = band(a,b)
	local i = 1
	while bs ~= 0 do
		if band(bs,1) == 1 then tmp.w = tmp.w * metric[i] end
		bs = rshift(bs,1)
		i = i+1
	end
	return tmp
end

inner = function(a,b)
	local tmp = product(a,b)
	local g = grade(b) - grade(a)
	if grade(a) > grade(b) or grade(tmp.id) ~= g then 
		return blade(0,0)
	else return tmp end
end

metricInner = function(a,b)
	local tmp = metricProduct(a,b)
	local g = grade(b) - grade(a)
	if grade(a) > grade(b) or grade(tmp.id) ~= g then 
		return blade(0,0)
	else return tmp end
end

--HERMITIAN OPERATORS 

involute = function(x)
	local g = grade(x)
	local n = math.pow(-1,g)
	return blade(x,n)
end

reverse = function(x)
	local g = grade(x)
	local n = math.pow( -1, ( g*(g-1) / 2.0 ) )
	return blade(x,n)
end

conjugate = function(x)
	local g = grade(x)
	local n = math.pow( -1, (g * (g+1) / 2.0) )
	return blade(x,n)
end

--Check For presents of Minkowskian Basis
checkMink = function(x)
	if ( band(x, EPLANE) == 0 ) or ( band(x, EPLANE) == EPLANE ) then 
		return false else return true end
end

--Push into e+.e- from a null basis (for calculating metric products)
pushMink = function(x)
--	print("pushing:") 
--	print( bitString(x), "\n" )
	
	if (band(x, ORIGIN)==ORIGIN) then
		local t = bxor(x, ORIGIN)
		print( bitString(x),"push origin", bitString(t))
		return { blade( bxor(t,EP), .5),  blade( bxor(t,EM), .5) }
	elseif (band(x,INFINITY)==INFINITY) then
		local t = bxor(x, INFINITY)
		print(bitString(x),"push infinity", bitString(t))
		return { blade( bxor(t,EP), -1),  blade( bxor(t,EM), 1) }	
	end
end

--Pop back into null basis from Minkowskian
popMink = function(x)
	if (band(x, EP)==EP) then
		local t = bxor(x, EP)
		print(bitString(x), "pop ep", bitString(t))
		return { blade( bxor(t,ORIGIN), 1),  blade( bxor(t,INFINITY), -.5) }
	elseif (band(x,EM)==EM) then
		local t = bxor(x, EM)
		print(bitString(x), "pop em", bitString(t))
		return { blade( bxor(t,ORIGIN), 1),  blade( bxor(t,INFINITY), .5) }	
	end	
end

--pass in table ids and return table identifier and weight of product
gp = function(a,b)
	local bs = a.gp[b] 
	return { id = basisString(bs.id), w = bs.w }
	--return { id = bs[1], w = bs[2] }
end

--feed in a table of blades and compress and clean
compress = function(x)
	local tally = {}
	local res = {}
	
	--collect like terms
	for i,iv in ipairs(x) do
		--print (bladeString(iv))
		local exists = 0
		
		for k,kv in ipairs(tally) do
			if iv.id == kv.id then 
			--	print (iv.id, kv.id)
				exists = 1
			--	print (kv.w, iv.w)
				kv.w = kv.w + iv.w -- sum in weight
				--print (kv.w)
			end
		end
		--if doesn't exist, add it
		if (exists == 0) then
			table.insert(tally,iv)
		end		
	end
	
	--remove zeros
	for i,iv in ipairs(tally) do
		if (iv.w ~= 0) then 
		--	print (bladeString(iv))
			table.insert(res, iv ) 
		end
	end
	
	return res
end

buildEuclidean = function()
	
	local S = cayley
	for i,iv in ipairs(basis) do
		local name = basisString(iv)
		S[name] = { id = name, gp = {}, op = {}, ip = {} }
		--S[iv+1] = { id = basisString(iv), gp = {}, op = {}, ip = {} }
	end
	
	for i,iv in ipairs(basis) do
		local idA = basisString(iv)
		for j,jv in ipairs(basis) do
			local idB = basisString(jv)
			local gp_res = product(iv,jv)
			local op_res = outer( iv,jv) 
			local ip_res = inner( iv,jv)
			
			S[idA].gp[S[idB]] = gp_res--S[ basisString(gp_res[1]) ]
			S[idA].op[S[idB]] = op_res--S[ basisString(op_res[1]) ]
			S[idA].ip[S[idB]] = ip_res--S[ basisString(ip_res[1]) ]
			S[idA].involute = involute(iv)
			S[idA].reverse = reverse(iv)
			S[idA].conjugate = conjugate(iv)
		end
	end
	
end

conformal = function(iv,jv)
	
	local idA = basisString(iv)
	local idB = basisString(jv)
	
	--get list of blades in minkowskian (diagonal) metric
	local tmpA
	if checkMink(iv)==true then tmpA = pushMink(iv)
	else tmpA = { blade(iv,1) } end
	
	local tmpB
	if checkMink(jv)==true then tmpB = pushMink(jv)
	else tmpB = { blade(jv,1) } end

	local gpTally = {}
	local opTally = {}
	local ipTally = {}

	local gpPop = {}
	local opPop = {}
	local ipPop = {}
	
	for k,kv in ipairs(tmpA) do
		--print (bladeString(kv))
		for l, lv in ipairs(tmpB) do
		--	print (bladeString(lv))
			--calculate products in mink metric
			local gp_res = metricProduct(kv.id,lv.id)
			--print ( bladeString(blade(gp_res.id, gp_res.w * kv.w * lv.w)) )
			local op_res = outer( kv.id,lv.id) 
			local ip_res = metricInner( kv.id,lv.id)
			--push onto tally stack
			table.insert(  gpTally, blade(gp_res.id, gp_res.w * kv.w * lv.w) )
			table.insert(  opTally, blade(gp_res.id, gp_res.w * kv.w * lv.w) )
			table.insert(  ipTally, blade(gp_res.id, gp_res.w * kv.w * lv.w) )
		end
	end
	
--	for k,kv in ipairs(gpTally) do print ("tally", bladeString(kv)) end
	
	local gpCompress = compress(gpTally)
	local opCompress = compress(opTally)
	local ipCompress = compress(ipTally)


	S[idA].gp[S[idB]] = {}
	
	for k, kv in ipairs(gpCompress) do
	--	print( "compressed\n", bladeString(kv), "\n")
		
		local tmp
		if checkMink(kv.id)==true then
			--print("crazy") 
			tmp = popMink(kv.id)
			for m, mv in ipairs(tmp) do
				mv.w = mv.w * kv.w
			end
		else tmp = {kv} end
		
		AddTab(gpPop, tmp)
	end
	

	AddTab( S[idA].gp[S[idB]], compress(gpPop) )

	-- S[idA].op[S[idB]] = compress(opTally)
	-- S[idA].ip[S[idB]] = compress(ipTally)
	
	print( bitString(iv), bitString(jv), "equals" )
	for k,kv in ipairs( S[idA].gp[S[idB]] ) do
		print( bladeString(kv) )
	end
	print("\n")
	
	-- local gpPop = popMink(gp_res.id)
	-- 	local opPop = popMink(op_res.id)
	-- 	local ipPop = popMink(ip_res.id)
	-- 
	-- 	table.insert( S[idA].gp[S[idB]], blade(gp_res.id, gp_res.w * iv.w * jv.w) )
	-- 	table.insert( S[idA].op[S[idB]], blade(op_res.id, gp_res.w * iv.w * jv.w) )
	-- 	table.insert( S[idA].ip[S[idB]], blade(ip_res.id, gp_res.w * iv.w * jv.w) )
end

buildConformal = function()
	
	for i,iv in ipairs(basis) do

		local idA = basisString(iv)
		S[idA].involute = involute(iv)
		S[idA].reverse = reverse(iv)
		S[idA].conjugate = conjugate(iv)
			
		for j, jv in ipairs(basis) do
			conformal(iv,jv)
		end

	end
	
end



buildSubspaces = function()

	for i=1,#metric,1 do
		subspace[i] = {}
	end

	for i,iv in ipairs(basis) do
		local g = grade(iv)
		if g>0 then 
			table.insert(subspace[g],iv)
		end
	end
	
	for i,iv in ipairs(subspace) do
		print("SUBSPACE: "..i)
		for j, jv in ipairs(iv) do
			print( basisString(jv) )
		end
	end
end

prepTable = function()
	for i,iv in ipairs(basis) do
		local name = basisString(iv)
		S[name] = { id = name, gp = {}, op = {}, ip = {} }
	end
end

--print("EP") print( bitString( EP) )
--print("EM") print( bitString( EM) )

buildBasis(metric)
reorderBasis()
--printBasis()
--buildConformal()
--buildSubspaces()
prepTable()
conformal(EM, EP )



