--NEWER

require "cosmo"
require "basis"
require "types"
require "funcs"

local env = os.getenv("HOME")
local path = env.."/xcode/versor/trunk/libconga2/"
local prefix = "conga_"

print(path)

local tFuncs = {} -- store results for handler function
local sTypes = States


-------------------------------------------
-------------------------------------------
--BASE NAMES AND INDICES BEGIN--
-- SRC File Indexing --

local gen_indices = function()
	
	local cbn = [[
	char * conga_base_names[32] = { 
	"_s", 
	"_e1", "_e2", "_e3", "_no", "_ni", 
	"_e12", "_e13", "_e23", "_e1no", "_e2no", "_e3no", "_e1ni",  "_e2ni", "_e3ni", "_noni", 
	"_e12no", "_e13no",  "_e23no",  "_e12ni", "_e13ni", "_e23ni", "_e1noni", "_e2noni", "_e3noni", "_e123", 
	"_e12noni", "_e13noni", "_e23noni", "_e123no", "_e123ni", 
	"_e123noni", 
	};

	int conga_base_grades[32] = { 
	1, 
	1, 1, 1, 1, 1, 
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	4, 4, 4, 4, 4,
	5
	};

	int conga_base_factors[][32] = { 
	{ 0 }, { 1 }, { 2 } , { 3 } , { 4 } , { 5 },
	{1, 2 }, {1, 3 }, {2, 3}, {1, 4 }, {2, 4}, { 3, 4}, {1, 5},  {2, 5} , {3, 5}, { 4, 5},
	{1,2,4},{1, 3, 4}, {2, 3, 4}, {1,2,5},  {1, 3, 5}, {2, 3, 5}, {1, 4, 5 },  {2, 4, 5}, {3, 4, 5},{ 1, 2, 3}, 
	{1, 2, 4, 5}, {1, 3, 4, 5}, {2, 3, 4, 5},{1, 2, 3, 4}, {1, 2, 3, 5}, 
	{1, 2, 3, 4, 5}
	};
	]]


	local baseindextemplate = [[

	$do_it[=[
	int conga_base_index[][32] = {
		$bases	
	};
	]=]

	]]

	--FILL OUT CODE
	local baseindexcode = cosmo.f(baseindextemplate){
		do_it = function()
			cosmo.yield{
				bases = function() 
					local out = ""
					for i, iv in ipairs(States) do
						out = out.."//"..iv.id.."\n{"
						for j, jv in ipairs(iv.bases) do
							local ti = -1
							for k, kv in ipairs(order) do
								if jv.id == kv.id then ti = k-1 end
							end	
							out = out..ti
							if j < #iv.bases then out = out.."," end
						end
						out = out .. "}"
						if i < #States then out = out ..",\n" end
					end
					return out
				end
			}
		end
	}
	local name = path..prefix.."Indexing.c"
	
	io.output(io.open(name, "w"))
	io.write(baseindexcode)
	io.write(cbn)
	io.close()

end
--BASE NAMES AND INDICES END--
-------------------------------------------
-------------------------------------------




--HERMITIAN CALCULATIONS BEGIN--
local hermitian_ops = function()

	local alltypetemplate = [[
	$do_bindings[=[

	$do_include[==[
	#include "$include_name"
	]==]

	typedef double * (*conga_selfPtr)(double*, double*);

	double * conga_reverse_fn(int, double*, double*);
	double * conga_involute_fn(int, double*, double*);
	double * conga_conjugate_fn(int, double*, double*);

	conga_selfPtr conga_reverse[$num] = {
		$reverse_bindings[==[
		$reverse_name,
		]==]
	};


	conga_selfPtr conga_involute[$num] = {
		$involute_bindings[==[
		$involute_name,
		]==]
	};

	conga_selfPtr conga_conjugate[$num] = {
		$conjugate_bindings[==[
		$conjugate_name,
		]==]
	};
	]=]

	]]

	local calltypetemplate = [[
	#include "CongaBasicTypes.h"
	double * conga_reverse_fn(int i, double* a, double* r){
		return conga_reverse[i](a,r);
	}
	double * conga_involute_fn(int i, double* a, double* r){
		return conga_involute[i](a,r);
	}
	double * conga_conjugate_fn(int i, double* a, double* r){
		return conga_conjugate[i](a,r);
	}
	]]

	local halltypecode = cosmo.f(alltypetemplate){
		do_bindings = function() 
			cosmo.yield{
				num = #States,
				do_include = function()
					for j, jv in ipairs(States) do
						cosmo.yield{
							include_name = prefix.."assign_"..jv.id..".h",
						}
					end
				end,
				reverse_bindings = function() 
					for j, jv in ipairs(States) do
						cosmo.yield{
							reverse_name = prefix.."reverse_"..jv.id,
						}
					end
				end,
				involute_bindings = function() 
					for j, jv in ipairs(States) do
						cosmo.yield{
							involute_name = prefix.."involute_"..jv.id,
						}
					end
				end,
				conjugate_bindings = function() 
					for j, jv in ipairs(States) do
						cosmo.yield{
							conjugate_name = prefix.."conjugate_"..jv.id,
						}
					end
				end
			}
		end

	}

	print(halltypecode)
	fname = "CongaBasicTypes.h"
	io.output(io.open(path..fname, "w")) 
	io.write(halltypecode)
	io.close()

	print(calltypetemplate)
	fname = "CongaBasicTypes.c"
	io.output(io.open(path..fname, "w")) 
	io.write(calltypetemplate)
	io.close()
end


-------------------------------------------
-------------------------------------------
--ASSIGNMENTS BEGIN (casting)--
local assignments = function() 

for j, jv in ipairs(States) do

	print( j, " ", jv.id )
	
	local filename = prefix.."assign_"..jv.id
	
	local assign_h_template = [[

$do_header[=[
		#ifndef $include
		#define $include
		#include <stdio.h>
		]=]
		
		#ifdef __cplusplus
		extern "C" {
		#endif

		//assign b to a
		$do_assignments[=[
		void $assign_fn_name(double *, double *);
		]=]
		
		$do_direct_assignment[=[
		void $direct_assign_fn_name(double*, double*);
		]=]
		
$do_conjugations[=[
		double * $reverse_fn_name(double *, double *);
		double * $involute_fn_name(double *, double *);
		double * $conjugate_fn_name(double *, double *);
		]=]
		
		#ifdef __cplusplus
		}
		#endif
		#endif
	
	]]
	
	local assign_c_template = [[
	
$do_header[=[
#include "$include"
]=]
	
$do_assignments[=[
void $assign_fn_name(double * a, double * b) 
{			
$assign
}
]=]

$do_direct_assignment[=[
void $direct_assign_fn_name(double* a, double* b)
{
$direct_assign
}
]=]
		
$do_conjugations[=[
double * $reverse_fn_name(double * a, double *r)
{
$reverse
return r;
}

double * $involute_fn_name(double * a, double * r)
{
$involute
return r;
}

double * $conjugate_fn_name(double * a, double * r)
{
$conjugate
return r;
}
	]=]

	]]
	
local assign_con_h = [[

$do_header[=[
#ifndef $define
#define $define
#include "$include"
	]=]
	
	#ifdef __cplusplus
	extern "C" {
	#endif

$do_func_ptrs[=[
	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void $conga_assign_fn_name(int, double *, double *);
	
	conga_assign_Func_ptr $conga_assign_func_name[$num] = {
			$do_func_name[==[
			$fname,
			]==]
			$do_direct_name[==[
			$dfname,
			]==]
		};
		
	]=]
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	]]
	
	
	local aFuncs = {}
	local bFuncs = {}
	local hcasts = cosmo.f(assign_h_template) {
		
		do_header = function()
			cosmo.yield{
				include = filename.."_h_included"
			}
		end,
		
		do_assignments = function()
			for i, iv in ipairs(sTypes) do
				if gradeShare(jv, iv) == 1 then
					cosmo.yield{ 
						assign_fn_name = prefix.."assign_"..j.."_"..i,
					}
				end
			end
		end,
		
		do_direct_assignment = function()
			cosmo.yield{
				direct_assign_fn_name = prefix.."direct_assign_"..j,
			}
		end,
		
		do_conjugations = function()
			cosmo.yield{
				reverse_fn_name   = prefix.."reverse_"..jv.id,
				involute_fn_name  = prefix.."involute_"..jv.id,
				conjugate_fn_name  = prefix.."conjugate_"..jv.id
			}
		end
	}
	
	local idx = 0
	local ccasts = cosmo.f(assign_c_template) {	
		
		do_header = function()
			cosmo.yield{
				include = filename..".h"
			}
		end,
			
		do_assignments = function()
			for i, iv in ipairs(sTypes) do
				if gradeShare(jv, iv) == 1 then
					cosmo.yield{ 
						assign_fn_name = prefix.."assign_"..j.."_"..i,
						assign = cast(jv,iv), 
						table.insert(aFuncs, {prefix.."assign_"..j.."_"..i, i} ), 
						idx = idx +1
					}
				end
			end
		end,
		
		do_direct_assignment = function()
			cosmo.yield{
				direct_assign_fn_name = prefix.."direct_assign_"..j,
				direct_assign = directCast(jv),
				table.insert(bFuncs, prefix.."direct_assign_"..j),				
			}
		end,
		
		do_conjugations = function()
			cosmo.yield{
				reverse_fn_name   = prefix.."reverse_"..jv.id,
				reverse = version(jv, "reverse"),
				involute_fn_name  = prefix.."involute_"..jv.id,
				involute = version(jv, "involute"),
				conjugate_fn_name  = prefix.."conjugate_"..jv.id,
				conjugate = version(jv, "conjugate"),
			}
		end
	}
	
	--handlers to functions
	local hcastscon = cosmo.f(assign_con_h){

	  do_header = function()
		cosmo.yield{
			define = filename.."_con_h_included",			
			include = filename..".h",
		}
	  end,

	  do_func_ptrs = function()
		cosmo.yield{
			conga_assign_fn_name = filename.."_fn",
			conga_assign_func_name = filename.."_func",
--			conga_reverse_fn_name = filename.."_reverse_fn",
--			conga_involute_fn_name = filename.."_involute_fn",
			num = #aFuncs + 1,
		    do_func_name = function()
			  for i, iv in ipairs(aFuncs) do
				cosmo.yield{
					fname = iv[1]
				}
		      end
		    end,
			do_direct_name = function()
				cosmo.yield{
					dfname = bFuncs[1]
				}
			end
	    }
	  end
	}

	local assign_con_c = [[
	$do_header[=[
	
	#include "$include"
	
	$do_switches[==[
	int $conga_assign_switcher_name[$num] = {
	$do_switch[===[ 
	$switchval, ]===]
	};
	]==]
	
	$do_base_indices[==[
	int $conga_base_index_name[$bnum] = { $do_index[===[$index,]===] };
	]==]
	
	void $conga_assign_fn_name(int _idx, double * a, double *r){
	
		$conga_assign_func_name[ $conga_assign_switcher_name [_idx] ](a, r);
	}


	]=]

	]]

	local ccastscon = cosmo.f(assign_con_c){
	  do_header = function()
		cosmo.yield{
			include = filename.."_con.h",
			conga_assign_fn_name = filename.."_fn",
			conga_assign_func_name = filename.."_func",
			conga_assign_switcher_name = filename.."_switch",
--			conga_reverse_fn_name = filename.."_reverse_fn",			
--			conga_reverse_fn = prefix.."reverse_"..jv.id,			
--			conga_reverse_fn_name = filename.."_involute_fn",			
--			conga_reverse_fn = prefix.."involute_"..jv.id,			
	
	     do_switches = function()
			cosmo.yield{
			
			conga_assign_switcher_name = filename.."_switch",
			num = #sTypes,
			do_switch = function()
				for k, kv in ipairs(States) do
					local tmp = #aFuncs + 1
					for l, lv in ipairs(aFuncs) do					   
						if lv[2] == k then tmp = l end
					end
					--	if k / 10 - math.floor(k/10) == 0 then tmp = tmp ..""
						cosmo.yield{
							switchval = tmp-1,
						}
				end
			end
			}
	    end,
	
		do_base_indices = function()
			cosmo.yield{
				conga_base_index_name = filename.."_base_index",
				bnum = #jv.bases,
				do_index = function()
					for bi, biv in ipairs(jv.bases) do
						local ti = -1
						for oi, oiv in ipairs(order) do
							if biv.id == oiv.id then ti = oi-1 end
						end
						cosmo.yield{
							index = ti
						}
					end
				end
			}
		end
	   }
	  end,
	}
	
	io.output(io.open(path.."headers/assign/"..filename..".h", "w"))
	io.write(hcasts)
	io.close()
	
	io.output(io.open(path.."source/assign/"..filename..".c", "w"))
	io.write(ccasts)
	io.close()
	
	io.output(io.open(path.."headers/assign/"..filename.."_con.h", "w"))
	io.write(hcastscon)
	io.close()
	
	io.output(io.open(path.."source/assign/"..filename.."_con.c", "w"))
	io.write(ccastscon)
	io.close()
	end
	
end
--ASSIGNMENTS END--
-------------------------------------------
-------------------------------------------


-------------------------------------------
-------------------------------------------
--PRODUCTS BEGIN--
---product files----


local make_product_files = function(op)

tFuncs = {} --clear table

local htemplate = [[
//headers
$header[=[
#ifndef $name
#define $name
]=]

#ifdef __cplusplus
extern "C" {
#endif
		
$make_functions[=[
double * $fname(double*, double*, double*);
]=]

#ifdef  __cplusplus
}
#endif
#endif
]]

local ctemplate = [[

$do_header[=[
#include "$name"
]=]

$make_functions[=[
double * $fname(double * a, double * b, double *r) { 
	$make_words[==[

	//$basis
	r[$ret_idx] = $word;
	
	]==]
	return r;
}

]=]
]]

 for j, jv in ipairs(sTypes) do

	local hcode = cosmo.f(htemplate){
		
		header = function()
			cosmo.yield{
				name = prefix..op.."_"..jv.id.."_h_included"
			}
		end,
		
		make_functions = function()
			for i,iv in ipairs(sTypes) do
				cosmo.yield{
					fname = prefix..op.."_"..j.."_"..i,
				}
			end
		end,
	}

	filename = prefix..op.."_"..jv.id..".h"
	io.output(io.open(path.."headers/"..op.."/"..filename, "w"))
	io.write(hcode)
	io.close()
	
	local ccode = cosmo.f(ctemplate){
		do_header = function()
			cosmo.yield{
				name = prefix..op.."_"..jv.id..".h",
			}
		end,		
		make_functions = function()
			for i,iv in ipairs(sTypes) do
				cosmo.yield{								
					fname = prefix..op.."_"..j.."_"..i,								
					make_words = function()
						tmp = product(jv,iv,op)
						--name of function, number of doubles to fill, type of state returned, idx of state
						table.insert(tFuncs,{ prefix..op.."_"..j.."_"..i, getTypeFromString(tmp.type, sTypes) } )					
						for k, kv in ipairs(tmp.inst) do
							cosmo.yield{
								basis = kv[1],
								ret_idx = k-1,
								word = kv[2],
							}
						end
					end
				}
			end
		end
	}
	
	
	filename = prefix..op.."_"..jv.id..".c"
	io.output(io.open(path.."source/"..op.."/"..filename, "w"))
	io.write(ccode)
	io.close()
		


end
end
--PRODUCTS END--

--PRODUCTS HANDLER BEGIN--
-----------product file handlers-------------
local make_product_handler_files = function(op)

local hfunc = [[
$do_define[=[
#ifndef $define
#define $define
]=]
#ifdef __cplusplus
extern "C" {
#endif

#ifndef conga_Func_ptr
typedef double * (*conga_Func_ptr)(double*, double*, double*);
#endif

$do_include[=[
#include "$filen"
]=]

$do_fns[=[
double * $fn_prod_name(int, double*, double*, double*);
int  $fn_address_name(int idx_a, int idx_b);
]=]

$make_functor[=[
conga_Func_ptr $fn_ptr_name[$numfunc] = {
	$do_names[==[
	$fname,]==]
};

]=]
#ifdef  __cplusplus
}
#endif
#endif
]]

local cfunc = [[
$do_numstates[=[
#include "$include"
#include <math.h>

//Function Handlers (return Functions at _idx)
double * $fn_prod_name(int _idx, double* a, double* b, double* r)    { return $fn_ptr_name[_idx]( a, b, r ); }

//Number of _ Product Types
int $cn_num_states_name    	=  $numStates;

//Number of _ Product Operations
int $cn_num_func_name 	 	=  $numFuncs;

//Return IDX of A with B in an NUM wide array
int $fn_address_name(int idx_a, int idx_b) {
	return idx_a * $numStates + idx_b;
};

int $cn_return_idx_name[$numFuncs] = {
	$do_indices[==[ $index, ]==]
};

//GLOBALS	
char * $cn_state_names_name[$numStates] = {
	$do_names[==[ 
	"$name", ]==]
}; 

char * $cn_basis_names_name[$numStates] = {
	$do_bases[==[
	"$bases",]==]
};

int $cn_state_size_name[$numStates] = {
	$do_sizes[==[ 
	$size, ]==]
};

//typedef ptr . . .

]=]
]]

local hfuncode = cosmo.f(hfunc){

	do_define = function()
		cosmo.yield{
			define = prefix..op.."_functions_h_included"
		}
	end, 
	do_fns = function()
  	 cosmo.yield{
	
	fn_prod_name    = prefix..op.."_fn",
	fn_address_name = prefix..op.."_address",
	
	}
	end,
	
	do_include = function()
		for i, iv in ipairs(sTypes) do
		cosmo.yield{
			filen = prefix..op.."_"..iv.id..".h",
		}
		end
	end,
	
	make_functor = function()		
		cosmo.yield{
			numfunc = #tFuncs,	
			fn_ptr_name		= prefix..op.."_func",
			do_names = function()
				for i,iv in ipairs(tFuncs) do
					cosmo.yield{
						--function name
						fname = iv[1],
					}
				end
			end,

		}
	end

}



local cfuncode = cosmo.f(cfunc){
	do_numstates = function()
	cosmo.yield{
		
		include 	 =  prefix..op.."_con.h",
		numFuncs   	 =  #tFuncs,		
		numStates    =  #sTypes,
		
		fn_prod_name			= prefix..op.."_fn",
		fn_ptr_name				= prefix..op.."_func",
		cn_num_states_name		= prefix..op.."_numstates",
		cn_num_func_name 		= prefix..op.."_numfunc",
		fn_address_name			= prefix..op.."_address",
		cn_return_idx_name		= prefix..op.."_return_idx",
		cn_state_names_name		= prefix..op.."_name",
		cn_state_size_name		= prefix..op.."_size",
		cn_basis_names_name     = prefix..op.."_bases",
				
		do_names = function()
			for i, iv in ipairs(sTypes) do
				cosmo.yield{
					name = iv.id,
				}
			end
		end,
		
		do_bases = function()
			for i, iv in ipairs(sTypes) do
				cosmo.yield{
					bases = tableToString(iv.bases, "\t|\t")
				}
			end
		end,
				
		do_sizes = function()
			for i, iv in ipairs(sTypes) do
				cosmo.yield{ size = #iv.bases }
			end
		end,
		
		do_indices = function()
			for i, iv in ipairs(tFuncs) do
				for j, jv in ipairs(sTypes) do
					if jv.id == iv[2].id then
						cosmo.yield { index = j-1 }
					end
				end
			end
		end
	}
	end
}

sfile = prefix..op.."_con.h"
io.output(io.open(path..sfile, "w"))
io.write(hfuncode)
io.close()

sfile = prefix..op.."_con.c"
io.output(io.open(path..sfile, "w"))
io.write(cfuncode)
io.close()

end
--PRODUCTS HANDLER END--

gen_indices()
hermitian_ops()
assignments()

make_product_files("gp")
make_product_handler_files("gp")
make_product_files("op")
make_product_handler_files("op")
make_product_files("ip")
make_product_handler_files("ip")


