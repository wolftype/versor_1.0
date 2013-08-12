local B = require "bitBasis"
local T = require "token"
local F = require "funcs"

B.metric = {1,1,1,1,-1}			--Set Metric (this example is conformal)
B.buildBasis()				--Build Basis
B.buildConformal()	 		--Build Basis Products Using a Conformal Metric
B.buildSubspaces()	        --Organize into subspaces (1-blades, 2-blades, 3-blades, 4-blades, etc)
B.register() 			 	--Register Basis Blades and Subspaces as Types: F.makeType looks and commits to this registry    




