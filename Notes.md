css: style0.css

VERSOR
===
   
Various Notes (in progress)
---

Points and Lines

`Point` is also `Pnt`  
`Line` is also `Lin`  
`DualLine` is also `Dll`  

	Pnt <= Dll returns the shared DualPlane.  	
		The dot() of the DualPlane is the squared distance betwen point and line.
	
	Pnt ^ Dll returns the Circle about the DualLine through the Point.  
		The Ro::size(Circle,false) returns the squared radius of the Circle.

