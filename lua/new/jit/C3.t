local B = require "bitBasis"
local F = require "funcs"
local space = terralib.require"space"

--- Build the algebra
B.metric = {1,1,1,1,-1}	--Set Metric (this example is conformal)
--B.metric = {1,1,1}	--Set Metric (this example is conformal)
B.buildBasis()		--Build Basis

--B.buildEuclidean()	--Build Basis Products Using a Euclidean Metric
B.buildConformal()	--Build Basis Products Using a Conformal Metric
B.buildSubspaces()	--Organize into subspaces (1-blades, 2-blades, 3-blades, 4-blades, etc)
B.register() 		--Register Basis Blades and Subspaces as Types: F.makeType looks and commits to this registry

--- Add useful types
F.makeType(B.basisKeys{"e1", "e2", "e3", "e4", "e5"}, "Pnt", true)
F.makeType(B.basisKeys{"e1", "e2", "e3"}, "Vec")
F.makeType(B.basisKeys{"e1", "e2", "e3", "e5"}, "Dlp", true)
F.makeType(B.basisKeys{"e1235", "e1245", "e1345", "e2345"}, "Pln", true)
F.makeType(B.basisKeys{"e1235", "e1234", "e1245", "e1345", "e2345"}, "Sph", true)
F.makeType(B.basisKeys{"e12", "e13", "e23", "e15", "e25", "e35"}, "Dln", true)
F.makeType(B.basisKeys{"e145", "e245", "e345", "e125", "e135", "e235"}, "Lin", true)
F.makeType(B.basisKeys{"e15", "e25", "e35", "e45"}, "Flp", true)
F.makeType(B.basisKeys{"e15", "e25", "e35", "e45"}, "Dfp", true)
F.makeType(B.basisKeys{"e12", "e13", "e23", "e14", "e24", "e34", "e15", "e25", "e35", "e45"}, "Par", true)
F.makeType(B.basisKeys{
	"e123", "e145", "e245", "e345", "e124", "e134", "e234", "e125", "e135", "e235"}, 
	"Cir", true
)

F.makeType(B.basisKeys{"s", "e12", "e13", "e23", "e14", "e24", "e34", "e15", "e25", "e35", "e45"}, "Bst", true)
F.makeType(B.basisKeys{"s", "e45"}, "Dil", true)
F.makeType(B.basisKeys{"s", "e12", "e13", "e23", "e15", "e25", "e35", "e1234"}, "Mot", true)
F.makeType(B.basisKeys{"s", "e12", "e13", "e23"}, "Rot", true)
F.makeType(B.basisKeys{"s", "e14", "e24", "e34"}, "Trs", true)

-- initialize the space module with generated algebra
space.initialize()


local null = terra(a : CoordType, b : CoordType, c : CoordType)
	return Pnt{a, b, c, 1, (a*a+b*b+c*c)*0.5}
end

local dls = terra (a : CoordType, b : CoordType, c : CoordType, r : CoordType)
	var s = null(a, b, c)
	if(r > 0)
		then s.e5 = s.e5 - 0.5*(r*r)
		else s.e5 = s.e5 + 0.5*(r*r)
	end
	return s
end

space.define("split", [[
terra split(pp : Par)
	var r = sqrt(abs(ip(pp, pp).s))
	var dlp = ip(Inf{-1}, pp)
	var bstA = Bst(pp)
	var bstB = Bst(pp)
	bstA.s = bstA.s - r
	bstB.s = bstB.s + r
	var pA = Pnt(bstA/dlp)
	var pB = Pnt(bstB/dlp)
	return pA, pB
end
]])

space.define("size", [[
terra size(a : MV1)
	var v1 = ip(Inf{1}, a)
	var v2 = (a*involute(a)) * inverse(v1*v1)
	var res = v2.s
	if(isdual(a)) then
		res = -res
	end
	return res
end
]])

space.define("cen", [[
terra cen(a : MV1)
	var p = a/ip(Inf{-1}, a)
	return null(p.e1, p.e2, p.e3)
end
]])


local M = {}
M.null = null
M.dls = dls
M.split = space.split
M.operators = { null=null }


return M