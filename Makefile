title: 
	@echo
	@echo
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo versor: made by pablo colapinto at the university of california santa barbara 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo

help: title
	@echo make vsr ....................... builds the main vsr library and glv submodule with built-in graphics
	@echo make GFX=0 vsr ................. builds vsrs operations without graphics functionality
	@echo make examples/subfolder/xFilename.cpp ..... builds and runs xFilename.cpp
	@echo
	@echo email questions to wolftype@gmail.com or submit issues via github 
	@echo more info: versor.mat.ucsb.edu

#Target Nameâ‰
LIB_NAME = vsr
STRICT_WARNINGS = 0
include Makefile.common

#LINK TO GRAPHICS LIBRARIES FLAG (GLV, OpenGL, GLUT) 
# run make GFX=0 vsr to make versor without built-in graphics capabilities (just data and operations)
GFX = 1 

REDUCED_GFX = 0

INSTALL_PCH = 0

#Location of Git Repository Directory
BASE_DIR	= ../

#Locations of Source and Header Files
VSR_DIR		= vsr/
SRC_DIR		= src/
TST_DIR		= tests/
EX_DIR		= examples/

#Locations of Libaries
LIB_DIR		= $(BUILD_DIR)lib/
INC_DIR		= $(BUILD_DIR)include/
EXT_DIR		= externals/
BIN_DIR		= $(BUILD_DIR)bin/

#Warnings
CFLAGS += -Wno-deprecated

OBJS := vsr_mv.o vsr_frame.o vsr_file.o
OBJS_GL := vsr_camera.o vsr_interface.o  gl2ps.o #vsr_gl_shader.o   vsr_gl.o

HEAD = vsr.h
PCH_DIR = $(BUILD_DIR)pch/
PCH = $(addsuffix .gch, $(HEAD))

#Dependencies
DEPFLAGS = -MMD -MF $(basename $@).dep

#Link
LDFLAGS	+= -L$(LIB_DIR) 

LINK_LDFLAGS += -l$(LIB_NAME) 

#Graphics only added to LDFLAGS if GFX=1 - (default)

ifneq ($(GFX), 0)
 
	ifeq ($(PLATFORM), linux)
		LINK_LDFLAGS += -lGLV -lglut -lGLEW -lGLU -lGL
		LDFLAGS += -L/usr/lib/x86_64-linux-gnu/
	else ifeq ($(PLATFORM), macosx) 
		LINK_LDFLAGS += -lglv -framework OpenGL -framework GLUT  
	else ifeq ($(PLATFORM), windows)
		LINK_LDFLAGS += -lglv -lglew32 -lglu32 -lopengl32 -lglut32
	endif 

	ifeq ($(REDUCED_GFX), 1)
		CPPFLAGS += -D __REDUCED_GRAPHICS__
	endif  

	OBJS += $(OBJS_GL) 
endif  


#endif

VPATH = $(PCH_DIR):\
		$(SRC_DIR):\
		$(EXT_DIR): \
		$(EXT_DIR)gl2ps: \
		$(TST_DIR):\
		$(EX_DIR):\
		$(DEMO_DIR):\
		$(VSR_DIR):\
		$(VSR_DIR)Elements:\
		$(INC_DIR):\
		$(INC_DIR)Elements

IPATH = $(PCH_DIR) \
		$(VSR_DIR)Elements/\
		$(VSR_DIR) \
		$(INC_DIR) \
		$(INC_DIR)Elements/\
		$(EXT_DIR) \
		$(EXT_DIR)/gfx/\
		/usr/local/include/

HPATH = $(addprefix -I, $(IPATH))

CPPFLAGS	+= $(LINK_CPPFLAGS) 
LDFLAGS		+= $(LINK_LDFLAGS)

CFLAGS		:= $(CPPFLAGS) $(CFLAGS)
CXXFLAGS	:= $(CFLAGS) $(CXXFLAGS)


EXEC_TARGETS = tests/%.cpp examples/%.cpp
 


# Dummy target to force rebuilds
FORCE:

.PRECIOUS: $(EXEC_TARGETS) $(PCH_DIR)%.h.gch  
  

#COMPILATION of CPP to Object File
$(OBJ_DIR)%.o: %.cpp #$(addprefix $(PCH_DIR), $(PCH) ) %.h
	@echo %<
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo CXX compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CXX) $(CXXFLAGS) $(HPATH) -H -c $< -o $@ 

#COMPILATION of C to Object File
$(OBJ_DIR)%.o: %.c
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo CC compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CC) $(CFLAGS) $(HPATH) -c $< -o $@ 


$(PCH_DIR)%.h.gch: %.h
	@echo CXX precompiling $< to $@
	@echo This may take a little while but only needs to happen once
	$(CXX) $(CXXFLAGS) $(HPATH) -x c++-header -c $< -o $@

linkfile:
	@printf "%b\n" "CPPFLAGS +=$(LINK_CPPFLAGS)\r\nLDFLAGS +=$(LINK_LDFLAGS)" > Makefile.link

dir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(LIB_DIR)
	@mkdir -p $(PCH_DIR)
	@mkdir -p $(BIN_DIR)

clean: 
	@rm -r $(OBJ_DIR)
	@rm -r $(PCH_DIR)
	@rm -r $(LIB_DIR)
	@rm -r $(BIN_DIR)
	$(MAKE) --no-print-directory -C externals/GLV clean

glv: 
	@echo "glv"
	@echo "building external GUI library GLV . . . if there are errors, make sure you have entered:\n\n"
	@echo "git submodule init"
	@echo "git submodule update\n\n"
	$(MAKE) --no-print-directory -C externals/GLV install DESTDIR=../../$(BUILD_DIR)

vsr: title dir glv $(addprefix $(OBJ_DIR), $(OBJS))
	 $(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(OBJS))

$(EXEC_TARGETS): $(LIB_PATH) FORCE
	@echo Building $@ using $<
	@echo $(CXX) $(CXXFLAGS) $(HPATH) -H $@ -o $(BIN_DIR)$(*F) $(LDFLAGS)
#	$(CXX) $(CXXFLAGS) $(HPATH) -H $@ -o $(BIN_DIR)$(*F) $(LDFLAGS) -l$(LIB_NAME)
	$(CXX) $(CXXFLAGS) $(HPATH) -H $@ -o $(BIN_DIR)$(*F) $(LDFLAGS)
	@cd $(BIN_DIR) && ./$(*F)

test: vsr tests/test.cpp
testGL: vsr tests/testGL.cpp

install: FORCE vsr
	@echo installing vsr to $(DESTDIR)
	@$(INSTALL) -d $(DESTDIR)/lib
	@$(INSTALL) -d $(DESTDIR)/include/$(LIB_NAME)/Elements/
	@$(INSTALL) -m 644 $(LIB_PATH) $(DESTDIR)/lib
	@$(INSTALL) -m 644 $(VSR_DIR)*.h $(DESTDIR)/include/$(LIB_NAME)
	@$(INSTALL) -m 644 $(EXT_DIR)gl2ps/*.h $(DESTDIR)/include/$(LIB_NAME)
	@$(INSTALL) -m 644 $(VSR_DIR)Elements/*.h $(DESTDIR)/include/$(LIB_NAME)/Elements/
	@$(INSTALL) -d $(DESTDIR)/include/$(LIB_NAME)/pch/
ifeq ($(INSTALL_PCH),1)
	@echo installing precompiled header to $(DESTDIR)/include/$(LIB_NAME)/
	@$(INSTALL) -m 644 $(PCH_DIR)*.gch $(DESTDIR)/include/$(LIB_NAME)/
endif

