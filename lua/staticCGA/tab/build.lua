-- BUILDS ALL TYPES AND SAVES TO TYPES.LUA 
-- START GENERATING WITH GENERATORS (BEST MODEL OF A CAT IS ANOTHER CAT . . . )

require "basictypes"

local cwd = dofile("../util/cwd.lua")
print(cwd)
filename = "types.lua"




local allTypes = {} 
local genTypes = {}
local finalTypes = {}

for i, iv in ipairs(generators) do
	calcKeys(iv)
	table.insert(allTypes,iv)
end
for i, iv in ipairs(basicTypes) do
	calcKeys(iv)
	table.insert(allTypes,iv)
end






local buildTypes = function(xlist, ylist, operation, switchName)

	local out = ""

	for i, iv in ipairs(xlist) do
		for j, jv in ipairs(ylist) do

				local t = product(iv, jv, operation)
				local ty = getTypeFromString(t.type, allTypes)

				local exists = 0
				for k, kv in pairs(allTypes) do	
									
					if ty.key == kv.key then
						exists = 1
						
						if switchName == 1 then 
							name = iv.id .. "_" .. jv.id
							for l, lv in ipairs(genTypes) do
								if lv.key == ty.key then 
									lv.id = name
								end
							end
						end
					end 
				end

			
				--If not Add New Type and Insert into Table of Generated Types and of All Types Dictionary
				if exists == 0 then
					idx = #allTypes+1
					idxgen = #genTypes+1
					name = iv.id .. "_"
					if operation ~= "gp" then name = name..operation.."_" end
					name = name .. jv.id 
					allTypes[idx] =  {id = name, desc = iv.desc.." "..jv.desc, bases = ty.bases, key = ty.key}
					genTypes[idxgen] = {id = name, desc = iv.desc.." "..jv.desc, bases = ty.bases, key = ty.key}
				end
		end
	end
	--return out
end


--[[			
				--Does Type Resemble a preexisting Type But differ only by a Single Basis?
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


--GENERATE GENTYPES LIST
--buildTypes( basicTypes, generators, "gp", 0)

buildTypes( basicTypes, basicTypes, "gp", 0)
buildTypes( basicTypes, genTypes, "gp", 0)

--buildTypes( basicTypes, generators, "gp", 0)


--buildIntermediateTypes(basicTypes, generators, "gp")

-- buildTypes( generators, basicTypes, "gp", 0)
--buildTypes( basicTypes, basicTypes, "gp", 0)
-- buildTypes( generators, genTypes,   "gp", 0)
-- -- buildTypes( genTypes, basicTypes,   "gp", 0) 
--buildTypes( basicTypes, basicTypes, "ip",0)
--buildTypes( basicTypes, basicTypes, "op",0)

for i, iv in ipairs(basicTypes) do
	table.insert(finalTypes, iv)
end

for i, iv in ipairs(generators) do
	table.insert(finalTypes, iv)
end

-- for i, iv in ipairs(genTypes) do
-- 	table.insert(finalTypes, iv)
-- end

--table.insert(finalTypes, Muv)


local finalOutput = function()

	local all = {}

	io.output(io.open(cwd..filename, "w"))

	io.write("\nrequire \"basis\"")
	io.write("\n--GENERATED PERMUTATIONS OF CL4,1 ON A NULL BASIS (Selected using a geometrical heuristic)")
	io.write("\n--total number of built types: ", #genTypes, "\n")
	io.write("\n--total number of all types: ", #finalTypes, "\n")

	for i, iv in ipairs(allTypes) do
		table.insert(all, string.format("%s = { id = \"%s\", desc = \"%s\", bases = {%s}, key = %d }", iv.id, iv.id, iv.desc, tableToString(iv.bases,", "), iv.key ) )
	end

	for i, iv in ipairs(all) do
		io.write(iv.."\n")
	end

	--objects
	io.write("States = {\n")
	for i, iv in ipairs(basicTypes) do
		io.write(iv.id..",\n")
	end
	io.write("}\n")

	io.write("\nPinors = {\n")	
	for i, iv in ipairs(pinors) do
		io.write(iv.id..",\n")
		print(iv.id)
	end
	io.write("}\n")

	io.write("\nVersors = {\n")	
	for i, iv in ipairs(generators) do
		io.write(iv.id..",\n")
		print(iv.id)
	end
	io.write("}\n")

	io.write("\nIntermediates = {\n")
	for i, iv in ipairs(genTypes) do
		io.write(iv.id..",\n")
	end
	io.write("}\n")

	io.write("\nAllStates = {\n")
	for i, iv in ipairs(allTypes) do
		io.write(iv.id..",\n")
	end
	io.write("}\n")
	
	io.write([[for i,iv in ipairs(AllStates) do
		iv.idx = i
		for k,kv in ipairs(AllStates) do
			if iv.id ~= kv.id then 
				if iv.key == kv.key then print("keys match!!", iv.id, kv.id) end
			end
		end
	end]])

	io.close()
end

finalOutput()
