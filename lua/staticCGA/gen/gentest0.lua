require "cosmo"
require "basis"
require "types"
require "funcs"

optypes = {"ip","op","gp"}
hermtypes = {"involute","reverse","conjugate"}
sym = {}
sym["op"] = "^"
sym["ip"]= "<="
sym["gp"]= "*"

local prefix = ""

local sTypes = States

local env = os.getenv("HOME")
local path = env.."/xcode/versor/trunk/libconga2/"
local prefix = "cga_"

local struct = function(tx)

	local template = [[
		$make_class[=[
		template< class T >
		class $name{
		
			T mW[$numElems];
		
			public:		
				T& operator [] (int i) { return mW[i]; }
				T  operator [] (int i) const { return mW[i]; }
		};
		]=]
	]]

end

local combo = function(tx, op, ty)

	local tFuncs = {}

	local template = [[

		$make_function[=[
	
			//$etype
			void * $fname ( void * a, void * b, void *r ) { 
				$make_words[==[

				//$basis
				r[$ret_idx] = $word;
	
				]==]
				return r;
			}

		]=]
	]]

	local code = cosmo.f ( template ) {	
			
		make_function = function()
			--product (concatenates and simplifies all combinations)
			local tmp = product(tx,ty,op)	
			local typ = getTypeFromString(tmp.type, sTypes)
			--match				
			table.insert(tFuncs,{ prefix..tx.id.."_"..op.."_"..ty.id, typ } )					

			cosmo.yield{
				
				--element id
				etype = tx.desc .. " "..sym[op].." "..ty.desc.." = "..typ.desc,
				--function name
				fname = prefix..tx.id.."_"..op.."_"..ty.id,	
				
				--combinatorics							
				make_words = function()
					
					--instructions
					for k, kv in ipairs ( tmp.inst ) do
						cosmo.yield{
							basis = kv[1], --basis id
							ret_idx = k-1, --array idx
							word = kv[2],  --combo
						}
					end
				end
			}
		end
	}
	
	print (code)
end

--GP, OP, IP
local productTemplate = [[
	$do_products[=[
	//$RX = $AX $OP $BX
	template<typename T>
	inline $R operator $OP (const $A &a, const $B &b) {
		return $result
	}
	]=]
]]

--REVERSE, INVERSE, CONJUGATE
local versionTemplate = [[
	$do_versions[=[
	//$RX $OP
	template<typename T>
	inline $R $OP ( const $R & a) {
		return $result
	}
	]=]
]]


local idx = function(tx) 
	n = -1
	for i,iv in ipairs(States) do
		if iv.id == tx.id then 
			n = i
			break; 
		end
	end
	return n
end

local templatedType = function(tx, ty)
	local out = "MV < " .. #tx.bases .. "," .. idx(tx) .. ",".. ty .." >"
	return out
end

local returnVersionString = function(tx,op)
	local result = version( tx, op)
	local out = ""..tx.id.."("
	for i,iv in ipairs(result) do
		out = out .. iv
		if i < #result then out = out .."," end
		if i == #result then out = out .. ");" end
	end
	return out
end	

local returnProduct = function(tx,ty,op)
	local result = product( tx, ty, op )
	local rType = getTypeFromString( result.type, States)
	if rType.id == "Muv" then print(tx.id, ty.id, op) end
	local out = templatedType(rType,"T") .. "("
	for i,iv in ipairs(result.inst) do	
		out = out .. "\n\t\t"..iv[2] 
		if i < #result.inst then out = out .. "," end
	end	
	out = out .. ");"
	local t = { rType, out }
	return t
end

--Products of type TX
local productHeader = function(tx)

	--REVERSE, INVOLUTE, CONJUGATE FRIENDS
	local codeV = cosmo.f(versionTemplate) {
		do_versions = function()
			for i,iv in ipairs(hermtypes) do
				local res = version(tx, iv)
				cosmo.yield{
					RX = tx.id,
					OP = iv,
					R  = templatedType(tx, "T"),
					result = templatedType(tx, "T")..res
				}
			end
		end
	}

	--PRODUCT FRIENDS
	local codeP = cosmo.f ( productTemplate ) {
		do_products = function()
			for j, jv in ipairs(States) do
				for i,iv in ipairs(optypes) do
					kv = tx
					local res = returnProduct(kv,jv,iv)
						cosmo.yield{
							RX = res[1].id,
							AX = kv.id,
							BX = jv.id,
							R =  templatedType( res[1], "T" ),
							OP = sym[iv],
							A = templatedType( kv, "T" ),
							B = templatedType( jv, "T" ),
							result = res[2],					
						}	
				end
			end
		end
	}

--	print(code)
	filename = tx.id
	io.output(io.open(path.."include/"..filename..".h", "w"))
	io.write(codeV)
	io.write(codeP)
	io.close()	
end

--[[
for i,iv in ipairs(States) do
	productHeader(iv)
end
--]]
