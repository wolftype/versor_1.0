GCC = 0 
GFX = 0
ifeq ($(GCC),1)
   CXX = gcc -std=c++0x  
else
ifeq ($(CLANG_LOCAL),1)
CXX = usr/local/bin/clang++ -std=c++11 
else
CXX = /Users/wolftype/code/clangbuild2/Release+Asserts/bin/clang++ -std=c++11  
endif
CXX += -arch x86_64
endif  

CXX += -Ivsr/ -I../externals/GLV/ -I../externals/gfx/ -I/usr/include/ 
CXX += -O3 -fpeel-loops  -ftemplate-depth-1200 

AR 	= ar crs 

LDFLAGS = -Lbuild/lib/ -L../externals/GLV/build/lib/    

ifeq ($(GFX),1)
LDFLAGS += -lglv -framework OpenGL -framework GLUT 
endif
                           
LDFLAGS := $(LDFLAGS)  

SRC_DIR = src/
INCLUDE_DIR = include/
 
VPATH = $(SRC_DIR):\
		$(INCLUDE_DIR) 

EXEC = tests/%.cpp   

OBJ_DIR = build/obj/
LIB_DIR = build/lib/
BIN_DIR = build/bin/

LIB_NAME = vsr11
LIB_FILE = libvsr11.a  

$(OBJ_DIR)%.o: %.cpp  
	@echo compiling $@ using $< 
	$(CXX) -c $< -o $@ 

$(LIB_NAME): dir $(addprefix $(OBJ_DIR),$(OBJ)) 
	@echo archiving $@
	$(AR) $(LIB_DIR)$(LIB_FILE) $(addprefix $(OBJ_DIR), $(OBJ))

FORCE:

.PRECIOUS: $(EXEC)

$(EXEC): dir FORCE 
	@echo $(CXX) -o $(BIN_DIR)$(*F) $@ $(LDFLAGS)
	$(CXX) -o $(BIN_DIR)$(*F) $@ $(LDFLAGS) 
	./$(BIN_DIR)$(*F)    

dir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(LIB_DIR)
	@mkdir -p $(BIN_DIR)  

clean:
	@rm -r $(OBJ_DIR)
	@rm -r $(LIB_DIR)

