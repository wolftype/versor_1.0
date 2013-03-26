--GRAPHING OF CGA--
require "basis"
require "funcs"
require "types"
require "cosmo"
require "org"

local testStates = {Biv, Vec, Tri, Rot, Trs, Mot, Dil, Mnk, Trv,}

local path = os.getenv("HOME").."/Documents/2010/dot/"
local fname = "productgraph.dot"

optypes = {"ip","op","gp"}
hermtypes = {"involute","reverse","conjugate"}


latexsym = {}
latexsym["op"] = "$\\Large\\boldsymbol{\\wedge}$"
latexsym["ip"] = "$\\Large\\boldsymbol{\\rfloor}$"
latexsym["gp"] = ""

codesym = {}
codesym["op"] = "$\\boldsymbol{\\wedge}$"
codesym["ip"] = "$\\boldsymbol{\\rfloor}$"
codesym["gp"] = "$\\boldsymbol{*}$"

opcolors = {"green","blue","red"}

--LATEX COMMANDS
includegraphics = function(tx)
	local out = "\\includegraphics[width=.3cm]{figures/elements/"..string.lower(iv.id).."}"
	return out
end

texttt = function(tx)
	local out = "\\texttt{"..string.lower(tx.id).."}\n"
	return out
end

tabularnewline = function()
 	local out = "\\tabularnewline"
	return out
end

hline = function()
	local out = "\\hline\n"
	return out
end

lBegin = function(c)
	local out = "\\begin{"..c.."}"
end

lEnd = function(c)
	local out = "\\end{"..c.."}"
end

--gp op ip--
prodtest = function(op)
	for i, iv in ipairs(BasicStates) do
		for k, kv in ipairs(BasicStates) do
			t = getTypeFromString( product(iv,kv,op).type, BasicStates)
			if t.id ~= "Muv" and t.id ~= kv.id and t.id ~= iv.id then 
				print(iv.id, "\t", kv.id, "\t", t.id,"\n") 
			end
		end
	end
end


--DOT GRAPH
multperms = function()
	local graphcode = [[
	digraph permutations {
		$do_nodes[=[
			node $stype [shape = circle];
		]=]
		$do_connections[=[
			node $oper [shape = point, color = $opcol];
			$s1type -> $oper;
			$s2type -> $oper; 
			$oper -> $s3type;
		]=]			
	}
	]]
	local graphfunc = cosmo.f(graphcode){
		do_nodes = function()
			for i, iv in ipairs(testStates) do
			cosmo.yield{
				stype = iv.id,
			}
			end
		end,
		do_connections = function()
			for i, iv in ipairs(testStates) do
				for k, kv in ipairs(testStates) do
					for j, jv in ipairs(optypes) do
 						t = getTypeFromString( product(iv,kv,jv).type, testStates)
						if t.id ~= "Muv" and t.id ~= kv.id and t.id ~= iv.id then 
							cosmo.yield{
								s1type = iv.id,
								s2type = kv.id,
								s3type = t.id,
								oper = iv.id.."_"..jv.."_"..kv.id,
								opcol = opcolors[j],
							}
						end
					end
				end
			end			
		end
	}
	
	io.output(io.open(path..fname, "w")) 
	io.write(graphfunc)
	io.close()
end
--multperms()

--DUALITY--
duality = function(tx)
	t = getTypeFromString( product(tx,Pss,"gp").type, States)
	print("Dual of ", tx.id, " is ", t.id,"\n") 
end

--Difference (searching for paravectors)
para = function()
	for i,iv in ipairs(BasicStates) do
		for k, kv in ipairs(BasicStates) do
			--print (iv.id, kv.id, diffType(iv,kv,States))
			local t = diffType(iv,kv,States)
			if t.id ~= "Muv" then print(iv.id, kv.id, t.id) end
		end
	end
end

--Sort By Complexity (number of bases)
complexity_sort = function(tx,ty)
	return #tx.bases > #ty.bases
end

grade_usage = function(tx)

	local res = {}

	for i, iv in ipairs(tx.bases) do
		--find grade
		local added = 0
		for k, kv in ipairs(res) do
			if kv == iv.g then added = 1 end
		end
		if added == 0 then table.insert(res,iv.g) end
	end

	local str = "gu: "

	for i, iv in ipairs(res) do str = str..iv.." " end

	return str
end

--Representation 
eu = function(tx)
	if string.find(tx.id,"noni") then return tx.g-2 end
	if string.find(tx.id,"no") then return tx.g-1 end
	if string.find(tx.id,"ni") then return tx.g-1 end
	return tx.g
end

--Representation
rep_check = function(tx)
	if string.find(tx.id,"noni") then return "Conformal" end
	if string.find(tx.id,"no") then return "Affine" end
	if string.find(tx.id,"ni") then return "Projective" end
	return "Euclidean"
end

eu_grade_usage = function(tx)
	local res = {}

	--For Each Blade . . .
	for i, iv in ipairs(tx.bases) do


		
		-- . . . find euclidean element of grade . . .
		local grade = eu(iv)

		--if euclidean element of grade not accounted for, add it in to table
		local added = 0
		for k, kv in ipairs(res) do
			if kv[1] == grade then added = 1 end
		end		
		if added == 0 then table.insert(res,{grade}) end
		
		--check nature of blade (euclidean, affine, projective, conformal)
		local rep = rep_check(iv)		
		
		for k, kv in ipairs(res) do
			if kv[1] == grade then
			 	local bRepad = 0
				for j, jv in ipairs(kv) do
					if jv == rep then bRepad = 1 end
				end
				if bRepad == 0 then table.insert(kv,rep) end
			end
		end
		
	end

	--Add 	
	local str = ""
	for i, iv in ipairs(res) do 
		for k, kv in ipairs(iv) do 
			if k > 1 then
			str = str.. " " .. kv .. " " .. iv[1] .. "D"
			end
		end	
--		str = str .."\n\t" ..  iv[1]
	end
	return str
end

--print( "eu grade usage: \n", eu_grade_usage(Rot) )

--print bases
base_string = function(tx)
	local str = ""
	for i, iv in ipairs(tx.bases) do
		str = str..iv.id.." "
	end
	return str
end

print_grade = function()
	table.sort(BasicStates,complexity_sort);
	for i,iv in ipairs(BasicStates) do 
		print("\n\n",iv.id, iv.desc, #iv.bases, "\n", eu_grade_usage(iv), "\n", base_string(iv) )
	end
end

print_grade()

--find all ways of constructing stype (except scalar mult)
FindAll = function(stype, nottype)
	local out = {}
	for i, iv in ipairs(BasicStates) do
		for k, kv in ipairs(BasicStates) do
			if iv.id ~= "Sca" and kv.id ~= "Sca" then
				for j,jv in ipairs(optypes) do
					local t = getTypeFromString( product(iv,kv,jv).type, States)
					if t.id == stype.id then 
				--	print (iv.id,sym[jv],kv.id,"=",t.id) 
						local check = 0

						--avoid nottypes
						for n, nv in ipairs(nottype) do							
							if nv.id == iv.id or nv.id == kv.id
							then check = 1 end
						end
						
						--avoid gp and op already listed
						for n, nv in ipairs(out) do
							if nv[3] == "gp" or nv[3] =="op" then
								if nv[1].id == kv.id and nv[2].id == iv.id
								then check = 1 end
							end
						end
						
						if check == 0 then table.insert(out, {iv, kv, jv}) end
					end
				end
			end
		end
	end
	PrintType(stype)
	for i, iv in ipairs(out) do
		print (iv[1].id, sym[iv[3]], iv[2].id)--, sym(iv[3]), iv[2] )
	end
	return out
end

--given a type, look for a certain ratio that creates the type
FindRatio = function(stype)
	local out = {}
	for i, iv in ipairs(BasicStates) do
			local t = getTypeFromString( product(iv,iv,"gp").type, BasicStates)
			if t.id == stype then table.insert(out, iv) end
	end
	for i, iv in ipairs(out) do
		print (iv.id)
	end
end

--find output of self multiplication (ratio)
FindProd = function(stype)
	local t = getTypeFromString( product(stype,stype,"gp").type, States)
	
	print( t)
	return t
end

--find meet construction of stype
FindMeet = function(stype)
	local out = {}
	local dual = getTypeFromString( product(stype,Pss,"gp").type, BasicStates)
	for i, iv in ipairs(BasicStates) do
		for k, kv in ipairs(BasicStates) do
			local t = getTypeFromString( product(iv,kv,"op").type, BasicStates)
			if t.id == dual.id then table.insert(out, {iv, kv} ) end
		end
	end
end

--print type
PrintType = function(stype)
	print (stype.id)
	for i, iv in ipairs(stype.bases) do print(iv.id) end
end

--Find the inner outer or geometric product of a and b, excluding nottypes
GenFinder = function(type1, type2, op)
	local t = getTypeFromString( product(type1,type2,op).type, States)
	return t
end

--Get Hermitian Table
HermitTable = function()
	for k, kv in ipairs(hermtypes) do
		for i, iv in ipairs(order) do
			print(kv, iv[kv].id, iv[kv].g, iv[kv].w)
		end
	end
end

for i, iv in ipairs(Round) do
--	GenFinder(Inf,iv,"ip")
end
for i, iv in ipairs(Flat) do
--	GenFinder(Inf,iv,"ip")
end
for i, iv in ipairs(Round) do
--	GenFinder(Inf,iv,"op")
end
for i, iv in ipairs(Flat) do
--	GenFinder(Inf,iv,"op")
end

Operations = function(x) 
	local t = {}
	local notme = {}
	for i, iv in ipairs(Affine) do
		table.insert(notme, iv)
	end
	table.insert(notme, x)
	table.insert(notme, Mtd)
	table.insert(notme, Sta)
	table.insert(notme, Hyp)
	t = FindAll(x,notme )

	--number of columns not exceed number of values in table t
	local col = 7
	if #t < col then col = #t end
	local param = "{"
	for i=1,col do param = param.."c" end
	param = param.."}"
	print (param)
	
	local out = "\n\\begin{tabular}"..param.."\n\\hline\n"
--	local out = "\\begin{tikzpicture}\n\\matrix[matrix of nodes]{\n"
--	out = out.."Operations that Construct a "..x.desc.."\\tabularnewline\n\\hline\n"
	fl = string.sub(x.desc,1,1)
	thing = ""
	if string.match("AEIOUaeiou",fl)
	then thing = "n "..x.desc else thing = " "..x.desc end
	
	out = out.."\\multicolumn{"..col.."}{c}{Operations that Construct a"..thing.."}\\tabularnewline\\hline\\tabularnewline\n"
	local tab = 1
	--images
	
	local tmpimg = ""
	local tmpdat = ""

	for i, iv in ipairs(t) do
		a = string.lower ( iv[1].id )
		b = string.lower ( iv[2].id )
		c = latexsym[ iv[3] ]
		d = sym[ iv[3] ]
		e = codesym[ iv[3] ]
		--inner

		pgf = "\\pgftext{"
		pa = "\\includegraphics[width=.5cm]{figures/elements/"..a.."}"
		pb = "\\includegraphics[width=.5cm]{figures/elements/"..b.."}"
		code = "\\texttt{"..iv[1].id.."} "..e.." \\texttt{"..iv[2].id.."}"
		
--		tmpimg = tmpimg..pgf..pa..c..pb.."}\n"
--		tmpdat = tmpdat..pgf..code.."}\n"
		tmpimg = tmpimg..pa..c..pb.."\n"
		tmpdat = tmpdat..code.."\n"

		--out = out..pa..c..pb.."\n"..code

		if tab < col then 
			tmpimg = tmpimg .."&"
			tmpdat = tmpdat.."&"
			--out = out .. "&"
			tab = tab + 1 
		else 
			--out = out.. "\\tabularnewline"
--			out = out ..tmpimg.."\\\\\n"..tmpdat.."\\\\\n"
			out = out ..tmpimg.."\\tabularnewline\n"..tmpdat.."\\tabularnewline \\tabularnewline\n"

--			out = out .. "\\\\"
			tab = 1 
			tmpimg = ""
			tmpdat = ""
		end
	end
	--last bit of text
--	out = out ..tmpimg.."\\\\\n"..tmpdat.."\\\\\n"
--	out = out .. "\\\\"	
--	out = out.."};\n\\end{tikzpicture}"
	if tmpimg ~= "" then
		out = out ..tmpimg.."\\tabularnewline\n"..tmpdat.."\\tabularnewline \\tabularnewline\n"
	end
	out = out .. "\\end{tabular}\\\\[1cm]\n"--\\[1cm]\n"
	return out
end

ListType = function(x,list)
	local found = 0
	for i, iv in ipairs (list) do
		if x.id == iv.id then found = 1 end
	end
	return found
end

GPOperations = function(x,op)
	local gx = "\\includegraphics[width=.3cm]{figures/elements/"
	local tx = string.lower(x.id)
	local graphic = gx..tx.."}"
	local name = "\\texttt{"..tx.."}"
	local out = ""
	for i, iv in ipairs(ConformalStates) do
		local t = GenFinder(x,iv,op)
		if ListType(t, ConformalStates) == 1 then
			local ttx = string.lower(t.id)
			graphic = graphic .. "&"..gx..ttx.."}"
			name = name .. "&\\texttt{"..ttx.."}"
		else
			graphic = graphic .. " & "
			name = name .. " & "
		end
	end
	graphic = graphic .. "\\tabularnewline"
	name = name .. "\\tabularnewline"
	out = graphic--..name
	return out
end

teststates = {}
for i, iv in ipairs(Round) do
table.insert(teststates,iv)
end
for i, iv in ipairs(Flat) do
table.insert(teststates,iv)
end
for i, iv in ipairs(Free) do
table.insert(teststates,iv)
end
for i, iv in ipairs(Tangent) do
table.insert(teststates,iv)
end

MakeOpTables = function()
	homedir = os.getenv("HOME")
	io.output(io.open(homedir.."/xcode/versor/trunk/text/figures/appendix_operations_00.tex", "w"))
	io.write("\\begin{center}")
	for i,iv in ipairs(ConformalStates) do
	if(iv.id ~= "Sca") then io.write(Operations(iv)) end
	end
	io.write("\\end{center}")
	io.close()
end

MakeGPTable = function()
	homedir = os.getenv("HOME")
	io.output(io.open(homedir.."/xcode/versor/trunk/text/figures/appendix_ip_operations_00.tex", "w"))
	io.write("\\begin{center}\n\\begin{table}\n\\begin{tabular}")
	col = #ConformalStates + 1
	local param = "{"
	for i=1,col do param = param.."c" end
	param = param.."}\n\\hline\n"
	io.write(param)
	
	local str = "$*$\n"
	local txt = ""
	for i,iv in ipairs(ConformalStates) do
		str = str.. "&\\includegraphics[width=.3cm]{figures/elements/"..string.lower(iv.id).."}\n"
		txt = txt.."&\\texttt{"..string.lower(iv.id).."}\n"
	end
	str = str.."\\tabularnewline"
	txt = txt.."\\tabularnewline"
	io.write(str)
	io.write(txt)
	
	for i,iv in ipairs(ConformalStates) do
		s = GPOperations(iv,"ip")
		io.write(s)
		print(s)
	end
	
	io.write("\\end{tabular}\n\\end{table}\n\\end{center}")	
	io.close()	
end


MakeElementsTable = function()
	--write destination
	homedir = os.getenv("HOME")
	io.output(io.open(homedir.."/xcode/versor/trunk/text/figures/castofchar.tex", "w"))
	--header
	io.write("\\begin{center}\n\\begin{table}\n\\begin{tabular}")
	col = 5
	local param = "{"
	for i=1,col do param = param.."c" end
	param = param.."}\n\\hline\n"
	io.write(param)	
	local str = ""
	local txt = ""
	local iter = 4
	for i,iv in ipairs(ConformalStates) do
		str = str.. "&\\includegraphics[width=.3cm]{figures/elements/"..string.lower(iv.id).."}\n"
		txt = txt.."&\\texttt{"..string.lower(iv.id).."}\n"
		if iter==0 then 
			str = str.."\\tabularnewline\n"
			txt = txt.."\\tabularnewline\n"
			io.write(str)
			io.write(txt)
			str = ""
			txt = ""
			iter = 5
		end
		iter = iter -1
	end
	
	--tail
	io.write("\\end{tabular}\n\\end{table}\n\\end{center}")	
	io.close()	
end




--MakeElementsTable()

--MakeGPTable()
--MakeOpTables()
--c = getTypeFromString("_e12noni_e13noni_e23noni_e123ni", States)
--print(c.id)
--PrintType(Hyp)
--PrintType( GenFinder(Par,Par,"gp") )
--FindAll(Cir,{})
--PrintType(Mtd)
--PrintType( GenFinder(Rot, Pnt_Pnt, "gp") )
--GenFinder(Dil_Mot,Rot,"gp")
--GenFinder(Rot_Cir,Mot,"gp")
--GenFinder(Biv, Vec, "gp")
--grade_print();

--PrintType(Dll)
--RatioFinder(Sph)
--RatioFinder(Par)
--MeetFinder(Par)
