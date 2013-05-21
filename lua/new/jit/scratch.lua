local B = require "bitBasis"
local T = require "token"
local F = require "funcs"

B.metric = {1,1,1,1-1}		--Set Metric (this example is conformal)
B.buildBasis()				--Build Basis

--B.buildEuclidean()		--Build Basis Products Using a Euclidean Metric

B.buildConformal()	 		--Build Basis Products Using a Conformal Metric
B.buildSubspaces()	        --Organize into subspaces (1-blades, 2-blades, 3-blades, 4-blades, etc)
B.register() 			 	--Register Basis Blades and Subspaces as Types: F.makeType looks and commits to this registry

for i, iv in ipairs( B.subspace ) do
	for j, jv in ipairs( B.subspace ) do
		local gp = F.productList( iv, jv, "gp")
		local op = F.productList( iv, jv, "op")
		local ip = F.productList( iv, jv, "ip")
		
		local g = F.makeType( gp.blades, iv.desc .. "_gp_" .. jv.desc )  
		if (g) then print( g, "sp( ", iv.desc, "a, ", jv.desc, " b ){ return", g, T.makePType( gp, "a", "b"), ";}" ) end
		local o = F.makeType( op.blades, iv.desc .. "_op_" .. jv.desc )
	    if (o) then print( o, "op( ", iv.desc, "a, ", jv.desc, " b ){ return", g, T.makePType( gp, "a", "b"), ";}" ) end
		local i = F.makeType( ip.blades, iv.desc .. "_ip_" .. jv.desc )                                   
		if (i) then print( g, "ip( ", iv.desc, "a, ", jv.desc, " b ){ return", g, T.makePType( gp, "a", "b"), ";}" ) end 
	end
end    


--A versionList is a list of -1s or 1s to multiply input by
--local rtmp = F.versionList( B.subspace[2], "involute")

--A castList is a list of matching indices
--local ctmp = F.castList( B.subspace[2] )
