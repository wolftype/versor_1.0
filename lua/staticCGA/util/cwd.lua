path = arg[0]
local out = "/"
for k in path:gmatch("(%w+)/") do
	out = out .. k .. "/"
end
return out
