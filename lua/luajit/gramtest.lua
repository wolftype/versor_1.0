--P 
require "types"
require "funcs"
--require "org"

local lpeg = require "lpeg"
local C = lpeg.C 		--Capture
local Ct = lpeg.Ct		--Capture to Table

local R = lpeg.R		--Range
local S = lpeg.S		--Set
local P = lpeg.P		--Pattern
local V = lpeg.V		--Rule

--space, tab, new line, return (zero or more)
local space 	= 	S" \t\n\r"
local zspace 	= 	S" \t\n\r"^0	

--scope
local open 		= P"(" * zspace
local close 	= P")" * zspace
local scope 	=  S"()"		

--GA operations, inner outer geo
local product 	= 	S"<^*"
--reversion, inversion, involution, etc
local version   = S"!~#"

local seps = S"," * zspace

local func = C(P"="*zspace*"function")^-1
	
local ret = C(P("return")) * zspace 

local reserved = ret
	
--capital letters	
local cap = R('AZ')
local low = R('az')

--product capture
local gop = C( product ) * zspace	

--versions
local vop = C( version ) * zspace

--not a letter
local nonletter = space + scope + version + product + seps + reserved

local word = P(1 - nonletter)^1

--A Capital followed by three or more consecutive letters (i.e a type)
local types = C( cap * word ) * zspace 

--variables are lowercase and may be comma separated
local var = C( low * word - reserved) * (seps + zspace)

--0 or more negative signs followed by 1 or more characters in range 0-9
local number = C( P"-"^-1 * R("09")^1 ) * zspace


--local Exp, Term, Factor, Cast, Parenth, Word, Args = V"Exp", V"Term", V"Factor", V"Cast", V"Parenth", V"Word", V"Args"

-- local grammar = P{
-- 	Exp,
-- 	Exp = Ct(Args) * Ct( Factor * (gop^-1 * Factor)^0 );  			-- One or More Factors
-- 	Factor = Ct(Cast) + Term + Ct( vop^-1 * Term );    	-- A Version, Term, or Combination
-- 	Term = Cast + Word + Parenth;   					-- A Cast, Word or Parenthesized Expression
-- 	Cast = Word^-1 * Parenth;	  						-- Cast (one word followed by parenthesis)
-- 	Parenth = open * Exp * close;
-- 	Word = types * var;
-- 	Args = open * ( Ct( Word ) * (P","^0) )^1 * close;
-- }

local Func, Exp, Sig, Factor, Term, Version, Cast, Instance, Parenth, Arg, Return = V"Func",V"Exp", V"Sig", V"Factor", V"Term", V"Version", V"Cast", V"Instance",V"Parenth",V"Arg", V"Return"

--local Func, Exp, Factor, Parenth = V"Func", V"Exp", V"Factor", V"Parenth"

local grammar = P{
	Func,
	Func	= Ct(Sig * Exp^0 * Return); --* C(Return);--Ct( Sig );--* Exp^0 * Return);
	Exp 	= Ct(Factor * (gop^-1 * Factor)^0);
	Sig 	= Ct( C( word ) * zspace * Ct(Arg) );			-- Function Signature
	Factor 	= Term + Version + Cast;    					-- A Term, Version or Cast,
	Term 	= var + Parenth + Instance; 					-- An Instance, Variable (predefined), Or Parenthetical 
	Version = Ct( vop^-1 * Term );
	Cast 	= Ct(types^-1 * Parenth );
	Parenth = open * Exp * close;
	Instance = types^1 * var^1;
	Arg 	= open * Ct(Instance)^1 * close;
	Return 	= Ct(ret * Exp);
}

-- local grammar = P{
-- 	Exp,
-- 	Exp = Ct( Term * (gop^-1 * Term)^0 );
-- 	Term = Ct( var + Parenth );
-- 	Parenth = open * Exp * close;	
-- }

grammar = zspace * grammar * -1

local parse = function (x)
	local res = grammar:match(x)
	return res
end

local function ctPrint(x,n)	
	local tab = ""	
	for i=0, n, 1 do tab = tab .. ">>>" end
	if type(x) == "table" then		
		print(tab .. " TABLE num of Terms:",#x,"\t")
		for i, iv in ipairs(x) do
			print (tab.." Term: ", i)
			ctPrint(iv,n+1)		
		end
	else
		print(tab.." "..x)		
	end
end


-- local c = "ab return ab ^ cd ^ ed"
local c = [[ testfunc ( Vec ab, Vec bd, Vec cd ) return ab ^ bd ^ cd
]]
--"Cir( !ab ^ cd ^ Vec(de ^ dl) )"
local texp = var * (gop^-1 * var)^0
local tp = open * texp * close
--print ( tp:match(c) )
ctPrint (parse(c),0)
--[[
testfunc ( Vec ab, Vec bd, Vec cd )
	return ab ^ bd ^ cd
]]


