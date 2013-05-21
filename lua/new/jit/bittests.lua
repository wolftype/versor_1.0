local bit = require("bit")
local tobit = bit.tobit
local bnot = bit.bnot
local band = bit.band
local bxor = bit.bxor
local bor = bit.bor
local lshift = bit.lshift
local rshift = bit.rshift

print ( lshift(1ULL, 32) )