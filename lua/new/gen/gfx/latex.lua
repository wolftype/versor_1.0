-------------------ADDONS (CAYLEY TABLES AND LATEX DIAGRAM GENERATORS)--
require "basis"
require "funcs"
require "types"
require "cosmo"

local latex = function(x,style)
	local s = "$"
	if style == "bold" then s = s.."\\boldsymbol{" end
	if x.w == -1 then s = s.."-" end
	for v in string.gmatch(x.id, "%a+") do
		--print(v)
		s = s .. v 
	end
	for v in string.gmatch(x.id, "%d+") do
		--print(v)
		s = s .."_{".. v .."}"
	end
	if style == "bold" then s = s.."}" end
	s = s.."$"
	return s
end

local tabletemp = [[
\begin{tabular}{$do_arrangement[=[$arrangement]=]}

$do_col[=[
$typeset
]=]

\hline

$do_row[=[
$typeset
]=]

\end{tabular}
]]

local R3tablecode = cosmo.f(tabletemp){
	do_arrangement = function()
		cosmo.yield{
			arrangement = "|c|c|c|c|c|c|c|c|c",
		}
	end,

	do_col = function()
	local out = "$\\boldsymbol{*}$ "
	for i, iv in ipairs(R3) do
		out = out .. "&"..latex(iv,"bold") .. " "
	end
	out = out .. "\\\\"
	cosmo.yield{
		typeset = out
	}
	end,
	
	do_row = function()
	for i, iv in ipairs(R3) do
		local out = latex(iv,"bold") .. "  "
		for j, jv in ipairs(R3) do
			out = out .. "&"
			out = out .. latex(iv.gp[jv][1],"") .. "  "
		end
		cosmo.yield{
			typeset = out .. "\\\\\n\\hline"
		}
	end
	end
	
}

local TypeTableCode = cosmo.f(tabletemp){

	do_arrangement = function()
		local arrange = "|c|"
		for i, iv in ipairs(BasicStates) do
			arrange = arrange .. "c|" 
		end
		cosmo.yield{
			arrangement = arrange,
		}
	end,
	
	do_col = function()
	local out = "$\\boldsymbol{*}$ "
	for i, iv in ipairs(BasicStates) do
		out = out .. "&{\\bf "..iv.id .. "} "
	end
	out = out .. "\\\\"
	cosmo.yield{
		typeset = out
	}
	end,
	
	do_row = function()
	for i, iv in ipairs(BasicStates) do
		local out = "{\\bf "..iv.id .. "}  "
		for j, jv in ipairs(BasicStates) do
			out = out .. "&"
			out = out .. getTypeFromString(product(iv,jv,"gp").type,BasicStates).id .. "  "
		end
		cosmo.yield{
			typeset = out .. "\\\\ \n\\hline"
		}
	end
	end
	
}


local TypeTableCode2 = cosmo.f(tabletemp){
	do_arrangement = function()
		cosmo.yield{
			arrangement = "|c|c|c|c",
		}
	end,
	
	do_col = function()
	local out = "$\\boldsymbol{*}$ "
	for i, iv in ipairs(BasicStates) do
		out = out .. "&{\\bf "..iv.id .. "} "
	end
	out = out .. "\\\\"
	cosmo.yield{
		typeset = out
	}
	end,
	
	do_row = function()
	for i, iv in ipairs(BasicStates) do
		local out = "{\\bf "..iv.id .. "}  "
		for j, jv in ipairs(BasicStates) do
			out = out .. "&"
			out = out .. getTypeFromString(product(iv,jv,"gp").type, BasicStates).id .. "  "
		end
		cosmo.yield{
			typeset = out .. "\\\\ \n\\hline"
		}
	end
	end	
}

