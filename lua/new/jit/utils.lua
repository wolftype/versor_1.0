local rep = string.rep
local format = string.format

local function printt(t, name, lvl)
	name = name or "t"
	lvl = lvl or 0
	if(type(name) ~= "string") then
		name = format("[%s]", tostring(name))
	end
	print(format("%s%s = {", rep("  ", lvl), name))
	for k, v in pairs(t) do
		if(type(v) == "table") then
			printt(v, k, lvl+1)
		else
			if(type(k) ~= "string") then
				k = format("[%s]", tostring(k))
			end
			if(type(v) == "string") then
				v = format([["%s"]], v)
			end
			print(format("%s%s = %s,", rep("  ", lvl+1), k, tostring(v)))
		end
	end
	print(format("%s},", rep("  ", lvl)))
end

return {
	printt = printt
}