local cosmo = require "cosmo"
require "types"

local vars = {
	"a0","a1","a2","a3","a4","a5","a6","a7","a8","a9","a10",
	"a11","a12","a13","a14","a15","a16","a17","a18","a19","a20",
	"a21","a22","a23","a24","a25","a26", "a27","a28","a29","a30","a31"
}

local MVTemplate =  [[
	$do_constructor[=[		
		MV( $args ) : mIdx(IDX) { set( $subargs ); }
		void set( $args ) { $assign }
	]=]	
	]]

---[[
local code = cosmo.f( MVTemplate ) {
	do_constructor = function()
		for i = 1, #vars do	
			cosmo.yield {
				args = function() 
					local out = ""				
					for k = 1, i do
						out = out .. "const T& "..vars[k]
						if k < i then out = out..", " end
					end
					return out
				end,
				
				subargs = function() 
					local out = ""				
					for k = 1, i do
						out = out .. vars[k]
						if k < i then out = out.."," end
					end
					return out						
				end,
				
				assign = function()
					local out = ""
					for k = 1, i do
						tmp = k-1
						out = out .. "mW["..tmp.."]="..vars[k]
						out = out.."; "
					end
					return out
				end
				
			
			}

		end
	end
}
--]]

print(code)

local includeTemplate = [[
$do_include[=[
#include "$header"]=]
]]

local includeCode = cosmo.f(includeTemplate){	
	do_include =function()
		for i,iv in ipairs(States) do
			cosmo.yield{ header = iv.id..".h"}
		end
	end
}

local typedefTemplate = [[
$do_typedef[=[
typedef MV<$N, $X> $id;
]=]
]]

local typedefCode = cosmo.f(typedefTemplate){
	do_typedef = function()
		for i,iv in ipairs(States) do
			cosmo.yield{ N = #iv.bases; X = i; id = iv.id; }
		end
	end
}

print(typedefCode)

--print(includeCode)

--[[
for i,iv in ipairs(States) do
	b = iv.bases
	local iter = 0
	local out = ""
	if #b > 15 then
	print(iv.id, " ", #b )
	end
end
--]]
