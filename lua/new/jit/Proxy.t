local utils = require"utils"
local printt = utils.printt
local space = terralib.require"space"

local M = {}
M.__index = function(t, k)
	if(not rawget(M, k)) then
		return t.mv[k]
	else
		return rawget(M, k)
	end
end
setmetatable(M, {
	__call = function(_, mv)
		return setmetatable({ mv=mv }, M)
	end
})

function M:cast(type)
	local entries = self:entries()
	local map = {}
	for i=1, #entries do
		map[entries[i].field] = true
	end
	
	local args = {}
	for i=1, #type.entries do
		local f = type.entries[i].field
		args[i] = map[f] and self.mv[f] or 0
	end
	return type(unpack(args))
end

function M:type()
	return terralib.typeof(self.mv)
end

function M:entries()
	return self:type().entries
end

function M:unpack()
	local entries = self:entries()
	local t = {}
	for i=1, #entries do
		t[i] = self.mv[ entries[i].field ]
	end
	return unpack(t)
end

M.__tostring = function(a)
	return "Proxy: "..tostring(a.mv)
end

M.__unm = function(a)
	return M(space.gp(a.mv, s(-1).mv))
end

M.__mul = function(a, b)
	return M(space.gp(a.mv, b.mv))
end

M.__div = function(a, b)
	return M(space.div(a.mv, b.mv))
end

M.__pow = function(a, b)
	return M(space.op(a.mv, b.mv))
end

M.ip = function(a, b)
	return M(space.ip(a.mv, b.mv))
end

function M:reverse()
	return M(space.reverse(self.mv))
end

function M:conjugate()
	return M(space.conjugate(self.mv))
end

function M:involute()
	return M(space.involute(self.mv))
end

function M:inverse()
	return M(space.inverse(self.mv))
end

--[[
M.sp = function(a, b)
	local v = a*b/a
	local entries = b:entries()
	local t = {}
	for i=1, #entries do
		t[i] = v[entries[i].field]
	end
	return b:type()(unpack(t))
end
--]]
return M