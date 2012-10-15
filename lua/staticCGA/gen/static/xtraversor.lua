-- VERSOR FUNCTION SPECIALIZATIONS

require "genlite"
require "headers"

local operations = {"gp","ip","op"}
local symbols = {"*","<=","^"}

local groups = { gp = GPTypes, ip = IPTypes, op = OPTypes}

local returnCode = function(tx,ty, op)

	membership = nil
	if ( Member(tx, groups[op]) and Member(ty,groups[op]) ) then membership = true end

	if (membership) then
		local Atemp = [[ return $sym( (*($LH*)(&a)) , (*($RH*)(&b)) ); ]]


		local RCode = cosmo.f(Atemp){
			sym = op,
			LH = tx.id,
			RH = ty.id
		}

		return RCode
	else
		local Btemp = [[ printf("undefined\n"); cout << a << endl; return a; ]]
		return Btemp
	end
end

local template = [[

$do_funcs[=[
inline MVBase $gpfunc( const MVBase& a, const MVBase& b ){ $retemp }
]=]

]]

local template2 = [[
const MVBase::CB MVBase::funcs[$num][$num][3]= { $do_table[=[ 
{ $do_subtable[==[ { $do_prods[===[$gp  $innercomma ]===] }$middlecomma ]==] }$outercomma 
]=] }; 

]]

local code = cosmo.f(template){
	do_funcs = function()
		for i, iv in ipairs(myMV) do
			for k, kv in ipairs(myMV) do
				for j, jv in ipairs(operations) do
					cosmo.yield{
						gpfunc = iv.id:lower() .. "_" ..jv.."_".. kv.id:lower(),
						retemp = returnCode(iv,kv,jv)
					}
				end
			end
			
		end
		
	end
}

local code2 = cosmo.f(template2){
	num = #myMV,
	do_table = function()
		for i, iv in ipairs(myMV) do
			com0 = ""
			if (i < #myMV) then com0 = "," end
			cosmo.yield{
				do_subtable = function()
					for k, kv in ipairs(myMV) do
						com1 = ""
						if (k < #myMV) then com1 = "," end
						cosmo.yield{
							do_prods = function()
								for j, jv in ipairs(operations) do
									com2 = ""
									if (j < #operations) then com2= "," end
									cosmo.yield{
										gp = iv.id:lower() .. "_" ..jv .."_"..kv.id:lower(),
										innercomma = com2
									}	
								end
							end,
							middlecomma = com1
						}
					end				
				end,

				outercomma = com0
			}

		end
	end
	
}

local op_gen_old = function(tx,op)
	local template = [[
	template<int NUM, int IDX, class T>
	const CB MV<NUM,IDX,T>::$opname[$num] = { $do_funcs[=[ 
	$func_name $comma ]=] 
	};
	]]

	local code = cosmo.f(template){
		opname = op.."funcs",
		num = #myMV,
		do_funcs = function()
			for i,iv in ipairs(myMV) do
				com = ""
				if i<#myMV then com = "," end
				cosmo.yield{
					func_name = "ip_gen< self_type"..","..iv.id..">",
					comma = com
				}
			end
		end
	}

	return code
end

local op_gen = function(tx,op)
	local template = [[
	template<int NUM, int IDX, class T>
	const CB MV<NUM,IDX,T>::$opname[$num] = { $do_funcs[=[ 
	$func_name $comma ]=] 
	};
	]]

	local code = cosmo.f(template){
		opname = op.."funcs",
		num = #myMV,
		do_funcs = function()
			for i,iv in ipairs(myMV) do
				com = ""
				if i<#myMV then com = "," end
				cosmo.yield{
					func_name = "ip_gen< "..tx.id..","..iv.id..">",
					comma = com
				}
			end
		end
	}

	return code
end

print(op_gen(Rot,"gp"))

-- local cwd = dofile("../../util/cwd.lua")
-- local path = cwd .. "../../../../include/vsr_static/"
-- io.output (io.open(path.."vsr_general_case.cpp","w"))
-- -- io.write(genHeader("vsr_general_case"))
-- 
-- io.write([[#include "vsr_general_case.h"]])
-- io.write([[namespace vsr{]])
-- io.write( code )
-- io.write("}//vsr::")
-- io.write()
-- io.close() 
