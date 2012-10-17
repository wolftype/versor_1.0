local F = require "funcs"
print(arg[1])
local s =_G[arg[1]]

for i, iv in ipairs(s.bases) do
print ( iv.id )
end