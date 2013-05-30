Strict.__newindex,Strict.__index = nil,nil
package.path = package.path .. ";/Users/wesleysmith/Documents/libs/Lust/?.lua;./?.t"
package.cpath = package.cpath .. ";/Users/wesleysmith/Documents/libs/lpeg-0.12/?.so"

local C3 = terralib.require"C3"
local space = terralib.require"space"


local p1 = C3.null(1, 0, 0)
local p2 = C3.null(-1, 0, 0)
local pp = p1^p2
local a, b = C3.split(pp)
print(p1, p2)
print(pp)
print(a:unpack())
print(b:unpack())

print(space.operator"split")

print(a.mv)


if(false) then
	local c = terralib.includecstring [[ 
		#include <stdio.h>
		#include <stdlib.h>
	]]
	
	local null = C3.operators.null
	local split = space.operator"split"
	local op = space.operator"op"
	
	terra main()
		var A = null(-1, 0, 0)
		var B = null(1, 0, 0)
		var pp = op(A, B)
		var p1, p2 = split(pp)
		c.printf("%f %f %f\n", p1.e1, p1.e2, p1.e3)
		c.printf("%f %f %f\n", p2.e1, p2.e2, p2.e3)
		return 0
	end
	
	terralib.saveobj("pp",{
		main = main,
	})
end