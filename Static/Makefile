#VERSOR MAKEFILE
#RULE is What its making (target is referred to as "$@" ):  Dependencies are what it's made from (referrec to as "@<")
	#And Here is the Code for How to make it

#Locations of Source and Header Files
INC_DIR		= VSR/
SRC_DIR		= src/

#Locations of External Libaries
EXT_LIB_DIR	 = ../externals/

#lib dir etc . . .
PREFIX		= /usr/local/

#Target Type
BUILD_CONFIG = Release

#Target Name
LIB_NAME = vsr
LIB_EXT = a
LIB_FILE = lib$(LIB_NAME).$(LIB_EXT)

# Locations of built objects
BUILD_DIR	= build/
BIN_DIR		= $(BUILD_DIR)bin/
OBJ_DIR		= $(BUILD_DIR)obj/

CC = gcc


#architecture
CCFLAGS += -arch i386
#sdks
CCFLAGS += -isysroot /Developer/SDKs/MacOSX10.6.sdk -mmacosx-version-min=10.6
#Optimization
CCFLAGS += -O3 -fpeel-loops

#Link to system
LDFLAGS	+= -lm -lstdc++
#Dependencies
DEPFLAGS = -MMD -MF $(basename $@).dep

OBJS = MV.o Frame.o
		

%.o: %.cpp
	@echo cc $< to $@
	$(CC) -c $(CCFLAGS) $(OBJ_DIR)$@ $<

help: 
	@echo
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo versor: made by pablo colapinto at the university of california santa barbara 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	@echo make all
	@echo make vsr
	@echo make vsrGL

dir:
	mkdir -p $(BUILD_DIR)

	
clean: 
	rm -r $(BUILD_DIR)

	
vsr: dir $(OBJS)
	$(CC) $< -o $(BUILD_DIR)$(LIB_FILE)
	