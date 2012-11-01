#Versor (libvsr) library for Conformal Geometric Algebra.  Currently tested on Linux and Mac OS X

Pablo Colapinto
wolftype@gmail.com

    "As long as algebra and geometry have been separated, their progress have been slow and their uses limited; but when these two sciences have been united, they have lent each mutual forces, and have marched together towards perfection."  Joseph Louis Lagrange (1736–1813)


---
# README CONTENTS: INTRODUCTION | ELEMENTS AND OPERATORS | COMPILATION | DEPENDENCIES
---


To INSTALL please read the INSTALL file



---
# 1. INTRODUCTION
---

Welcome to Versor!  This package provides operations and draw routines for conformal geometric algebra, a revolutionizing spatial computing model. VERSOR is designed to make graphical experimentation of conformal geometric algebra within a C++ environment easier.  It comes bundled with a GPL gui builder (mat.ucsb.edu/glv/) made by my colleagues in the MAT program.  You can use this library to draw geometrical things, explore spherical and hyperbolic spaces, transformations, design robots, etc.  I am using it for my PhD on bio-inspired engineering.

I first developed "Versor" while reading "Geometric Algebra for Computer Science" by Leo Dorst, Daniel Fontijne, and Stephen Mann.  It's a great book and if you're reading this you should read that.  

Built to aid in my modelling of biological forms, this work was funded in large part by the Olivia Long Converse Fellowship, from the Graduate Division at the University of California in Santa Barbara.  So this is under a UC Regents General Public License.

See also wolftype.com/versor for a link to my master's thesis on CGA and version 1.0 of this implementation of it, and maybe take a look at wolftype channel on vimeo for a few quick demos on what kinds of animations this thing can quickly whip up.  The Doc folder has a doxygen which I periodically tidy up.  Lots of test files too.  Still need to streamline the make process, etc.

NOTE TO SPEED FREAKS: The makefile builds the STATIC version of this library, which gives up abstraction (no inherted generic Multivector class) in exchange for a 5x speed boost (and 10x decrease in file size).  It is a highly templatized and inlined extravaganza of function calls.  Additionally, there is a trade off I am working on (in a branch to this master called "building and MVBase class") where you have an MVBase class with which you can make arbitrary functions.  This requires a bunch of pointer being copied and has led to code bloat.  GA is a tricky world of unknown return types.  The C++11 standards should help (for instance, "auto" return types), but are not implemented here.   

A tutorial is in the works . . . but a basic intro follows  


One quick word: clifford algebras and the spatial relationships they embody can often feel abstract and daunting.  But it's a twisty, boosty ride, full of weird discoveries.  You're bound to make some, so have fun!

---
# 2. GUI
---
The TestExamples include bindings to the GLV framework, along with a GLVApp class, which has a GLVInterface class.
    The interface has a built in gui, mouse info, and keyboard info stored.  
    
    Putting "app.interface.touch(<element>)" inside your draw loop will enable you to click and modify geometric elements by hitting the "G", "R" and "S" keys.  Hit "Q" to deselect all elements.  
    
    Hit "~" to toggle full screen.
    
    Holding down the "SHIFT" key while navigating with the arrow buttons moves the camera around.
    Holding down the "CONTROL" key navigates in the cameras Y direction
    Holding down the "OPTION" key while navigating with the arrow buttons spins the model view around.

---
# 3. ELEMENTS AND OPERATIONS
---

There are three overloaded binary operators: 

*    The Geometric Product
^    The Outer Product
<=   The Inner Product

There is also % which is a commutator product (differential)

And a few overloaded operations:

!       Inverse
~       Reverse

And finally, since I ran out of overloadable operators, some basic methods

conjugation()
involution()


A * B   multiplies two elements together (and, in the case of A * !B finds ratios between elements)
A ^ B   wedges two elements together ( builds up higher dimensional elements )
A <= B  contracts A out of B ( returns the part of B least like A ).  Often times, A is infinity, written as Inf(1) 

Operators act on the elements of the algebra.  The elements are geometric entities.  To make the process of writing code faster and consistent, all elements of the algebra are 3 letters long. In an upcoming version, you'll also be able to use the longname.

"EUCLIDEAN ELEMENTS"
Sca -- Scalar       (A real number)
Vec -- Vector       (A Directed Magnitude, or 3D Vector, typical cartesian stuff)
Biv -- Bivector     (A Directed Area. Use them to make Rotors (aka Quaternions): Gen::Rot( Biv b ) )
Tri -- Trivector    (A Directed Volume Element)

"ROUND ELEMENTS"
Pnt -- Point            (Pnt a) (Pnt a = Vec(1,0,0).null() ) 
Par -- Point Pair       (Pnt a ^ Pnt b)
Cir -- Circle           (Pnt a ^ Pnt b ^ Pnt c)
Sph -- Sphere           (Pnt a ^ Pnt b ^ Pnt c ^ Pnt d)
Dls -- Dual Sphere      (same as a point, so: typedef Pnt Dls)

"FLAT ELEMENTS"
Lin -- Line             
Dll -- Dual Line
Pln -- Plane
Dlp -- Dual Plane

"ABSTRACT ELEMENTS"
Mnk -- Minkowski Plane
Pss -- PseudoScalar (5D)
Inf -- Infinity

"VERSORS"
Rot -- Rotor 
Trs -- Translator
Dil -- Dilator
Mot -- Motor
Trv -- Transversor

There are also built in macros, for instance
EP  -- Imaginary Sphere At the Origin. 
EM  -- Sphere at the Origin.  
INF -- Infinity

EP and EM can be invoked instead of INF to work in non-Euclidean metrics ( Hyperbolic and Spherical, respectively)

Many Euclidean elements can be drawn by invoking Draw::Render(<element>).  Some can't (yet) either because it wasn't obvious
how to draw them (e.g the scalar) or because I just didn't figure out how to do it or because I forgot.  If you
want something to be drawable, let me know and I'll add it in.

All elements can be dualized by invoking <element>.dual()

All elements can be reflected over spinors with the sp(<spinor>) method

All elements can be reflected over versors with the re(<versor>) method

The versors are constructed by the geometric entities, typically by using the Gen:: routines.  Operators can also be acted on by operators -- you can rotate a translation, or twist a boost.

---
# 4. COMPILATION
---

TO BUILD ON MAC OSX or LINUX: 

make test

This builds the static library and 

You can also build the older version in the Dynamic folder (which, for now has more features, but only runs on mac os and is no longer supported.  It runs slower and you'll need to use the built in xcode project, and run "TestVsrGlv.app")
	The Xcode project in OSX/vsr/ takes care of the multistage compilation process.
	It creates and embeds a cga (conformal geometric algebra) framework for calculating multivectors into libvsr.a, a library that calls the functions in the cga framework and does other nifty things
	(like helps with draw routines and helps with common operations).  Take a look at Op.h.

Feel free email me at wolftype@gmail.com with questions

---
# 5. DEPENDENCIES
---
libvsr.a can built in isolation with no dependencies except the standard library.  To use the draw routines, however, requires OpenGL, Glu, Glut, and GLEW (you likely already have these).  
To use the built-in interface, gui, mouse and keyboard, etc, requires GLV (Graphic Library of Views, Made by my colleagues at MAT program at UCSB) GLV is great for quick and easy OpenGL based 
interfaces.  Grab it here: 

git clone git@github.com:AlloSphere-Research-Group/GLV.git



