require "genlite"

local template = [[
MVBase MVBase::operator ^ (const MVBase& b){
	MVBase& a = *this;
	switch(a.idx){		
		$do_case_a[=[
			case $idx_a:
				switch(b.idx){
					$do_case_b[==[
					case $idx_b: return (*($LH*)(&a) ) ^ (*($RH*)(&b));					
					]==]
				}
		]=]
	}
}
]]

local code = cosmo.f(template){
	do_case_a = function()
		do_it = nil
		for i,iv in ipairs(OPTypes) do
			cosmo.yield{
				idx_a = iv.idx,
				do_case_b = function()
					for k, kv in ipairs (OPTypes) do
						if ( getProductType(iv,kv,"op").id ~= "Muv" ) then
							cosmo.yield{
								idx_b = kv.idx,
								LH = iv.id,
								RH = kv.id
							}
						end
					end
				end
			}
		end
	end
}

print (code)