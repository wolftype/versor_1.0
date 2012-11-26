CSS: style0.css

Versor (libvsr) 
===
A C++ library for Conformal Geometric Algebra.  
---
###Currently tested on Linux and Mac OS X

Developer: Pablo Colapinto
wolftype@gmail.com

    As long as algebra and geometry have been separated, their progress have been slow and their uses limited; but when these two sciences have been united, they have lent each mutual forces, and have marched together towards perfection.  
	Joseph Louis Lagrange (1736–1813)


##CONTENTS: 
1. [INTRODUCTION](#introduction) 
2. [Built-in GUI](#builtingui)
2. [ELEMENTS AND OPERATORS](#elementsandoperators) 

To INSTALL please read the INSTALL file

INTRODUCTION
---

This package provides operations and draw routines for conformal geometric algebra, 
a revolutionizing spatial computing model. _VERSOR_ is designed to make graphical 
experimentation of conformal geometric algebra within a C++ environment easier. 
You can use this library to draw geometrical things, explore spherical and hyperbolic spaces, transformations, design robots, etc. 
I am using it for my PhD on bio-inspired engineering.  

I first developed "Versor" while reading "Geometric Algebra for Computer Science" by Leo Dorst, Daniel Fontijne, and Stephen Mann. 
It's a great book and if you're reading this you should read that.  

Built to aid in my modelling of organic forms, the original work was funded in large part by the Olivia Long Converse Fellowship for Botanic research, courtesy of the Graduate Division at the University of California in Santa Barbara.  
So this software is under a UC Regents General Public License.

See also [wolftype.com/versor](wolftype.com/versor) for a link to my master's thesis on CGA and version 1.0 of this implementation of it, and maybe take a look at wolftype channel on vimeo for a few quick demos on what kinds of animations this thing can quickly whip up.  The Doc folder has a doxygen which I periodically tidy up.  Lots of test files too.  Still need to streamline the make process, etc.

NOTE TO SPEED FREAKS: The makefile builds the STATIC version of this library, which gives up abstraction (no inherted generic Multivector class) in exchange for a 5x speed boost (and 10x decrease in file size).  It is a highly templatized and inlined extravaganza of function calls.  Additionally, there is a trade off I am working on (in a branch to this master called "building and MVBase class") where you have an MVBase class with which you can make arbitrary functions.  This requires a bunch of pointer being copied and has led to code bloat.  GA is a tricky world of unknown return types.  The C++11 standards should help (for instance, "auto" return types), but are not implemented here.   

A tutorial is in the works . . . but a basic intro follows  


One quick word: clifford algebras and the spatial relationships they embody can often feel abstract and daunting.  But it's a twisty, boosty ride, full of weird discoveries.  You're bound to make some, so have fun!

Built-in GUI
---
The TestExamples include bindings to the GLV framework, along with a GLVApp class, which has a GLVInterface class.
    
The interface has a built in gui, mouse info, and keyboard info stored.  
    
	static Cir cir;
	interface.touch(cir);
	DRAW(cir);
	
Putting the above code inside your application's `onDraw()` loop will enable you to click and modify geometric elements by hitting the "G", "R" and "S" keys.  Hit "Q" to deselect all elements.  

Hit "~" to toggle full screen.

Holding down the `SHIFT` key while navigating with the arrow buttons moves the camera around.
Holding down the `CONTROL` key navigates in the cameras Y direction
Holding down the `OPTION` key while navigating with the arrow buttons spins the model view around.

ELEMENTS AND OPERATORS
---

Operators act on the elements of the algebra.  The elements are geometric entities.  There are three overloaded binary operators: 

The Geometric Product:  

	*

The Outer Product:  

	^
	
The Inner Product:

	<=

There is also a commutator product (differential)

	%

And a few overloaded operations, including,

The Inverse:  

	!

The Reverse:  

	~
	
And finally, since I ran out of overloadable operators, some basic methods

	conjugation()  
	involution()  


`A * B` multiplies two elements together (and, in the case of A * !B finds ratios between elements)  
`A ^ B`   wedges two elements together ( builds up higher dimensional elements )  
`A <= B`  contracts A out of B ( returns the part of B least like A ).  Often times, A is infinity, written as Inf(1)   

To make the process of writing code faster and consistent, all elements of the algebra are 3 letters long. 
You also be able to use the longname.

[**EUCLIDEAN ELEMENTS**]				
  		|   				|  				|  
---   	|:-----------:		|---:			|  
`Sca`   | Scalar			| (A real number)|  
`Vec`   | Vector 			| (A Directed Magnitude, or 3D Vector, typical cartesian stuff) |  
`Biv`   | Bivector     		| (A Directed Area. Use them to make Rotors (aka Quaternions): Gen::Rot( Biv b ) )  
`Tri`   | Trivector    		| (A Directed Volume Element)  

[**ROUND ELEMENTS**]
`Pnt`   | Point            	| (Pnt a) (Pnt a = Vec(1,0,0).null() )   
`Par`   | Point Pair       	| (Pnt a ^ Pnt b)  
`Cir`   | Circle           	| (Pnt a ^ Pnt b ^ Pnt c)  
`Sph`   | Sphere           	| (Pnt a ^ Pnt b ^ Pnt c ^ Pnt d)  
`Dls`   | Dual Sphere      	| (same as a point, so: typedef Pnt Dls)  

**FLAT ELEMENTS**  
`Lin` -- Line             
`Dll` -- Dual Line  
`Pln` -- Plane  
`Dlp` -- Dual Plane  
`Flp` -- Flat Point

**ABSTRACT ELEMENTS**  
`Mnk` -- Minkowski Plane  
`Pss` -- Pseudoscalar (5D Tangent Space)  
`Inf` -- Infinity  

**VERSORS**  
`Rot` -- Rotor  
`Trs` -- Translator  
`Dil` -- Dilator  
`Mot` -- Motor  
`Trv` -- Transversor  

There are also built in macros, for instance  
`EP`  -- Imaginary Sphere At the Origin.   
`EM`  -- Sphere at the Origin.    

EP and EM can be invoked instead of Inf to work in non-Euclidean metrics ( Hyperbolic and Spherical, respectively)

Many Euclidean elements can be drawn by invoking Draw::Render(<element>).  Some can't (yet) either because it wasn't obvious
how to draw them (e.g the scalar) or because I just didn't figure out how to do it or because I forgot or was lazy.  If you
want something to be drawable, let me know and I'll add it in.  Or try adding it in yourself and send a pull request via github.

All elements can be dualized by invoking their `dual()` method  

All elements can be reflected over spinors with the `sp(<spinor>)` method  

All elements can be reflected over versors with the `re(<versor>)` method  

The versors are constructed by the geometric entities, typically by using the `Gen::` routines.  Operators can also be acted on by operators -- you can rotate a translation, or twist a boost.





