local B = require "bitBasis"
local T = require "token"
local F = require "funcs"

B.metric = {1,1,1,1,-1}		--Set Metric (this example is conformal)
B.buildBasis()				--Build Basis

--B.buildEuclidean()		--Build Basis Products Using a Euclidean Metric

B.buildConformal()	 		--Build Basis Products Using a Conformal Metric
B.buildSubspaces()	        --Organize into subspaces (1-blades, 2-blades, 3-blades, 4-blades, etc)
B.register() 			 	--Register Basis Blades and Subspaces as Types: F.makeType looks and commits to this registry

-- for i, iv in pairs ( B.types ) do
--    print(i) 
-- 	for j, jv in ipairs (iv) do
-- 	   print("\t", B.basisString(jv) ) 
-- 	end
-- end     

t =  B.S[ B.types.e5[1] ].ip[ B.types.e4[1] ]

for i, iv in ipairs(t) do
   print (B.basisString(iv.id)) 
end    

-- for i, iv in ipairs( B.subspace ) do
-- 	for j, jv in ipairs( B.subspace ) do  
-- 		
-- 		
-- 		local gp = F.productList( iv.bases, jv.bases, "gp")
-- 		local op = F.productList( iv.bases, jv.bases, "op")
-- 		local ip = F.productList( iv.bases, jv.bases, "ip")
-- 		
-- 		local g = F.makeType( gp.blades, iv.desc .. jv.desc )  
-- 		if (g) then print( g ,"gp( a : &", iv.desc, ", b : &", jv.desc, " ) return {", g, T.makePType( gp, "a", "b"), "} end" ) end
-- 		local o = F.makeType( op.blades, iv.desc .. "_op_" .. jv.desc )
-- 	    if (o) then print( o, "op( a : &", iv.desc, ",b : &", jv.desc, ")\n  return {", g, T.makePType( gp, "a", "b"), "} end" ) end
-- 		local i = F.makeType( ip.blades, iv.desc .. "_ip_" .. jv.desc )                                   
-- 		if (i) then print( i, "ip(a : &", iv.desc, ", b : &", jv.desc, " )\n return {", g, T.makePType( gp, "a", "b"), "} end" ) end 
-- 	end
-- end  

local cir = B.types.Tri  
local par = B.types.Biv
local pl = F.productList( B.types.Tri , B.types.Biv, "gp") 



local cp = F.makeType( pl.blades, "Rtc" )      

-- for i, iv in pairs ( B.types ) do
--    print (cp, i) 
-- end  


print ( T.makePType(pl, "a", "b") ) 
-- 
-- for i, iv in ipairs(cir) do 
--    print ( B.basisString(iv)) 
-- end  
-- 
-- for i, iv in ipairs(par) do
--    print ( B.basisString(iv)) 
-- end   
-- 
local cp = F.makeType( pl, "Rtc" )   
for i, iv in ipairs(B.types.Rtc) do 
   print ( B.basisString(iv))  
end 
	



