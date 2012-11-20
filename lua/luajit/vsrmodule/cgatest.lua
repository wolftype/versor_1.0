local V = require "vsr"

local b = Vec(1,1,1) ^ Vec(2,0,2)
local p = Pnt(0,0,0,1,0) ^ Pnt(1,0,0,1,.5)
local l = Inf(1) .. Cir(1,1,1,1,1,1,1,1,1,1)
local c = Flp(1,1,1,1) ^ l

b:print()
p:print()
l:print()
c:print()