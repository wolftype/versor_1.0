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
--reversion, inversion, etc
local version   = S"!~+"

--product capture
local gop = C( product ) * zspace	

--versions
local vop = C( version ) * zspace


--not a letter
local nonletter = space + scope + version + product 

--one or more consecutive letters (i.e a type)
local word = C( (1 - nonletter )^1 ) * zspace


--0 or more negative signs followed by 1 or more characters in range 0-9
local number = C( P"-"^-1 * R("09")^1 ) * zspace

--word followed by parenthesised expression
--local cop = C() * zspace

local Exp, Term, Factor, Cast, Parenth = V"Exp", V"Term", V"Factor", V"Cast", V"Parenth"

local grammar = P{
	Exp,
	Exp = Ct( Factor * (gop^-1 * Factor)^0 );  	-- One or More Factors
	Factor = Term + Ct( vop^-1 * Term ) + Ct(Cast);    	-- Versions (reversions, inversions, etc)
	Term = word + Parenth;   					-- Word or Parenthesized Expression
	Cast = word * Parenth;	  					-- Cast
	Parenth = open * Exp * close;
} 

grammar = zspace * grammar * -1

local parse = function (x)
	local res = grammar:match(x)
	return res
end



--local cop = Ct(word*open*word*close)


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

--ctPrint( cop:match("vec(vec)") )

ctPrint( parse("Vec ( Rot * Vec * !Rot )") )

