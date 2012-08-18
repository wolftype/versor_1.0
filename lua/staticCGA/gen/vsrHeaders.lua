--non-library stuff here -  for implementation --

require "cosmo"
require "basis"
require "types"
require "funcs"
require "statics"

local env = os.getenv("HOME")
local path = env.."/xcode/versor/trunk/src/states/"
local prefix = "vsr_"
local prefix2 = "conga_"

print("path",path)


-------------------------------------------
-------------------------------------------
--CONGA HEADER BEGIN--
local make_congaheaders = function()
	local hname = "CongaHeaders.h"
	local cname = "CongaHeaders.cpp"
	
	local includeheadersfile = [[
		#ifndef CONGAHEADERS_H_INCLUDED
		#define CONGAHEADERS_H_INCLUDED
		
		$do_include[=[
		#include "$name"
		]=]
				
		namespace con {
			
			class CongaTypes{
				
				CongaTypes(){
				$do_binding[=[
				$name :: Bind();
				]=]
				}
			
				public:
				
				static void BindAll(){
					static CongaTypes TheCongaInit;
				}
					
			};
		}
		
		#endif
		

	]]
	
	
	local header = cosmo.f(includeheadersfile) {
		do_include = function()
		for i, iv in ipairs(States) do
			cosmo.yield {
				name = iv.id..".h",			
			}
		end
		end,
		do_binding = function()
		for i, iv in ipairs(States) do
			cosmo.yield{
				name = iv.id,
			}
		end
		end
	}

	io.output(io.open(path..hname, "w"))
	io.write(header)
	io.close()

end
--CONGA HEADER END--
-------------------------------------------
-------------------------------------------
--[[
$do_double[=[
static double * $tname;
]=]

$do_doubles[=[
double * Mk::$tname = new double[$tnum];
]=]
]]
-------------------------------------------
-------------------------------------------
---MK BEGIN (Operator Class that Makes a Specific Type)--
local mkoutput = function()

	local mkhead = [[
	#ifndef VSR_MKTYPES_INCLUDED
	#define VSR_MKTYPES_INCLUDED
	
	#include <string>
	#include "CongaHeaders.h"
	#include "State.h"
	
	namespace con {
		using namespace std;
		enum {
			$do_enum[=[
			$enumtype = $idx
			]=]
		};
		
		typedef map<string, int> IdxMap;
		typedef map<string, int>::iterator IdxIter;
		
		typedef State (*CXR)(const State& s);
		
		class Mk {
			private:
				static char dummy;
				static void init();
			public:
				static IdxMap type;
				static CXR cxr[$num];
			$do_make[=[
			static State $method (const State& s);
			]=]

		};
	} //con::
	#endif
	]]

	local mksrc = [[
	#include "vsr_mktypes.h"
	
	namespace con {

	$do_make[=[
	State Mk::$method (const State& s) { return $type(s); }
	]=]
	


		//constructor ptr functions to Mk::...
		CXR Mk::cxr[$num] = {
		
		$do_ptr[=[
			$ptr,
		]=]	
	
		};
	
		IdxMap Mk::type;
		
		char Mk::dummy = (Mk::init(), 0);
		
		void Mk::init(){
		$do_map[=[
			Mk::type["$typename"] = $typeidx;
		]=]	
		}

	} //con::
	
	]]
	
	local mk = function (x,y)
		local mkcode = cosmo.f(x){
			
			do_enum = function()
				for i, iv in ipairs(States) do
					local str = "_"..string.upper(iv.id)
					local n = ""..i-1
					if i ~= #States then n = n.."," end
					cosmo.yield {
						enumtype = str,
						idx = n,
					}
				end
			end,
			
			do_make = function()
				for i, iv in ipairs( BasicStates ) do
					cosmo.yield{
						type = iv.id,
						method = string.lower(iv.id),
					}
				end
			end,
			
			num = #BasicStates,
			
			do_ptr = function()
				for i, iv in ipairs( BasicStates ) do
					cosmo.yield{
						ptr = "Mk::"..string.lower(iv.id)
					}
				end
			end,
			
			do_map = function()
				for i, iv in ipairs( States ) do
					cosmo.yield{
						typename = iv.id,
						typeidx = i-1,
					}
				end
			end
		}
		
		local name = "mktypes"..y
		print ("NAME:", path..prefix..name)
		io.output(io.open(path..prefix..name,"w"))
		io.write(mkcode)
		io.close()
	end

	mk(mkhead,".h")
	mk(mksrc, ".cpp")

end

---MK END (Makes a Specific Type)--
-------------------------------------------
-------------------------------------------

-------------------------------------------
-------------------------------------------
--MAKE .cpp and .h TYPES BEGIN--
local maketypes = function()
	--class template.h for types
	local htypeTemplate = [[	

	$make_types[=[
	#ifndef $define
	#define $define
	#include "State.h"
	using namespace std;

	namespace con {

	$do_predeclare[==[
	class $pre;
	]==]

	class $cType : public State {
		
		static Assign assign;
		static bool bound;	
		
	
		public:
		
			static void Bind();	
						
			$cType ($args) : State($num, $idx) {
				$set				
			}		
		
			$cType (const State& s) : State($num, $idx) {
				assign.ptr.func(s.idx(), w(), s.w() );			
			}
		
			$cType& operator = (const State& s) {
				//mW
				assign.ptr.func(s.idx(), w(), s.w() );
				return *this;						
			}

			$cType& set($args) {
				$set
				return *this;
			}

		
			
	$statics					
	};
	} // con ::

	#endif

	]=]
	]]

	local ctypetemplate = [[
	$make_types[=[
	$do_include[==[
	#include "$include"
	]==]
	namespace con {

	Assign $cType :: assign;
	bool $cType :: bound = 0; 

	void $cType :: Bind(){
		if (!bound) {
			cout << "binding $cType" << endl;
			Conga::Line().bindFunc("$assignBind",   &assign.ptr.get);
			bound = 1;
		}
	}

	$statics
	}
	]=]
	]]

	
	--makes all types .h and .cpp

	for j, jv in ipairs(States) do	
		  local htypecode = cosmo.f(htypeTemplate){
			make_types = function() 
			cosmo.yield{
				define = jv.id.."_h_included",
				cType = jv.id,
				num  = #jv.bases,
				idx = j -1, --seriously dangerous idx method
		
				do_predeclare = function()
					for i, iv in ipairs(States) do
						cosmo.yield{
							pre = iv.id
						}
					end
				end,

				--builds constructor arguments
				args = function()
					out = ""
					for i, iv in ipairs(jv.bases) do
						out = out .. "double v" .. i .. " = 0"
						if i < #jv.bases then out = out .. "," end
					end
					return out
				end,
		
				--initializer
				set = function()
					out = ""
					for i, iv in ipairs(jv.bases) do
						out = out .. "mW[" .. i-1 .. "] =" .. "v" .. i ..";"
					end
					return out
				end,
		
				statics = function()
					local out =""
					for i, iv in ipairs(stats) do
						if iv[1].id == jv.id then
							out = out .. iv[2]
						end
					end
					return out
				end

			}
			end
		  }

		  local ctypecode = cosmo.f(ctypetemplate){
			make_types = function()
			cosmo.yield{
				do_include = function()
					for i, iv in ipairs(States) do
						cosmo.yield{
							include = iv.id..".h",
						}
					end
				end,
				cType = jv.id,
				assignBind = prefix2.."assign_"..jv.id.."_fn",
				reverseBind = prefix2.."reverse_"..jv.id,
				involuteBind = prefix2.."involute_"..jv.id,
				baseBind = prefix2.."assign_"..jv.id.."_base_index",
				num = ""..j-1,

		
				statics = function()
					local out =""
					for i, iv in ipairs(stats) do
						if iv[1].id == jv.id then
							out = out .. iv[3]
						end
					end
					return out
				end
			}
			end
		  }
		
		local basictype_check = 0
		for m, mv in ipairs(BasicStates) do
			if (jv.id == mv.id) then
				basictype_check = 1
			end
		end

		if (basictype_check ~= 1) then
			fname = jv.id..".cpp"
			io.output(io.open(path.."cpp/derived/"..fname, "w")) 
			io.write(ctypecode)
			io.close()

			fname = jv.id..".h"
			io.output(io.open(path.."h/derived/"..fname, "w")) 
			io.write(htypecode)
			io.close()
		else
			fname = jv.id..".cpp"
			io.output(io.open(path.."cpp/basic/"..fname, "w")) 
			io.write(ctypecode)
			io.close()

			fname = jv.id..".h"
			io.output(io.open(path.."h/basic/"..fname, "w")) 
			io.write(htypecode)
			io.close()
		end
	end
end

--MAKE .cpp and .h TYPES END--
-------------------------------------------
-------------------------------------------

mkoutput()
make_congaheaders()
maketypes()