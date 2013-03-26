--[[

Q: Should there be a C API ? ? ? perhaps to build a library?

Do I ultimately want to be able to call luajit from C code, 
perhaps when the desired operation has not yet been built . . .

OPTION A:

1. luajit can be used to create c structs and c functions,
and to compile it into object code (e.g. luajit -b test.lua test.obj)

2. that object code can then be linked to in C

-- Build all functions in C or Lua?

OPTION B:

1. A C library can be built of structs, and luajit used to define functions
between those structs

--]] 

local G = require "grammar"
local F = require "funcs"
local T = require "token"

local ffi = require("ffi")
ffi.cdef[[
typedef struct { int w[3]; } Vec;
typedef struct { int w[3]; } Vec;
typedef struct{ int w[4]; } Rot;
int ffun( int x );
]]

Vector = ffi.typeof("Vec")

function ffun(x)
	return x * x
end

function test( b )
	local tm = ffi.new("TVec", {{2,3}})
	return tm
end

function gp(a, b)
	print (a.w[0] * b.w[0] + a.w[1] * b.w[1])
end

MV = {
	vec = function(a,b,c) return Vector( { {1,b,c} } ) end,--ffi.new("Vec",{{a,b,c}}) end,
	rot = function(a,b,c,d) return ffi.new("Rot",{{a,b,c,d}}) end
}

product = function(a,b,op)
	local tmp = F.product(a,b,op)
	
end

local meta = {
	__mul = function(a,b) return product(a,b,"gp") end, --gp '*'
	__pow = function(a,b) return product(a,b,"op") end, --op '^'
	__le  = function(a,b) return product(a,b,"ip") end, --ip '<='	
}

gp( MV.vec(1,2,3), MV.vec(3,4,5) )
-- print ( MV.vec(1,2,3).w[0] )