# F Barao (Dep Fis / IST)
# 2018-19
# FÃ­sica Computacional
#
# Makefile explained with detailed comments
# ---------------------------------------------

CC := g++
CCFLAGS := -std=c++11
INC := -I src

ROOTINC = $(shell root-config --cflags)
ROOTLIB = $(shell root-config --libs)

# --- here I place all the directories, where source code can be separated by :

VPATH = src/:Series_Problemas/:

# --- list all my sources inside src/ directory and make list of objects
#     notes:
#     1. src/ dir must contain all my code that will be needed by my programs
#     2. identify every file by a name that will tell you the contents

SRC = $(notdir $(wildcard src/*.cpp))
OBJ = $(addprefix bin/, $(SRC:.cpp=.o))
HHH = $(wildcard src/*.h)


# --- now I want to make a target to make all objects
#     just do: make obj

obj: $(OBJ)

# --- other targets: organizing my code by problems
#     to produce executable of prob 28: make p28

p28: bin/pessoa.o bin/programa_28.exe

# --- now I need to make the rules to compile and link

bin/%.exe: bin/%.o $(OBJ)
	@echo "making executable $^... [$@]"
	$(CC) $(CCFLAGS)  -o $@ $< $(INC) $(OBJ) $(ROOTINC) $(ROOTLIB)

bin/%.o : %.cpp
	@echo "compiling $<... [$@]"
	$(CC) $(CCFLAGS) -c -o $@ $< $(INC) $(ROOTINC)

clean:
	rm -fv bin/*.o bin/*.exe

test:
	@echo "Test 1"
	@echo $(ROOTINC)
	@echo $(INC)
	@echo $(SRC)
	@echo $(OBJ)


#Target : dependencies
#Action
