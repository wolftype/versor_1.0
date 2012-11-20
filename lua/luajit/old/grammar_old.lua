--match, type

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
local open 		= "(" * zspace
local close 	= ")" * zspace
local scope 	=  S"()"		

--GA operations, inner outer geo
local product 	= 	S"<^*"
--reversion, inversion, involution, etc
local version   = S"!~#"

local seps = S","

local func = C(P"="*zspace*"function")^-1

--product capture
local gop = C( product ) * zspace	

--versions
local vop = C( version ) * zspace

--not a letter
local nonletter = space + scope + version + product

--three or more consecutive letters (i.e a type)
local types = C( (1 - nonletter )^3 ) * zspace

--at most 2 letters
local var = C( (1-nonletter)^-2 ) * zspace

--0 or more negative signs followed by 1 or more characters in range 0-9
local number = C( P"-"^-1 * R("09")^1 ) * zspace

local Exp, Term, Factor, Cast, Parenth, Word, Args = V"Exp", V"Term", V"Factor", V"Cast", V"Parenth", V"Word", V"Args"

local grammar = P{
	Exp,
	Exp = Ct( Factor * (gop^-1 * Factor)^0 );  			-- One or More Factors
	Factor = Ct(Cast) + Term + Ct( vop^-1 * Term );    	-- A Version, Term, or Combination
	Term = Cast + Word + Parenth;   					-- A Cast, Word or Parenthesized Expression
	Cast = Word^-1 * Parenth;	  						-- Cast (one word followed by parenthesis)
	Parenth = open * Exp * close;
	Word = types * var;
	Args = open * ( Ct( Word ) * (P","^0) )^1 * close;
}

grammar = zspace * grammar * -1



-----------------------------------------------

local parse = function (x)
	local res = grammar:match(x)
	return res
end


local function ctPrint(x)
	if type(x) == "table" then
		print("\tTABLE num of Terms:",#x,"\t")
		print(">>>")
		for i, iv in ipairs(x) do
			print ("Term: ", i)
			ctPrint(iv)		
		end
		print("\t")
	else
		
		print(x)
		
	end
end





local test = "Pnt a, Pnt b"
-- local test = [[
-- circle = function(Pnt a, Pnt b, Pnt c)
-- 	return a ^ b ^ c
-- end
-- 
-- ]]

ctPrint( parse(test) )



--]]