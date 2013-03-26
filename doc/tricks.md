Odd and Ends:
===

REFLECTIONS
---
Most reflections (in a sphere, circle, or point pair, or over a line or plane ) can be calculated by writing

	Pnt p = PT(1,0,0);
	Pnt r = p.re( CXY(1) ); //Reflection of a point in a circle
	r = r / r[3]; 			//Renormalization of a point
	
The re() method calculates `v.re(C)` as `C*v.involution()*~C`.  With a versor `C` and an element `v` you might also try `C * v * !C`.  Inversion in a circle or a sphere may change the 
weight of the element (for at Point at x, by x^2)

SPECIFY DOUBLES WITH `.` 
---

Heavy templating means that some functions may seem "undefined":

e.g. use `Gen::trs(0.0,-1.0,0.0)` not `Gen::trs(0,-1.0, 0)` or gcc may complain about the mixing integers and doubles. 

