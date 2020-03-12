# =====
# NOTES TO SELF #
# The g++ -Wall flag turns on extra warnings
# An "undefined reference to WinMain" means to define a main function 
# =====

# Final target
EXE = MyClassDriver.exe

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

# Files in those directories
OBJ = $(OBJ_DIR)\MyClassDriver.o $(OBJ_DIR)\MyClass.o
SRC = $(SRC_DIR)\MyClass.cpp $(SRC_DIR)\MyClassDriver.cpp

# CPPFLAGS passed to every call of the compiler, by GNU Make's defaults. It stands for "C PreProcessor" flags
CPPFLAGS = -I$(INCLUDE_DIR)

# CFLAGS is passed to every call of the (compiler + assembler), by GNU Make's defaults
CFLAGS = -Wall

# LDFLAGS is passed toe very call of the linker, by GNU Make's defaults
# LDFLAGS =

# Compiler
CXX = g++

# ...
SHELL = cmd

# Any recipe which does not correspond to a file should be declared here. If it is not,
# Then when a file with that name is created, it will follow the normal recipe rules
# And only run conditionally even when explicitly called, which is not desirable 
# Note that since "all" will always have dependencies, its not really necessary to be here,
# but in the spirit of technicalities, I've done so
.PHONY: all directories clean

all: directories $(EXE)

# Creates all the directories necessary for output
# The preceding @ symbol silences the recipe
directories:
	@if not exist bin (mkdir bin) 
	@if not exist obj (mkdir obj)

# Delete any outputs from the build pipeline
clean:
	del "bin\*" /q /s
	del "obj\*" /q /s

# To make the exe, use the list of objs
# $@ = the name of the target
# $< = the name of the first prereq
# $^ = list of all prereqs
$(EXE): $(OBJ)
	$(CXX) -o $@ $^

# This is multi-target rule. It defines a bunch of targets at once. The real target name can be accessed
# using $@.
$(OBJ_DIR)\%.o: $(SRC_DIR)\%.cpp
	$(CXX) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<