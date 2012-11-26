CSS: style0.css
	 
<script type="text/javascript"
  src="https://c328740.ssl.cf1.rackcdn.com/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML">
</script>

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
2. [GUI](#gui)
2. [ELEMENTS](#elements) 

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

GUI
---
The TestExamples include bindings to the GLV framework, along with a GLVApp class, which has a GLVInterface class.
    
The interface has a built in gui, mouse info, and keyboard info stored.  
    
	static Circle circle;
	interface.touch(circle);
	DRAW(circle);
	
Putting the above code inside your application's `onDraw()` loop will enable you to click and modify geometric elements by hitting the "G", "R" and "S" keys.  Hit "Q" to deselect all elements.  

[**BUILT-IN INTERFACE**]
|		|		|
Key| Response
--- 	|---
`~` | Toggle full screen.
`SHIFT` + `Arrow Keys` | navigates the camera  in x and z directions.
`SHIFT`+`CONTROL`+`Arrow Keys` | navigates the camera in Y direction
`OPTION` `+`Arrow Keys` | spins the model view around.

ELEMENTS
---

The elements of the algebra are geometric entities (circles, planes, spheres, etc) and operators (rotations, translations, twists, etc) which 
act on the elements of the algebra.  All are known as _multivectors_ since they are more than just your typical vectors.

Multivector elements are most often combined using three overloaded binary operators: 

The **Geometric** Product of elements `A` and `B`:  

	A * B

multiplies two multivector elements together.  This is most useful when multiplying one by the inverse of another (see `!` operator, below).

The **Outer** Product of elements `A` and `B`:  

	A ^ B
	
"wedges" two multivectors together.  Its from Grassman's algebra of extensions, and can be thought of as a way of creating higher dimensions from smaller ones.
For instance, wedging two `Vectors` (directed magnitudes) together returns a `Bivector` (a directed Area).  Wedging two `Points` together returns a `PointPair`.
Wedging three `Points` together returns a `Circle`.

The **Inner** Product of elements `A` and `B`:

	A<=B


There is also a **Commutator** product (differential)

	A%B

And a few overloaded operations, including,

The Inverse:  

	!A

returns \\(A^{-1}\\)

The Reverse:  

	~
	
And finally, since I ran out of overloadable operators, some basic methods

	conjugation()  
	involution()  

In summary:  

`A * B` multiplies two elements together (and, in the case of A * !B finds ratios between elements)  
`A ^ B`   wedges two elements together ( builds up higher dimensional elements )  
`A <= B`  contracts A out of B ( returns the part of B least like A ).  Often times, A is infinity, written as Inf(1)   

To make the process of writing code faster, all elements of the algebra are represented by types 3 letters long. 
Alternatively, you can also use the long-form name.

[**BASIC ELEMENTS**]				  
Type  | 			     |                                                             |  
----- | ---------------- | :---------------------------------------------------------: |  
_Euclidean_             ||  
`Sca` | `Scalar`         |                         A real number  
`Vec` | `Vector`         |  A Directed Magnitude, or 3D Vector, typical cartesian stuff  
`Biv` | `Bivector`       | A Directed Area. Use them to make Rotors: `Gen::Rot( Biv b )`  
`Tri` | `Trivector`      |                   A Directed Volume Element  

_Round_                 ||  
`Pnt` | `Point`          |           A Null Vector: `Pnt a = Vec(1,0,0).null()`  
`Par` | `PointPair`      |    A 0-Sphere (Sphere on a Line): `Par par = Pnt a ^ Pnt b`  
`Cir` | `Circle`         |         A 1-Sphere: `Cir cir = Pnt a ^ Pnt b ^ Pnt c`  
`Sph` | `Sphere`         |     A 2-Sphere: `Sph sph = Pnt a ^ Pnt b ^ Pnt c ^ Pnt d`  
`Dls` | `DualSphere`     |            Typedef'ed as a point: `typedef Pnt Dls`  

_Flat_                  ||  
`Lin` | `Line`           |        A Direct Line: e.g. `Lin lin = Par par ^ Inf(1)`  
`Dll` | `DualLine`       |            A Dual Line: e.g. `Dll dll = lin.dual()`  
`Pln` | `Plane`          |       A Direct Plane: e.g. `Pln pln = Cir cir ^ Inf(1)`  
`Dlp` | `DualPlane`      |                A Dual Plane: e.g. `Dlp dlp = `  
`Flp` | `FlatPoint`      |  

_Versors_               ||  
`Rot` | `Rotor`          |            Spins an Element (as a Quaternion would)  
`Trs` | `Translator`     |                     Translates an Element  
`Dil` | `Dilator`        |                       Dilates an Element  
`Mot` | `Motor`          |                Twists an Element along an axis  
`Trv` | `Transversor`    |                        Bends an element  
`Bst` | `Booster`        |                        Bends an Element  

_Abstract_              ||  
`Mnk` | `MinkowskiPlane` |  
`Pss` | `Pseudoscalar`   |  
`Inf` | `Infinity`       |  
 

There are others as well (for instance, affine planes, lines, and points) but the above are more than sufficient to start with. 
There are also built in macros, for instance  

`EP`  			| Imaginary Sphere At the Origin.   
`EM`  			| Sphere at the Origin.    
`PT(x,y,z)`  	| A null Point at x,y,z

`EP` and `EM` can be invoked instead of `Inf` to work in non-Euclidean metrics ( Hyperbolic and Spherical, respectively)

Many Euclidean elements can be drawn by invoking Draw::Render(<element>).  Some can't (yet) either because it wasn't obvious
how to draw them (e.g the scalar) or because I just didn't figure out how to do it or because I forgot or was lazy.  If you
want something to be drawable, let me know and I'll add it in.  Or try adding it in yourself and send a pull request via github.

All elements can be dualized by invoking their `dual()` method  

All elements can be reflected over spinors with the `sp(<spinor>)` method  

All elements can be reflected over versors with the `re(<versor>)` method  

The versors are constructed by the geometric entities, typically by using the `Gen::` routines.  Operators can also be acted on by operators -- you can rotate a translation, or twist a boost.





