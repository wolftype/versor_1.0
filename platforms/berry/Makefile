#MAKEFILE TO CROSS COMPILE VERSOR TO RASPBERRY PI (only works on linux machine or VM)

EXEC_TARGETS = tests/%.cpp examples/%.cpp

CXX = arm-linux-gnueabihf-g++
AR = ar crs
CXXFLAGS = -D __raspberry__ -Iusr/include
LDFLAGS =  -Lusr/lib -lstdc++ -lm

#Library name
LIB_NAME = vsr
LIB_FILE = lib$(LIB_NAME).a

#Cross Build Directories Relative to this Makefile
BUILD_DIR 	= ../../crossbuild/
BIN_DIR		= $(BUILD_DIR)bin/
OBJ_DIR		= $(BUILD_DIR)obj/
LIB_DIR		= $(BUILD_DIR)lib/
PCH_DIR 	= $(BUILD_DIR)pch/

LIB_PATH = $(LIB_DIR)$(LIB_FILE)

HEAD = vsr.h
PCH = $(addsuffix .gch, $(HEAD))

#Locations of Source and Header Files Relative to this Makefile
INC_DIR		= ../../VSR/
SRC_DIR		= ../../src/

#SEARCH PATHS
INCLUDESEARCHPATH = $(PCH_DIR) \
					$(INC_DIR)Elements/\
					$(INC_DIR) \

IPATH = $(addprefix -I, $(INCLUDESEARCHPATH))

#FILE EXISTENCE SEARCH PATH
VPATH = $(PCH_DIR):\
		$(SRC_DIR):\
		$(INC_DIR):\
		$(INC_DIR)Elements

#Locations of External Libaries
EXT_DIR		= externals/

LDFLAGS := -L$(LIB_DIR) -l$(LIB_NAME) $(LDFLAGS)

#BARE BONES LIBRARY FILES (No Graphics)
OBJS := vsr_mv.o vsr_frame.o vsr_file.o

#BARE BONES LIBRARY FILES (With Graphics)
OBJS_GL := vsr_camera.o vsr_interface.o vsr_gl.o vsr_gl_shader.o


$(EXEC_TARGETS): $(LIB_PATH) FORCE
	@echo Cross-Compiling $@ using $<
	@echo $(CXX) $(CXXFLAGS) $(IPATH) -H $@ -o $(BIN_DIR)$(*F) $(LDFLAGS)
	$(CXX) $(CXXFLAGS) $(IPATH) -H $@ -o $(BIN_DIR)$(*F) $(LDFLAGS)
	@cd $(BIN_DIR) && scp $(*F) pi@192.168.0.2:/tmp

#TITLE
title: 
	@echo "versor geometric algebra for raspberry pi made by pablo colapinto"

#MAKE DIRECTORIES
dir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(LIB_DIR)
	@mkdir -p $(PCH_DIR)
	@mkdir -p $(BIN_DIR)	

#CLEAN DIRECTORIES	
clean: 
	@rm -r $(OBJ_DIR)
	@rm -r $(PCH_DIR)
	@rm -r $(LIB_DIR)
	@rm -r $(BIN_DIR)	

#COPY TO RASPBERRY PI
pie: vsr
	scp -r build/lib/ pi@192.168.0.2:/tmp
#	scp -r build/include/ pi@10.0.1.13:/tmp

#TEST WHOLE SHEBANG, BUILD LIBRARY THEN COMPILE AND RUN EXAMPLE
test: title dir $(addprefix $(OBJ_DIR), $(GLOBJ))
	$(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(GLOBJ))
	$(CXX) $(CXXFLAGS) $(IPATH) -H $@ -o $(BIN_DIR)$(*F) $(LDFLAGS)
	@cd $(BIN_DIR) && scp $(*F) pi@192.168.0.2:/tmp

# Dummy target to force rebuilds
FORCE:

.PRECIOUS: $(EXEC_TARGETS) $(PCH_DIR)%.h.gch

#PRECOMPILED HEADER
$(PCH_DIR)%.h.gch: %.h
	@echo CXX precompiling $< to $@
	$(CXX) $(CXXFLAGS) $(IPATH) -x c++-header -c $< -o $@

#COMPILATION of CPP File $< to Object File $@
$(OBJ_DIR)%.o: %.cpp $(addprefix $(PCH_DIR), $(PCH) ) %.h
	@echo 
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo CXX compiling $< to $@
	@echo /////////////////////////////////////////////////////////////////////////////
	@echo
	$(CXX) $(CXXFLAGS) $(IPATH) -H -c $< -o $@

vsr: title dir $(addprefix $(OBJ_DIR), $(OBJS))
	 $(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(OBJS))
