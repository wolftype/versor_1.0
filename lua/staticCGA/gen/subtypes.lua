-- COMBINE HEURISTIC INTELLIENTLY HERE --
-- START GENERATING NECESSARY GENERATORS (BEST MODEL OF A CAT IS ANOTHER CAT . . . )
-- DSP OF SIMILARITIES !
--[[			
				--i.e. Does Type Resemble a preexisting Type But differ only by a Single Basis?
				for k, kv in pairs(allTypes) do
					if ty.key > kv.key then
						newkey = ty.key - kv.key
						for l, lv in ipairs(order) do
							if newkey == lv.key then 
								print("add "..lv.id .. " to "..kv.id.." to make "..ty.id)
							end
						end
					end
				end
]]				

require "basis"
require "funcs"
require "org"
require "basictypes"

--OUTPUT DIRECTORY
homedir = os.getenv("HOME")
filename = "testsubtypes.lua"
io.output(io.open(homedir.."/xcode/versor/trunk/lua/staticCGA/"..filename, "w"))


--Types to compare to (Test Existence with)
local allTypes = {} 

--Generated types
local genTypes = {}

--Final output (total)
local finalTypes = {}

-- Add into Preliminary list
local prepTable = function(t)
	for i, iv in ipairs(t) do
		table.insert(allTypes,iv)
	end
end

prepTable(generators)
prepTable(basicTypes)

local tout = "local builtTypes = {\n"

local buildTypes = function(xlist, ylist, tolist, operation, switchName)
	local out = ""
	local scrap = ""
	for i, iv in ipairs(xlist) do
		for j, jv in ipairs(ylist) do

				local t = product(iv, jv, operation)
				ty = getTypeFromString(t.type, allTypes)

				--Does Type already exist?
				local exists = 0
				for k, kv in pairs(allTypes) do					
					if ty.key == kv.key then
						name = iv.id .. "_" .. jv.id
						scrap = scrap .. ( string.format("--%s ALREADY EXISTS AS BASIC TYPE %s:\n", name, kv.id) )
						exists = 1
						
						if switchName == 1 then 
							--kv.id = name
							for l, lv in ipairs(tolist) do
								if lv.key == ty.key then 
									scrap = scrap .. string.format("switching name to %s \n", name ) 
									lv.id = name
								end
							end
						end
					end 
				end

			
				--If not Add New Type and Insert into Table of Generated Types and of All Types Dictionary
				if exists == 0 then
					idx = #allTypes+1
					idxgen = #tolist+1
					name = iv.id .. "_"
					if operation ~= "gp" then name = name..operation.."_" end
					name = name .. jv.id 
					tout = tout .. name .. "\n"
					allTypes[idx] =  {id = name, desc = name, bases = ty.bases, key = ty.key}
					tolist[idxgen] = {id = name, desc = name, bases = ty.bases, key = ty.key}
					--out = out .. string.format("%s = { id = \"%s\", bases = {%s}, key = %d }\n", name, name, tableToString(ty.bases,", "), genTypes[idxgen].key )
				end
		end
	end
	--return out
end

--basic types to lua file
--[[
for i, iv in ipairs(allTypes) do
	io.write(string.format("%s = { id = \"%s\", bases = {%s}, key = %d }\n", iv.id, iv.id, tableToString(iv.bases,", "), iv.key ))
end
--builds 7 more types (total 32 types):
io.write( buildTypes( generators, generators, "gp", 0) )
--builds 77 types total:
io.write( buildTypes( generators, basicTypes, "gp",  0) )
--builds 89 types total
io.write( buildTypes( basicTypes, basicTypes, "gp",0) )
--Basic GP ring is now closed WITH 89 TYPES ?

io.write( buildTypes( generators, genTypes,   "gp",  0) )
io.write( buildTypes( genTypes, basicTypes,   "gp",  0) )
--io.write( buildTypes( genTypes, genTypes,   "gp",  0) )

--first order inner: 125 Types Total
io.write( buildTypes(basicTypes, basicTypes, "ip",0) )
--first order outer: 130 Types Total
io.write( buildTypes(basicTypes, basicTypes, "op",0) )

tout = tout .. "}"
io.write(tout)

]]


--GENERATE GENTYPES LIST (USE ROUNDS AND FLATS HERE TO GENERATE SMALLER ATTEMPTS)
--[[
buildTypes( generators, generators, "gp", 0) 
buildTypes( generators, basicTypes, "gp", 0)
buildTypes( basicTypes, basicTypes, "gp", 0)
buildTypes( generators, genTypes,   "gp", 0)
buildTypes( genTypes, basicTypes,   "gp", 0) 
buildTypes( basicTypes, basicTypes, "ip",0)
buildTypes( basicTypes, basicTypes, "op",0)
--]]

--determine where to save . . .
--BUILD NINE NEW CONCAT GENERATORS (TOTAL OF 15 GENERATORS)
--[[
buildTypes( generators, generators, generators, "gp",0)
buildTypes( generators, generators, generators, "gp",0)
buildTypes( generators, Versor, generators, "gp",0)
--]]

--[[
local RoundTypes = {}
buildTypes( Round, generators, RoundTypes, "gp",0)
buildTypes( Round, RoundTypes, RoundTypes, "gp",0)

local FlatTypes = {}
buildTypes( Flat, generators, FlatTypes, "gp",0)
buildTypes( Flat, RoundTypes, FlatTypes, "gp",0)

local TangentTypes = {}
buildTypes( Tangent, generators, TangentTypes, "gp",0)
buildTypes( Tangent, RoundTypes, TangentTypes, "gp",0)

local FreeTypes = {}
buildTypes( Free, generators, FreeTypes, "gp",0)
buildTypes( Free, RoundTypes, FreeTypes, "gp",0)
--]]

---[[
local btypes={}
--buildTypes( Versors, basicTypes, btypes, "gp",0)
--buildTypes( basicTypes, btypes, btypes, "gp",0)
buildTypes( Single, basicTypes, btypes, "gp",0)
buildTypes( basicTypes, basicTypes, btypes, "ip",0)
buildTypes( basicTypes, basicTypes, btypes, "op",0)
--]]

--store results to finaltypes
local storeResults = function()
	for i, iv in ipairs(basicTypes) do
		table.insert(finalTypes, iv)
	end

	for i, iv in ipairs(generators) do
		table.insert(finalTypes, iv)
	end

	for i, iv in ipairs(genTypes) do
		table.insert(finalTypes, iv)
	end
	table.insert(finalTypes, Muv)	
end


--PRINT OUTPUT
local printgen = function(tx)
	storeResults()
--	print("gen num: ", #genTypes)
	print("total num: ", #tx)
	for i, iv in ipairs(tx) do
		print(iv.id, "\t",#iv.bases)
	end
end

printgen(btypes)

--WRITE OUTPUT TO FILE
local output = function()
	io.write("\n--GENERATED PERMUTATIONS OF CL4,1 ON A NULL BASIS (Selected using a geometrical heuristic)")
	io.write("\n--total number of built types: ", #genTypes, "\n")
	io.write("\n--total number of all types: ", #finalTypes, "\n")

	local testout = function()
		for i, iv in ipairs(finalTypes) do
			for j, jv in ipairs(iv.bases) do
				if jv.id == "_e123no" then 
					print(iv.id, " ", #iv.bases)
					for j, jv in ipairs(iv.bases) do
						print(jv.id)
					end
				end
			end
		end
	end

	local finalOutput = function()
		for i, iv in ipairs(finalTypes) do
			io.write(string.format("%s = { id = \"%s\", desc = \"%s\", bases = {%s}, key = %d }\n", iv.id, iv.id, iv.desc, tableToString(iv.bases,", "), iv.key ) )
		end
		io.write("\nStates = {\n")
		for i, iv in ipairs(finalTypes) do
			io.write(iv.id..",\n")
			print(iv.id)
		end
		io.write("}\nBasicStates = {\n")
		for i, iv in ipairs(basicTypes) do
			io.write(iv.id..",\n")
		end
		for i, iv in ipairs(generators) do
			io.write(iv.id..",\n")
		end
		io.write("}")
	end

	finalOutput()
	io.close()
end