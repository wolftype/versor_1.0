require "basis"
require "types"
require "funcs"

local P = {}   -- package

if _REQUIREDNAME == nil then
  conga = P
else
  _G[_REQUIREDNAME] = P
end

--set package (table) as new environment
setmetatable(P, {__index = _G})
setfenv(1, P)
