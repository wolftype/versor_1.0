--HEADERS AND FOOTERS

require "cosmo"


genMVHeader = function(tx)

	local template = [[
		#ifndef $guard
		#define $guard
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	]]
	local code = cosmo.f(template){
		guard = up(tx.id).."_H_INCLUDED"
	}
	return code
end

genMVFooter = function()
	local code = [[	
	} //vsr::
	#endif
	]]
	return code
end

genFooter = function()
	local code = [[	
	} //vsr::
	#endif
	]]
	return code
end

genHeader1 = function(tx)

	local template = [[
	#ifndef $guard
	#define $guard
	
	#include <string>

	]]
	local code = cosmo.f(template){
		guard = up(tx).."_H_INCLUDED"
	}
	return code
end

genHeader = function(tx)

	local template = [[
	#ifndef $guard
	#define $guard
	
	#include <string>
	
	namespace vsr{
	]]
	local code = cosmo.f(template){
		guard = up(tx).."_H_INCLUDED"
	}
	return code
end
