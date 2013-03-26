package.path = "../?.lua;../vsrmodule/?.lua;".. package.path
local F = require "funcs"

print(arg[1])
local s =_G[arg[1]]
print(s.desc)
for i, iv in ipairs(s.bases) do
print ( iv.id )
end
