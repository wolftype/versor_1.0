--Table insertion
AddTab = function(x,y)
	for i, iv in ipairs(y) do
		table.insert(x,iv)	
	end
end

--Table Membership
Member = function(x,list)
	for _, v in ipairs(list) do
		if x.id == v.id then return true end
	end
	return nil
end

--string manipulation
up = function(x)
	return string.upper(x)
end

lower = function(x)
	return string.lower(x)
end