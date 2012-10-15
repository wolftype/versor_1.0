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
# run make GFX=0 vsr to make versor without built-in graphics capabilities (just data and operations)
GFX = 1

#Location of Git Repository Directory
BASE_DIR	= ../../

#Locations of Source and Header Files
INC_DIR		= VSR/
SRC_DIR		= src/
TST_DIR		= tests/

#Locations of Libaries
LIB_DIR		= $(BUILD_DIR)lib/
EXT_DIR		= ../externals/
BIN_DIR		=$(BUILD_DIR)bin/

#Warnings
CFLAGS += -Wno-deprecated

OBJS := MV.o Frame.o 
OBJS_GL := Camera.o Interface.o vsr_gl.o gl2ps.o

HEAD = vsr.h
PCH_DIR = $(BUILD_DIR)pch/
PCH = $(addsuffix .gch, $(HEAD))

#Dependencies
DEPFLAGS = -MMD -MF $(basename $@).dep

#Link
LDFLAGS	+= -L$(LIB_DIR) 

#Graphics only added to LDFLAGS if GFX=1 - (default)

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
		$(SRC_DIR):\
		$(EXT_DIR)gl2ps: \
		$(TST_DIR):\
		$(INC_DIR):\
		$(INC_DIR)Elements

HPATH = -I$(PCH_DIR) \
		-I$(INC_DIR)Elements\
		-I$(INC_DIR) \
		-I$(EXT_DIR)gl2ps/ \
		-I/usr/local/include/

CPPFLAGS	+= $(LINK_CPPFLAGS) 
LDFLAGS		+= $(LINK_LDFLAGS)

CFLAGS		:= $(CPPFLAGS) $(CFLAGS)
CXXFLAGS	:= $(CFLAGS) $(CXXFLAGS)


EXEC_TARGETS = tests/%.cpp


# Dummy target to force rebuilds
FORCE:

.PRECIOUS: $(EXEC_TARGETS) $(PCH_DIR)%.h.gch


#COMPILATION of CPP (no linking) 
$(OBJ_DIR)%.o: %.cpp $(addprefix $(PCH_DIR), $(PCH) ) %.h
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CXX) $(CXXFLAGS) $(HPATH) -H -c $< -o $@ 

#COMPILATION of C (no linking)
$(OBJ_DIR)%.o: %.c
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CC) $(CFLAGS) $(HPATH) -c $< -o $@ 


$(PCH_DIR)%.h.gch: %.h
	@echo precompiling $< to $@
	$(CXX) $(CXXFLAGS) $(HPATH) -x c++-header -c $< -o $@

linkfile:
	@printf "%b\n" "CPPFLAGS +=$(LINK_CPPFLAGS)\r\nLDFLAGS +=$(LINK_LDFLAGS) -l$(LIB_NAME)" > Makefile.link

dir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(LIB_DIR)
	@mkdir -p $(PCH_DIR)
	@mkdir -p $(BIN_DIR)

clean: 
	@rm -r $(OBJ_DIR)
	@rm -r $(PCH_DIR)
	@rm -r $(LIB_DIR)

vsr: title dir $(addprefix $(OBJ_DIR), $(OBJS))
	 $(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(OBJS))


$(EXEC_TARGETS): $(LIB_PATH) FORCE
	$(CXX) $(CXXFLAGS) $(HPATH) $@ -o $(BIN_DIR)$(*F) $(LDFLAGS) -l$(LIB_NAME)
	@cd $(BIN_DIR) && ./$(*F)

#test: test.cpp vsr
#	$(CXX) $(CXXFLAGS) $(HPATH) $< -o $(BUILD_DIR)test $(LDFLAGS) -l$(LIB_NAME)

install: vsr
	@$(INSTALL) -d $(DESTDIR)/lib
	@$(INSTALL) -d $(DESTDIR)/include/$(LIB_NAME)/Elements/
	@$(INSTALL) -m 644 $(LIB_PATH) $(DESTDIR)/lib
	@$(INSTALL) -m 644 $(INC_DIR)*.h $(DESTDIR)/include/$(LIB_NAME)
	@$(INSTALL) -m 644 $(EXT_DIR)gl2ps/*.h $(DESTDIR)/include/$(LIB_NAME)
	@$(INSTALL) -m 644 $(INC_DIR)Elements/*.h $(DESTDIR)/include/$(LIB_NAME)/Elements/
	#ifneq ($(EXT_LIB_COPY_DIR), )
	#	@$(INSTALL) -m 644 $(EXT_LIB_COPY_DIR)/* $(DESTDIR)/lib
	#endif

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
