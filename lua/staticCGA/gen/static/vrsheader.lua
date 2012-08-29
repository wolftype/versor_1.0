--DEPENDENCIES

package.path = "../../tab/?.lua;../../util/?.lua;" .. package.path

require "types"
require "cosmo"
require "headers"
require "routines"

--local cwd = dofile("../../util/cwd.lua")

local tMV = {}
AddTab(tMV, States)
AddTab(tMV, Versors)


local template = [[
#include "vsr.h"
namespace vsr{
	$createTypes[=[
	template class MV<$num,$name,$type>;]=]
}//vsr::
]]


local code = cosmo.f(template){
	createTypes = function()
		for i, iv in ipairs(AllStates) do
			cosmo.yield{
				num = #iv.bases,
				name = up(iv.id),
				type = "float"
			}
		end
	end	
}




print (code) 