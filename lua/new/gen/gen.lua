local G = require "grammar"
local F = require "funcs"
local T = require "token"
require "types"

--[[
A FUNCTION is parsed in form

funcname (arguments) return operation

which is captured like so:

{ { funcname, {arguments} }, { return, {operation} } }

]]

module("gen", package.seeall)


--Deal With Last Minute Cast 
local printcast = function(k, cast, op)
	
	local out = " (\n"
	local sep = ","
	
	local c = F.castList( cast[2], cast[3] )

	if (op[1] == "gp") or (op[1] == "op") or (op[1] == "ip") then 

		local tx = F.productList( op[2], op[3], op[1], AllStates )
		
		--get token iv[2]
		for i, iv in ipairs (c) do	
			out = out .. T.makePToken( tx.inst[ iv[2] +1], "t"..op[4], "t"..op[5] ) 
			if i < #c  then out = out .. sep end
			out = out .. "\n"
		end		
	end

	out = out .. ");"
	
	return out
	
end



--pass in arg list and expression constructed from GenEx::evalExpression( Grammar.parse( "func(arg) return exp") )
assemble = function(arg, exp)

	local out = ""
	local finished = false
	
	
	for k, kv in ipairs(exp) do
		
		print(kv[1])
		
		local iter = k
		local head = ""
		local typ = ""
		local var = ""
		
		local nextop = {}
		
		if k < #exp then
			nextop = exp[k+1]
		end
		
		if  nextop[1] == "cast" then
			
			print("casting assembler ----> ", nextop[2].id )
			typ = nextop[2].id 
			head = " t" .. (k+1) --nextop[2].id
			var =  printcast(k, nextop, kv)
			
			iter = iter + 1
		
		else

			if kv[1] == "arg" then 
			--	print( "arg", kv[2].id, kv[3] )
				var = T.makeAType( kv[2], kv[3] , "t"..k ) 
			end
			
			if kv[1] == "reverse" or kv[1] == "involute" then
				 typ = kv[2].id
				 head = " t"..k.." = " 
				 var = kv[1].."( t".. (k-1) ..");"--makeVType( versionList( kv[2], kv[1] ), "t"..(k-1) )  
			end
			
			--if product
			if (kv[1] == "gp") or (kv[1] == "op") or (kv[1] == "ip") then 
				
				local pl =  F.productList( kv[2], kv[3], kv[1], AllStates)
				local ty = pl.type --F.getProductListType( pl )
				
				typ = ty.id
				if typ == "Muv" then typ = "Vec"..#ty.bases end
				head = " t"..k.." "
				var = T.makePType( pl.inst, "t"..(kv[4]), "t"..(kv[5]) )..";" 
			end
			
			--if casting operation, increment (skip)
			if kv[1] == "cast" then
				--k = k + 1
				--head = " t"..(k-1)
				--iter = iter + 1
			end
		
		end
		
		if finished == false then
			if iter == #exp then 
				finished = true
				head = "return " .. typ
			else
				head = typ .. head
			end
		end
		
		out = out .. "\n" .. head .. var
	end	
	
	return out
end


--FUNCTION GENERATOR, Loads Arguments and Uses them to Evaluate an Expression
GenEx = {
	
	
	--INITIALIZATION
	
	init = function(self) 

		self.arglist = {} 								--List of Arguments {id=Type}
		self.explist = {}								--Return Expression List

		self.varname = coroutine.create(
			function()
				local it = 1
				while true do
					local a = coroutine.yield(it-1) 	-- yield varnum back 
					self.explist[it] = a
					it = it + 1
				end
			end
		)

		coroutine.resume(self.varname) 					-- Begin Coroutine
	
	end,


	--PRINT OUT
	disp = function(self)  print("disp") for i, iv in ipairs(self.list) do print(i) end end, 
	
	--LIST OF ARGUMENTS AND RETURN EXPRESSION
	arglist = {},
	explist = {},


	varname,

	--Load Arguments
	loadArguments = function(self, x)
		for i, iv in ipairs(x) do
			--print (iv[2])
			self.arglist[ iv[2] ] = iv[1]
		end
	end,
	--EVALUATE EXPRESSION LIST
	evalExpression = function(self,x)
	
		local tvar
		
		--X is a Function Argument used to Get Type of Argument
		if type(x) == "string" then	
			
			local func = {"arg", _G[ self.arglist[x] ], x }
					local bool, iter = coroutine.resume(self.varname, func)
			return _G[ self.arglist[x] ], iter
		
		else --is a table

				--Two token operation (cast or inversion, involution, reversion)
				if ( #x == 2 ) then
				
					if ( G.vop:match(x[1]) ) then
						

						local lh, ovar = self:evalExpression(x[2])
						if (x[1]=="~") then 
							--local tmp = versionList(lh, "reverse")
					
							local func = {"reverse",lh}

							local bool, iter = coroutine.resume(self.varname, func)
							return lh, iter 
						end
				
						if (x[1]=="!") then 
							--local tmp = versionList(lh, "reverse")

							local func = {"reverse",lh}

							local bool, iter = coroutine.resume(self.varname, func)
							return lh, iter 
						end

						if (x[1]=="#") then 
							--local tmp = versionList(lh, "reverse")

							local func = {"involute",lh}

							local bool, iter = coroutine.resume(self.varname, func)
							return lh, iter 
						end
						
					--Another possible Two token Match is a Cast Operator
					else 
						if ( G.word:match( x[1] ) ) then
							print("WORD! CASTING!", x[1])
							local rh, rhid = self:evalExpression( x[2] )
							local func = {"cast", _G[ x[1] ], rh, rhid}
							local bool, iter = coroutine.resume(self.varname, func)
							return _G[  x[1] ], iter
						end
					end
					
				--otherwise its a binary function with three tokens
				else
			
					local lh, lvar = self:evalExpression(x[1])	
					--print(lh.id)
					if type(x[2]) ~= "table" then
											
						local bool, tlvar

						for i = 2, #x, 2 do
									
							tlvar = lvar
								
					 		local op = x[i]
							local rh, rvar = self:evalExpression(x [i+1])
							--print (rh.id)
				
							local top = ""
				
							if (op == "^") 		then  top = "op"
							elseif (op == "*") 	then  top = "gp" 
							elseif (op == "<")  then  top = "ip" 
							elseif (op == "-") then  top = "sub"
							elseif (op == "+") then  top = "add"
							end			
				
							local func = {top, lh, rh, tlvar, rvar}
							bool, lvar = coroutine.resume(self.varname, func)	
								
							local tmp = F.productList(lh, rh, top, AllStates)
							
							lh = tmp.type
						end				
					end
					return lh, lvar
				end
		end
	end
}

function makeExp(tmp)

	local c = G.Func:match( tmp ) 
	
	G.ctPrint(c)
	
	GenEx:init() 				--reinitialize
	GenEx:loadArguments( c[1][2] ) 			--get arguments to arglist
	GenEx:evalExpression( c[2][2] ) 			--evaluate table from Grammar.Parse and store as List
	
	return assemble ( GenEx.arglist, GenEx.explist )
	
end

getExp = function(tmp)

	local c = G.parse(tmp) 

	GenEx:init()
	GenEx:loadArguments( c[1][2] ) 			--get arguments to arglist
	GenEx:evalExpression( c[2][2] )

	local r = GenEx.explist[#GenEx.explist]
	if r[1] == "cast" then return r[2] end
	if r[1] == "arg" then return r[2] end
	if r[1] == "reverse" then return r[2] end
	if (r[1] == "gp" or r[1] == "op" or r[1] == "ip" ) then
		local pl =  F.productList( r[2], r[3], r[1], AllStates)
		return pl.type		
	end
end

func = function(tmp)

	local out = {}

	local c = G.parse(tmp) 

	GenEx:init()
	GenEx:loadArguments( c[1][2] ) 			--get arguments to arglist
	GenEx:evalExpression( c[2][2] )
	

	local r = GenEx.explist[#GenEx.explist]
	if ( r[1] == "cast" ) or (r[1] == "arg" )  or (r[1] == "reverse") then out.type = r[2] end
	if (r[1] == "gp" ) or ( r[1] == "op" ) or ( r[1] == "ip" ) then
		local pl =  F.productList( r[2], r[3], r[1], AllStates)
		out["type"] = pl.type		
	end
	
	out["assemble"] = assemble ( GenEx.arglist, GenEx.explist )
	
	return out
	
end

-- 
local c = "re( Pnt pnt, Sph sph ) return Pnt( sph * #pnt * !sph )"
-- 
local q =  func( c )
-- print(Rot_Dfp.key)
print (q.assemble)