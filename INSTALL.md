VERSOR COMPILATION and INSTALLATION Instructions
===

This Documents the use of Versor as a standalone software.

DOWNLOAD
---

For best results, cd into a common directory for all your code repositories -- 
For instance, assuming you have a directory called **`code`** with all your git repos:

	cd code
	git clone git://github.com/wolftype/vsr.git
	git clone git://github.com/AlloSphere-Research-Group/GLV.git

This grabs both Versor and GLV (a windowing and user-interface system)

INSTALL DEPENDENCIES
---
libvsr.a can built in isolation with no dependencies except the standard library.  

	make vsr GFX=0

Most likely, however, you will want to be able to draw the elements to screen.
  
To use the draw routines, requires OpenGL, Glu, Glut, and GLEW.  You likely already have these installed.
If not, see Getting GLU / GLUT / GLEW section below
  
To use the built-in interface, gui, mouse and keyboard, etc, requires an input control listener set-up.
Bindings exist to two cross-platform windowing systems, [GLV](mat.ucsb.edu/glv/) and [AlloCore](), both made by my colleagues in the MAT program.  

The easiest way to get started to is to use GLV.  GLV is great for quick and easy OpenGL-based interfaces.  If you have not done so already, grab it here: 

	cd code
	git clone git@github.com:AlloSphere-Research-Group/GLV.git
	
Once you have it, `cd` into `GLV` and make, then sudo make install
    
    cd GLV
    make
    sudo make install

BUILD
---
To build on mac osx or linux:

	make vsr

This builds the static library with full graphics support (using GLV).

	make examples/Knots.cpp

will build and run the Knots program

for a list of make options:

    make help

Feel free email me at wolftype@gmail.com with questions


Getting GLU / GLUT / GLEW UNIX / OSX:
---
###Linux (Ubuntu)

If you do not have glut and glew installed:

A) install glut:*
	sudo apt-get install freeglut3 freeglut3-dev

*note on newer versions of ubuntu (11.10 and greater) you may also have to do:
	sudo apt-get install binutils-gold

B) install glew:

On ubuntu, first do:

	sudo apt-get install libxmu-dev libxi-dev

Download tar or zip from http://glew.sourceforge.net/.  
cd into glew folder:

    cd glew
	sudo make install

or clone from current repos:

	git clone git://glew.git.sourceforge.net/gitroot/glew/glew
	cd glew
	make extensions
	sudo make install


Other Options
---
You might also build the older version in the Dynamic folder (which temporarily has a few more features, but only runs on mac os and is no longer supported.  It runs slower and you'll need to use the built in xcode project, and run "TestVsrGlv.app")
The Xcode project in OSX/vsr/ takes care of the multistage compilation process.
It creates and embeds a cga (conformal geometric algebra) framework for calculating multivectors into libvsr.a, a library that calls the functions in the cga framework and does other nifty things
(like helps with draw routines and helps with common operations).  Take a look at Op.h.
