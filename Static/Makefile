#VERSOR MAKEFILE
#RULE is What its making (target is referred to as "$@" ):  Dependencies are what it's made from (referrec to as "@<")
	#And Here is the Code for How to make it

#Locations of Source and Header Files
INC_DIR		= VSR/
SRC_DIR		= src/
TST_DIR		= tests/

#subdir
CORE_DIR	= core/
GFX_DIR		= graphics/
UTIL_DIR	= util/


#Locations of External Libaries
EXT_LIB_DIR	 = ../externals/

#lib dir etc . . .
PREFIX		= /usr/local/

#Target Type
BUILD_CONFIG = Release

#Target Name
LIB_NAME = vsr
LIBGL_NAME = vsrGL
LIB_EXT = a
LIB_FILE = lib$(LIB_NAME).$(LIB_EXT)
LIBGL_FILE = lib$(LIBGL_NAME).$(LIB_EXT)

# Locations of built objects
BUILD_DIR	= build/
BIN_DIR		= $(BUILD_DIR)bin/
OBJ_DIR		= $(BUILD_DIR)obj/
LIB_DIR		= $(BUILD_DIR)lib/
EXT_DIR		= ../externals/

BASE_DIR	= ../../

CC = gcc
AR = ar rcs

#architecture
CCFLAGS += -arch x86_64
#sdks
CCFLAGS += -isysroot /Developer/SDKs/MacOSX10.6.sdk -mmacosx-version-min=10.6
#Optimization
CCFLAGS += -O3 -fpeel-loops
#Warnings
CCFLAGS += -Wno-deprecated

#Link to system
LDFLAGS	+= -lm -lstdc++ -L/usr/lib -L$(LIB_DIR) -L$(BASE_DIR)GLV/build/lib/
#Graphics
LINK_LDFLAGS += -framework OpenGL -framework GLUT -lvsr -lvsrGL -lglv

#Dependencies
DEPFLAGS = -MMD -MF $(basename $@).dep

OBJS := MV.o Frame.o vsr_templates.o
OBJS_GL := Camera.o Draw.o Interface.o vsr_gl.o gl2ps.o

VPATH = $(SRC_DIR)core:\
		$(SRC_DIR)graphics:\
		$(EXT_DIR)gl2ps: \
		$(TST_DIR):\
		$(INC_DIR)codegen:\
		$(INC_DIR)codegen/products:\
		$(INC_DIR)core:\
		$(INC_DIR)graphics:\
		$(INC_DIR)util:

HPATH = -I$(INC_DIR)core \
		-I$(INC_DIR)graphics \
		-I$(INC_DIR)codegen/products/ \
		-I$(INC_DIR)codegen \
		-I$(INC_DIR)util \
		-I$(BASE_DIR)GLV/GLV \
		-I$(EXT_DIR)gl2ps

#COMPILATION
$(OBJ_DIR)%.o: %.cpp
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CC) $(CCFLAGS) $(HPATH) -c $^ -o $@ 

$(OBJ_DIR)%.o: %.c
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CC) $(CCFLAGS) $(HPATH) -c $^ -o $@ 



title: 
	@echo
	@echo
	@echo
	@echo
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo versor: made by pablo colapinto at the university of california santa barbara 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	@echo
	@echo
	

help: title
	@echo
	@echo
	@echo make vsr compiles and links the main vsr library
	@echo make vsrGL compiles and links vsr plus draw routines and camera class
	@echo make test

dir:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(LIB_DIR)

	
clean: 
	rm -r $(BUILD_DIR)

	
vsr: title dir $(addprefix $(OBJ_DIR), $(OBJS))
	 $(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(OBJS))
	
vsrGL: vsr $(addprefix $(OBJ_DIR), $(OBJS_GL))
	$(AR) $(LIB_DIR)$(LIBGL_FILE) $(addprefix $(OBJ_DIR), $(OBJS_GL)) 

glv: 
	
test: testGL.cpp vsrGL
	$(CC) $(CCFLAGS) $(HPATH) $(LDFLAGS) $(LINK_LDFLAGS) -o $(BUILD_DIR)test $<

	