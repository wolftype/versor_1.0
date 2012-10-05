title: 
	@echo
	@echo
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo versor: made by pablo colapinto at the university of california santa barbara 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	

help: title
	@echo make vsr ................ builds the main vsr library with built-in graphics
	@echo make GFX=0 vsr .......... builds vsrs operations without graphics functionality
	@echo make test
	@echo
	@echo email questions to wolftype@gmail.com
	@echo

#Target Name
LIB_NAME = vsr
STRICT_WARNINGS = 0
include Makefile.common

#LINK TO GRAPHICS LIBRARIES FLAG (GLV, OpenGL, GLUT) 
# run make GFX=0 vsr to make versor without built-in graphics capabilities
GFX = 1

#Location of Git Repository Directory
BASE_DIR	= ../../

#Locations of Source and Header Files
INC_DIR		= VSR/
SRC_DIR		= src/
TST_DIR		= tests/

#subdir
CORE_DIR	= core/
GFX_DIR		= graphics/
UTIL_DIR	= util/

#Locations of External Libaries
LIB_DIR		= $(BUILD_DIR)lib/
EXT_DIR		= ../externals/

#lib dir etc . . .
#Stuff set in Makefile.common (here for debugging)
# PREFIX		= /usr/local/
# BUILD_CONFIG = Release
# BUILD_DIR	= build/
# BIN_DIR		= $(BUILD_DIR)bin/
# OBJ_DIR		= $(BUILD_DIR)obj/
# CC = gcc
# AR = ar rcs
#architecturem, sdks, optimization
# CCFLAGS += -arch x86_64
# CCFLAGS += -isysroot /Developer/SDKs/MacOSX10.6.sdk -mmacosx-version-min=10.6
# CCFLAGS += -O3 -fpeel-loops

#Warnings
CFLAGS += -Wno-deprecated

OBJS := MV.o Frame.o vsr_templates.o
OBJS_GL := Camera.o Interface.o vsr_gl.o gl2ps.o

# HEAD = 	MV.h Frame.h vsr_templates.h op.h Draw.h GLVInterfaceImpl.h \
# 		Sca.h Rot.h Mot.h Vec.h Cir.h Sph.h Biv.h Par.h Dll.h Dil.h Trs.h Trv.h

HEAD = vsr.h
		
PCH_DIR = $(BUILD_DIR)pch/
PCH = $(addsuffix .gch, $(HEAD))
# PCH_FILE = op.h.gch
#Dependencies
DEPFLAGS = -MMD -MF $(basename $@).dep

#Link
LDFLAGS	+= -L$(LIB_DIR) 
#Graphics (Only added to LDFLAGS if GFX=1)
LINK_LDFLAGS += -L$(BASE_DIR)GLV/build/lib/ 
ifeq ($(PLATFORM), linux)
	LINK_LDFLAGS += -lGLEW -lGLU -lGL -lglut -lGLV
else ifeq ($(PLATFORM), macosx)
	LINK_LDFLAGS += -framework OpenGL -framework GLUT -lglv 
else ifeq ($(PLATFORM), windows)
	LINK_LDFLAGS += -lglew32 -lglu32 -lopengl32 -lglut32
endif

ifeq ($(GFX),1)
	OBJS += $(OBJS_GL)
	LDFLAGS += $(LINK_LDFLAGS)
endif

VPATH = $(PCH_DIR):\
		$(SRC_DIR)core:\
		$(SRC_DIR)graphics:\
		$(EXT_DIR)gl2ps: \
		$(TST_DIR):\
		$(INC_DIR)codegen:\
		$(INC_DIR)codegen/products:\
		$(INC_DIR)core:\
		$(INC_DIR)graphics:\
		$(INC_DIR)util:

HPATH = -I$(PCH_DIR) \
		-I$(INC_DIR)core \
		-I$(INC_DIR)graphics \
		-I$(INC_DIR)codegen/products/ \
		-I$(INC_DIR)codegen \
		-I$(INC_DIR)util \
		-I$(BASE_DIR)GLV/GLV \
		-I$(EXT_DIR)gl2ps


CPPFLAGS	+= $(LINK_CPPFLAGS)
LDFLAGS		+= $(LINK_LDFLAGS)

CFLAGS		:= $(CPPFLAGS) $(CFLAGS)
CXXFLAGS	:= $(CFLAGS) $(CXXFLAGS)


#COMPILATION of CPP (no linking) 
$(OBJ_DIR)%.o: %.cpp $(addprefix $(PCH_DIR), $(PCH) ) %.h
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CC) $(CXXFLAGS) $(HPATH) -H -c $< -o $@ 

#COMPILATION of C (no linking)
$(OBJ_DIR)%.o: %.c
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CC) $(CFLAGS) $(HPATH) -c $< -o $@ 

#Precompiling Wildcard
.PRECIOUS: $(PCH_DIR)%.h.gch

$(PCH_DIR)%.h.gch: %.h
	@echo precompiling $< to $@
	$(CC) $(CXXFLAGS) $(HPATH) -H -x c++-header -c $< -o $@

#-x c++ -Winvalid-pch 

# pch: $(HEAD)
# 	@echo precompiling %<
# 	$(CC) $(CCFLAGS) $(HPATH) -x c++ -Winvalid-pch -c $< -o $@

dir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(LIB_DIR)
	@mkdir -p $(PCH_DIR)

clean: 
	@rm -r $(OBJ_DIR)
	@rm -r $(PCH_DIR)

vsr: title dir $(addprefix $(OBJ_DIR), $(OBJS))
	 $(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(OBJS))

testGL: testGL.cpp vsr
	$(CC) $(CXXFLAGS) $(HPATH) $(LDFLAGS) -H -l$(LIB_NAME) -o $(BUILD_DIR)test $<

test: test.cpp vsr
		$(CC) $(CXXFLAGS) $(HPATH) $(LDFLAGS) -H -l$(LIB_NAME) -o $(BUILD_DIR)test $<

	
