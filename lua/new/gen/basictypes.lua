-- H E U R I S T I C S   F O R   T H E  F I N I T E  S T A T E   M A C H I N E 
-- (MANUALLY ENTERED types which get automatically combined into types.lua)

package.path = "../vsrmodule/?.lua;"..package.path

require "basis"
local F = require "funcs"

--GRADE: 0 has 1 bases: 
local Sca = { id = "Sca", desc = "Scalar", bases = { _s,}, key = 1}
--GRADE: 1 has 5 bases (VECTORS are Points, DualPlanes, or DualSpheres): 
local Vector = { id = "Vector", bases = { _e1,_e2,_e3,_no,_ni,}, key = 65814}
--GRADE: 2 has 10 bases ( BIVECTORS are Tangent Vectors or Dual Circles or PointPairs -- or DualLines if absent tangent elements ): 
local Bivector = { id = "Bivector", bases = { _e12,_e13,_e23,_e1no,_e2no,_e3no,_e1ni,_e2ni,_e3ni,_noni,}, key = 18224744}
--GRADE: 3 has 10 bases ( TRIVECTORS are Circles or Tangent Bivectors  -- or Lines if absent tangent elements ): 
local Trivector = { id = "Trivector", bases = { _e12no,_e13no,_e23no,_e12ni,_e13ni,_e23ni,_e1noni,_e2noni,_e3noni, _e123,}, key = 375941248}
--GRADE: 4 has 5 bases ( QUADVECTORS are Spheres or Planes ): 
local QuadVector = { id = "QuadVector", bases = { _e12noni,_e13noni,_e23noni,_e123no,_e123ni,}, key = 1753251840}
--GRADE: 5 has 1 bases: 
local Pss = { id = "Pss", desc = "Pseudoscalar", bases = { _e123noni,}, key = -2147483648}

--Compartmentalized (Euclidean, Null, And some Permutations)
--These plus the scalar and pseudoscalar total 65536 types.  TOO MANY (would require 50gb of memory)
--Need to Make about power of 8 or 9 (not 16) Max

-- EUCLIDEAN
local Vec = { id = "Vec", desc = "Vector", bases = { _e1, _e2, _e3 } }
local Biv = { id = "Biv", desc = "Bivector", bases = { _e12, _e13, _e23} }
local Tri = { id = "Tri", desc = "Trivector", bases = { _e123 } }

--Affine (plucker style, direction and moment, see Bayro-Corrochano)
local Aff = { id = "Aff", desc = "Affine Point", bases = {_e1,_e2,_e3,_no}}
local Afl = { id = "Afl", desc = "Affine Line", bases = {_e12,_e13,_e23,_e1no,_e2no,_e3no}}
local Afp = { id = "Afp", desc = "Affine Plane", bases = {_e12no,_e13no,_e23no,_e123}}
--dual affine
local Dap = { id = "Dap", desc = "Dual Affine Plane", bases = {_e1no, _e2no, _e3no, _noni}}
local Daf = { id = "Daf", desc = "Dual Affine Point", bases = {_e12noni,  _e13noni,  _e23noni,  _e123no} }
local Dal = { id = "Dal", desc = "Dual Affine Line", bases = {_e12no, _e13no, _e23no, _e1noni, _e2noni, _e3noni}}

--
local Dfp = { id = "Dfp", desc = "Dual Flat Point", bases = {_e12ni, _e13ni, _e23ni, _e123, }, key = 6815872 }
local Bst = { id = "Bst", desc = "Booster", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, }, key = 18224745 }

--PARAVECTOR
local Prv = { id = "Prv", desc = "Paravector", bases = {_s, _e1, _e2, _e3}}
--SPACETIME WEDGE (a 4D model without the Mnk component, see Hestenes, here implemented as a the imaginary 'sphere')
local Sta = { id = "Sta", desc = "Space Time Wedge", bases = {_e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni,}}

-- MINKOWSKI
local Ori = { id = "Ori", desc = "Origin", bases = { _no}}
local Inf = { id = "Inf", desc = "Infinity", bases = {_ni}}
local Mnk = { id = "Mnk", desc = "Minkowski Plane", bases = {_noni}}
local Hyp = { id = "Hyp", desc = "Imaginary Sphere", bases = {_no, _ni}}

--tans and dirs
local BivNO = {id = "BivNO", bases = { _e1no, _e2no, _e3no }}
local BivNI = { id = "BivNI", bases = { _e1ni, _e2ni, _e3ni }}
local TriNO = { id = "TriNO", bases = {_e12no, _e13no, _e23no} }
local TriNI = { id = "TriNI", bases = {_e12ni, _e13ni, _e23ni} }
local Mnv = { id = "Mnv", desc = "Minkowski Vector", bases = { _e1noni, _e2noni, _e3noni} }	--unknown
local QuadNO = { id = "QuadNo", bases = { _e123no, } }
local QuadNI = { id = "QuadNi", bases = { _e123ni, } }
local QuadNONI = { id = "QuadNONI", bases = { _e12noni, _e13noni, _e23noni, } } --part of plane (minkowski plane * bivector)

-- S P E C I A L I Z E D   T Y P E S  --
--HOW TO DEAL WITH CONSTANTS (i.e. Normalized Point)?

-- ROUNDS AND TANGENTS
local Pnt = { id = "Pnt", id2 = "Dls", desc = "Point", desc2 = "Dual Sphere", bases = Vector.bases, parent = Vector }
local Par = { id = "Par", id2 = "Dlc", desc = "Point Pair", desc2 = "Dual Circle", bases = Bivector.bases, parent = Bivector }
local Cir = { id = "Cir", desc = "Circle", bases = Trivector.bases, parent = Trivector }
local Sph = { id = "Sph", desc = "Sphere", bases = QuadVector.bases, parent = QuadVector }
--TAN AT ORIGIN
local Tnv = { id = "Tnv", desc = "Tangent Vector at Origin", bases = BivNO.bases, parent = BivNO }
local Tnb = { id = "Tnb", desc = "Tangent Bivector at Origin", bases = TriNO.bases, parent = TriNO }
local Tnt = { id = "Tnt", desc = "Tangent Trivector at Origin", bases = QuadNO.bases, parent = QuadNO }
-- FLAT
local Flp= {id = "Flp",  desc = "Flat Point", bases = {_e1ni, _e2ni, _e3ni, _noni } }
local Lin = {id = "Lin", desc = "Line", bases = { _e12ni, _e13ni, _e23ni, _e1noni, _e2noni, _e3noni } }
local Dll = {id = "Dll", desc = "Dual Line", bases = { _e12, _e13, _e23, _e1ni, _e2ni, _e3ni } }
local Pln = {id = "Pln", desc = "Plane", bases = { _e12noni, _e13noni, _e23noni, _e123ni,  } }
local Dlp = {id = "Dlp", desc = "Dual Plane", bases = { _e1, _e2, _e3, _ni } }
-- FREE
local Drv = { id = "Drv", desc = "Direction Vector", bases = { _e1ni, _e2ni, _e3ni, } }
local Drb = { id = "Drb", desc = "Direction Bivector", bases = {_e12ni, _e13ni, _e23ni} }
local Drt = { id = "Drt", desc = "Direction Trivector", bases = {_e123ni,},}
--GENERATORS
local Rot = { id = "Rot", desc = "Rotor", bases = { _s, _e12, _e13, _e23} }
local Trs = { id = "Trs", desc = "Translator", bases = { _s, _e1ni, _e2ni, _e3ni } }
local Mot = { id = "Mot", desc = "Motor", bases = { _s, _e12, _e13, _e23, _e1ni, _e2ni, _e3ni, _e123ni} }
local Dil = { id = "Dil", desc = "Dilator", bases = { _s, _noni } }
local Trv = { id = "Trv", desc = "Transversor", bases = { _s, _e1no, _e2no, _e3no } }
local Mtd = { id = "Mtd", desc = "Motor Dilator", bases = {_s, _e12, _e13, _e23, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, _e123ni, } }

--new
local Mtt = { id = "Mtt", desc = "Motor Transversor", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, _e123no, _e123ni, }, key = 1771476585 }
local Rtc = { id = "Rtc", desc = "Rotor Circle", bases = {_e1, _e2, _e3, _no, _ni, _e12no, _e13no, _e23no, _e12ni, _e13ni, _e23ni, _e1noni, _e2noni, _e3noni, _e123, _e123noni, }, key = -1771476586 }
local Prv = { id = "Mtd", desc = "Motor Transversor", bases = {_s,_e12,_e13,_e23,_e1no,_e2no,_e3no,_e1ni,_e2ni,_e3ni,_noni } }
local Rtd = { id = "Rtd", desc = "Rotor Dilator", bases = {_s, _e12, _e13, _e23, _noni, _e12noni, _e13noni, _e23noni, }, key = 1761607785 }
local Rtt = { id = "Rtt", desc = "Rotor Transveror", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e123no, }, key = 38505 }
local Tvd = { id = "Tvd", desc = "Transversor Dilator", bases = {_s, _e1no, _e2no, _e3no, _noni, }, key = 16782849 }
local Tsd = { id = "Tsd", desc = "Translator Dilator", bases = {_s, _e1ni, _e2ni, _e3ni, _noni, }, key = 18219009 }
local Trt = { id = "Trt", desc = "Transversor Translator", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, }, key = 1763055209 }
local Rvd = { id = "Rvd", desc = "Rotor Transversor Dilator", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _noni, _e12noni, _e13noni, _e23noni, _e123no, }, key = 1761646185 }
local Tst = { id = "Tst", desc = "Transv Transv Transl", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, _e123no, }, key = 1763087977 }
local Tvt = { id = "Tvt", desc = "Trans Transv Transl", bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, _e123ni, }, key = 1771443817 }

--too add . . .
--Glide Reflection Line Flat Point
local Gld = { id = "Gld", desc = "Glide", bases = {_e1, _e2, _e3, _ni, _e12ni, _e13ni, _e23ni} }
--Point Times a Circle
local Pcr = { id = "Pcr", desc = "Point Circle", bases = {_e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, _e123no, _e123ni } }

bases = order

Muv = { id = "Muv", desc = "Multivector", bases = order, }
F.calcKeys(Muv)

--for inner and outer type creation (no need for rotors which are primarily multiplied)
basicTypes = {
	
	--	5 Base Elements	
		Sca,	--Scalar
		Ori,	--Origin
		Inf,	--Infinity
		Mnk,	--Minkowski Plane
		Hyp,    --Alt Basis
		Pss,	--Pseudoscalar
		
	--	4 Rounds
		Pnt,	--Vector
		Par,	--Bivector
		Cir,	--Trivector
		Sph,	--Quadvector
		Sta,    --Space Time Algebra Bivector

	--  3 Free	
		Drv,
		Drb,
		Drt,
		
	--  3 Tan at Origin
		Tnv,
		Tnb,
		Tnt,

	--	5 Flats
		Lin, 
		Pln,
		Flp,
		Dfp,		 
		Dll,	
		Dlp,

	--	3 Euclidean	
		Vec,
		Biv,	
		Tri,
	
	-- 3 Affine
		-- Aff,
		-- Afl,
		-- Afp,
		-- 
	-- 3 Affine Dual
		-- Dap,
		-- Daf,
		-- Dal,
		
	-- Mink Vector
		Mnv,
}

--reflect in these (odd number of versors )
pinors = {
	Vec,
	Dlp,
	Pln,
	Dll,
	Lin,
	Pnt,
	Par,
	Cir,
	Sph,

}
-- Generators (even number of versors)
generators = {
	Rot,
	Mot,
	Dil,
	Trv,
	Mtd,
	Trs,
	Rtc,
	Mtt,
	Rtt,
	Rtd,
	Tvd,
	Tsd,
	Trt,
	Rvd,
	Tst,
	Tvt,
	Bst,
	Gld,
	--paravector...
	--Prv,
}

--Implicit Types...
specTypes = {
--	TanVec,
--	TanBiv,
--	TanTri,
--	QuadNONI,
-- 	Prc
}

local keys = function(t)
	for i,iv in ipairs (t) do
		F.calcKeys(iv)
	end
end

keys(basicTypes)
keys(generators)
keys(specTypes)