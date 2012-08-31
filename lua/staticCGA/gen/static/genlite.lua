--[[

very very close: 
1 - casting
2 - lin from cir, etc,
3 - not all spinor operations return a "sure" return type -- can we predetermine?
maybe a set of equivalences (dll -> par)

some returns cast in a way such that the intermediate types are not all necessary . . .
...unroll future uses and only calculate the necessary ones?  

]]

--SET SEARCH PATHS FOR LUA REQUIRES
package.path = "../../tab/?.lua;../../util/?.lua;" .. package.path

require "types"
require "funcs"
require "cosmo"
require "routines"
require "grammar"
require "headers"

--SET FILE WRITE PATH
local env = os.getenv("HOME")
local cwd = dofile("../../util/cwd.lua")
local path = cwd.."../../../../include/vsr_static/"--env.."/code/versor/branches/subspace/lua/staticCGA/gen/vsr/include/"
local cpath = cwd.."../../../../src/vsr_static/"--env.."/code/versor/branches/subspace/lua/staticCGA/gen/vsr/src/"
local prefix = ""
print (env)
print (path)


--DEFINE OPERATORS
local operators = {
	op = "op",--"operator ^", 
	ip = "ip",--"operator <=", 
	gp = "gp",--"operator *",
}

--INITIALIZE TABLES
local typepairs = { 
	{Ori, Pnt}, {Dlp, Pnt}, {Par, Dll}, {Cir, Lin}, {Sph, Pln},
}

local EUStates = {Sca, Vec, Biv, Tri}
local EUBivectors = {Biv}
local EUVersors = {Rot}
local EUInter = {Vec_Biv}

local CGAStates = States
local CGAVersors = Versors
local CGAGens = {Biv, Drv, Tnv, Dll, Par}
--local CGAInter
local CGATypes = AllStates 

local AllTypes = {}
AddTab(AllTypes,EUStates)
AddTab(AllTypes,EUVersors)
AddTab(AllTypes,EUInter)

--EUCLIDEAN TEST
local myStates = EUStates
local myVersors = EUVersors
local myTypes = AllTypes


--CONFORMAL
local myStates = CGAStates
local myVersors = CGAVersors
local myPinors = Pinors
local myTypes = CGATypes


local myMV  = {}
AddTab(myMV, myStates)
AddTab(myMV, myVersors)


local GPTypes ={}
local OPTypes ={}
local IPTypes ={}
local SelfIPTypes = {}


AddTab(GPTypes, myStates)
AddTab(GPTypes, myVersors)
AddTab(OPTypes, myStates)
AddTab(IPTypes, myStates)
AddTab(SelfIPTypes, myVersors)


--GENERATE typedef
local genTypedefs = function()

	local template = [[
	#ifndef VSR_TYPEDEFS_H_INCLUDED
	#define VSR_TYPEDEFS_H_INCLUDED
	 
	#include "MV.h"
	
	namespace vsr{
	
	$make_type[=[
	typedef MV<$num,$idx,float>  $name;
	]=]
	
	]]
	
	local code = cosmo.f(template){
		make_type = function()
		for i, iv in ipairs(myTypes) do
				--print (iv.id)
				cosmo.yield{
					name = iv.id,
					num = #iv.bases,
					idx = up(iv.id)
				}
			end
		end		
	}
	
	return code

end

--GEOMETRIC OPERATIONS
local productGen = function(tx, ty, top)

	local list = productList(tx, ty, top)
	local typ =  getProductListType(list)
	
	if ( typ.id ~= "Muv" and typ.id ~= "_N" ) then
				
		local template = [[ $make_function[=[
inline $rtype $fname (const $lhand& a, const $rhand& b) { 
	return $rtype $rcombo;
}			]=]
		]]

		local code = cosmo.f ( template ) {	
			make_function = function()
			
				cosmo.yield{
					
					rtype = typ.id,
					fname = operators[top],-- .."<"..tx.id..","..ty.id..","..typ.id..">",
					lhand = tx.id,
					rhand = ty.id,
					rcombo = makePType(list, "a", "b")
				}
			
			end
		}
	
		return code
	end

	return ""
end

--INVERSIONS, REVERSIONS, INVOLUTIONS
local versionGen = function(tx, op)

	local list = versionList(tx, op)
	local typ =  getProductListType(list)
	
	if ( type(typ) == "table" ) then
				
		local template = [[ 
		$make_function[=[

		
inline $lhand $fname (const $lhand& a) { 
	return $lhand $rcombo;
}
			]=]
		]]

		local code = cosmo.f ( template ) {	
			make_function = function()
			
				cosmo.yield{
					fname = op,
					lhand = tx.id,
					rcombo = makeVType(list, "a")
				}
			
			end
		}
	
		return code
	end

	return ""
end

--Commutator of elements around various 2-blades (Biv, Drv, Tnv, Dll, Par)
-- local dGen = function(tx, ty)
-- 
-- 	-- local template = [[ [=[
-- 	-- inline $lhand $fname (const $lhand& a, const $rhand& b){
-- 	-- 	return $lhand
-- 	-- }
-- 	-- ]=]
-- 	-- ]]
-- 	
-- 	local out = "Vec ( Vec * Biv ) - Vec ( Biv * Vec )"
-- --	print 
-- 	
-- end


--CASTING OPERATIONS ( TO tx FROM ty )
local castGen = function(tx, ty)
	local list = castList(tx,ty)
	local typ = tx
	
	if ( #list ~= 0 ) then

		local template = [[$make_function[=[ 
template<> inline const $rtype $fname (const $arga& a) {
		return $rtype $cast;
} ]=] 
		]]
	
		local code = cosmo.f (template){
			make_function = function()
				cosmo.yield{
					rtype = tx.id,
					fname = "cast<" ..tx.id..","..ty.id ..">",
					arga = ty.id,
					cast = makeCType(tx, list, "a")
				}
			end
		}
	
		return code

	end
	
	return ""

end

--VERSOR APPLICATION op is "re" or "sp"; ct is the optional force-cast-to type
local versorGen = function(tx, ty, op, ct2)
	
	local exp = ""
	if op == "sp" then exp = tx.id .. "(" ..ty.id .. " * ".. tx.id .. " * " .. " !" .. ty.id..")" end
	if op == "sp0" then exp = ty.id .. " * ".. tx.id .. " * " .. " !" .. ty.id end
	if op == "sp1" then exp = ct2.id .. "(" ..ty.id .. " * ".. tx.id .. " * " .. " !" .. ty.id..")" end
	if op == "re" then exp = tx.id .. "("..ty.id .. " * #".. tx.id .. " * " .. " !" .. ty.id.. ")" end
	if op == "re0" then exp = ty.id .. " * #".. tx.id .. " * " .. " !" .. ty.id end
	
	local ct = getExp(exp)
		
	local template = [[ $make_function[=[ 	
template<>
inline $rtype $fname (const $obj& $arga, const $gen& $argb) {					
					$assemble
}
		]=]
	
	]]
	
	local code = cosmo.f(template){
		make_function = function()
			cosmo.yield{
				rtype = ct.id,
				fname = op,
				obj = tx.id,
				gen = ty.id,
				arga = tx.id:lower(),
				argb = ty.id:lower(),
				assemble = makeExp(exp)
			}
		end
	}
	
	return code
end

local pprint = function(output, method)
	if method == "" then
		print(output)
	else
		io.write(output)
	end
end

--[[
	TEMPLATE INDEX, NAMES, PRODUCTS
--]]

--_N = 0,
--template<> struct Idx<0> { static const int Size = 0; static const string name; }

local genIdx = function()

	
	
	local template = [[
	
	using namespace std;
	
	enum {
		 MUV = 0,
		$do_enum[=[ $en 
		]=]
	};
	
	template<int A> struct Idx{ static const int Size = 0; static string name; };
	template<> struct Idx<0>{ static const int Size = 0; static string name;};
	$do_Idx[=[
	template<> struct Idx<$idx>{ static const int Size = $num; static string name;};
	]=]
	]]
	
	
	local code = cosmo.f(template){
		do_enum = function()
			for i, iv in ipairs(myTypes) do
				local out = string.upper(iv.id).." = " .. iv.idx
				if i < #myTypes then out = out .. "," end
				cosmo.yield{
					en = out
				}
				
			end
		end,
		do_names = function()
			for i, iv in ipairs(myTypes) do
				local out = string.upper(iv.id).." = " .. iv.idx
				if i < #myTypes then out = out .. "," end
				cosmo.yield{
					en = out
				}
				
			end
		end,
		do_Idx = function()
			for i,iv in ipairs(myTypes) do
				cosmo.yield{
					idx = string.upper(iv.id),
					num = #iv.bases
				}
			end
		end	
	}
	
	return code

end
--string Idx<_N>::name = "Null Set";
local genNames = function()
	local template = [[
	#include "vsr_templates.h"

	using namespace std;

	namespace vsr {
		
		string Idx<0>::name = "undefined";
		
	    $do_names[=[
		string Idx<$idx>::name = "$name";]=]
	}
	]]
	local code = cosmo.f(template){
		do_names = function()
			for i, iv in ipairs(myTypes) do
				cosmo.yield{
					idx = up(iv.id),
					name = iv.id
				}
			end
		end
	}
	return code
end

local genProductIdx = function()

	local template = [[
		template<int A, int B> struct ProductIdx{
            static const int GP = MUV;
            static const int OP = MUV;
            static const int IP = MUV;
        };
		$do_product[=[
		template<> struct ProductIdx<$idxA, $idxB> {
			static const int GP = $gpidx;
			static const int OP = $opidx;
			static const int IP = $ipidx;
		};
		]=]
	]]
	
	local code = cosmo.f(template){
		do_product = function()
			for i,iv in ipairs(GPTypes) do
			--	print (iv.id)
				for k,kv in ipairs(GPTypes) do
					local glist = productList(iv, kv, "gp")
					local gtyp =  getProductListType(glist)
					local olist = productList(iv, kv, "op")
					local otyp =  getProductListType(olist)
					local ilist = productList(iv, kv, "ip")
					local ityp =  getProductListType(ilist)

				--	print (iv.id, kv.id, otyp.id)
				-- if ( typ.id ~= "" ) then
					
			    	cosmo.yield{
						idxA = up(iv.id),
						idxB = up(kv.id),
						gpidx = up(gtyp.id),
						opidx = up(otyp.id),
						ipidx = up(ityp.id)
					}
				end
			end
		end	
	}
	
	return code

end






local genericCast = function()
	local template = [[
	template<class T, class S>
	inline T const cast (const S& s ){
		T temp;
		if ( T::size >= S::size ) std::copy( &(s[0]), &(s[0])+S::size, &(temp[0]) );
		else std::copy ( &(s[0]), &(s[0])+T::size, &(temp[0]) );
			
		return temp;
	}
	]]
	
	return template
end

local genVsrTypedefs = function (dest)
	local filename = prefix..dest..".h"
	io.output( io.open(path..filename, "w") )


	pprint(genTypedefs(), dest)
	io.write ( genericCast() )

	--MAKE VERSIONS
	for i, iv in ipairs(myMV) do

		pprint(versionGen(iv, "involute"), dest)
		pprint(versionGen(iv, "reverse"),dest)
		pprint(versionGen(iv, "conjugate"),dest)
	
		for k, kv in ipairs(myTypes) do
			if iv.id ~= kv.id then
				pprint(castGen(iv,kv), dest)
			end	
		end

	end

	io.write(genFooter())
	io.close();
end

--WRITE FUNCTIONS TO STD OUT OR FILE
local genFunctions = function(dest)

	--MAKE PRODUCTS
	
	--1. clear files
	for i , iv in ipairs(myMV) do
		local filename = prefix..iv.id..".h"				
		io.output( io.open(path..filename, "w") ) 
		io.close()
	end
	
	for i,iv in ipairs(GPTypes) do

		local filename = prefix..iv.id..".h"
		io.output( io.open(path..filename, "w") ) --APPEND

 		pprint( genMVHeader(iv), dest )
		
		for k, kv in ipairs(GPTypes) do
			pprint(productGen(iv,kv, "gp"),dest)			
		end
		
		io.close();
		
	end

	for i,iv in ipairs(OPTypes) do

		local filename = prefix..iv.id..".h"
		io.output( io.open(path..filename, "a") ) --APPEND

		for k, kv in ipairs(OPTypes) do
			--pprint("HELLO",dest)
			pprint(productGen(iv,kv, "op"),dest)
		end
		
		io.close();
		
	end

	for i,iv in ipairs(IPTypes) do

		local filename = prefix..iv.id..".h"
		io.output( io.open(path..filename, "a") ) -- APPEND

		for k, kv in ipairs(IPTypes) do
		 	pprint(productGen(iv,kv, "ip"),dest)
		end
		
		io.close();
		
	end
	
	for i,iv in ipairs(SelfIPTypes) do

		local filename = prefix..iv.id..".h"
		io.output( io.open(path..filename, "a") ) -- APPEND

		pprint(productGen(iv,iv, "ip"),dest)
		
		io.close();
		
	end	
	
	for i , iv in ipairs(myMV) do
	
		local filename = prefix..iv.id..".h"				
		io.output( io.open(path..filename, "a") ) -- APPEND
		
		--SPINORS
		for k, kv in ipairs(myVersors) do
			if iv.id ~= kv.id then
				pprint ( versorGen(iv, kv, "sp"),dest )
			end
		--	pprint ( versorGen(iv, kv, "sp0"),dest )
		end
		
		--PINORS
		for k, kv in ipairs(myPinors) do
			if iv.id ~= kv.id then
				pprint ( versorGen(iv, kv, "re"),dest )
			end
		--	pprint ( versorGen(iv, kv, "sp0"),dest )
		end
		
		io.close()
	end

	for i, iv in ipairs(myMV) do
		local filename = prefix..iv.id..".h"				
		io.output( io.open(path..filename, "a") ) -- APPEND
			pprint( genMVFooter(), dest )
		io.close()
	end

end
	
	
local genIncludes = function(dest)
	local template = [[
	$do_include[=[
	#include "$type"
	]=]
	#include "versorFuncs.h"
	]]
	local code= cosmo.f(template){
		do_include = function()
			for i, iv in ipairs(myMV) do
				cosmo.yield{
					type = iv.id .. ".h"
				}
			end
		end
	}
	
	return code 
end
	
local genVsrH = function (dest)
	io.output(io.open(path..dest..".h", "w"))
	io.write( genHeader1(dest) )
	io.write( genIncludes(dest) )
	io.write( "#endif" )
	io.close()
end
	
local genVsrTemplateH = function (dest)
	if dest == "" then
		print( genIdx() )
		print( genProductIdx() )
	else
		io.output( io.open(path..dest..".h", "w") )
		io.write( genHeader(dest))
		io.write( genIdx() )
		io.write( genProductIdx() )
		io.write( genFooter(dest) )
		io.close()
	end
end

local genVsrTemplateC = function(dest)
	if dest == "" then
		print (genNames())
	else
		io.output( io.open(path..dest..".cpp","w"))
	
		io.write( genNames() )
		
		io.close()
	end
end





genVsrH("vsr")
genVsrTypedefs("vsr_typedefs")
genVsrTemplateH("vsr_templates")
genVsrTemplateC("vsr_templates")
genFunctions("io")


--PINORS
-- for i, iv in ipairs(myPinors) do
-- 
-- 	for k, kv in ipairs(myPinors) do
-- 		if iv.id == kv.id then
-- 			pprint ( versorGen(iv, kv, "re"),"" )
-- 		end
-- 	end
-- 
-- end
--print(genProductIdx())
--genVsrTemplate()
--genFunctions()

-- for i, iv in ipairs(myVersors) do
-- 
-- 	local filename = prefix..iv.id..".h"
-- 	io.output( io.open(path..filename, "w") )
-- 
-- 	pprint(versionGen(iv, "involute"), dest)
-- 	pprint(versionGen(iv, "reverse"),dest)
-- 	pprint(versionGen(iv, "conjugate"),dest)
-- 	
-- 	for k, kv in ipairs(myVersors) do
-- 		
-- 		pprint(productGen(iv,kv, "gp"),dest)
-- 		
-- 		if iv.id ~= kv.id then
-- 			pprint(castGen(iv,kv), dest)
-- 		end			
-- 	end
-- 	
-- 	io.close();
-- 	
-- end	
-- 
-- 
-- for i , iv in ipairs(myStates) do
-- 
-- 	local filename = prefix..iv.id..".h"				
-- 	io.output( io.open(path..filename, "w") )
-- 	
-- 	for k, kv in ipairs(myVersors) do
-- 		pprint ( versorGen(iv, kv, "sp"),dest )
-- 		pprint ( versorGen(iv, kv, "sp0"),dest )
-- 	end
-- 	
-- 	for k, kv in ipairs(myTypes) do
-- 		if iv.id ~= kv.id then
-- 			pprint(castGen(iv,kv), dest)
-- 		end
-- 	end
-- 	
-- 	
-- 	io.close();		
-- 
-- end