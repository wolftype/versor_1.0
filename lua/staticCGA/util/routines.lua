--Table insertion
AddTab = function(x,y)
	for i, iv in ipairs(y) do
		table.insert(x,iv)	
	end
end

up = function(x)
	return string.upper(x)
end

lower = function(x)
	return string.lower(x)
end