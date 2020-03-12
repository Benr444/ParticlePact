# NOTES TO SELF #
# The g++ -Wall flag turns on extra warnings
# An "undefined reference to WinMain" means to define a main function

SHELL=cmd

# Any recipe which does not correspond to a file should be declared here. If it is not,
# Then when a file with that name is created, it will follow the normal recipe rules
# And only run conditionally even when explicitly called, which is not desirable 
# Note that since "all" will always have dependencies, its not really necessary to be here,
# but in the spirit of technicalities, I've done so
.PHONY: all directories clean

all: directories MyClass.exe

# Creates all the directories necessary for output
# The preceding @ symbol silences the recipe
directories:
	@if not exist bin (mkdir bin) 
	@if not exist obj (mkdir obj)

# Delete any outputs from the build pipeline
clean:
	del "bin\*" /q /s
	del "obj\*" /q /s

MyClass.exe: MyClassDriver.o MyClass.o
	g++ -Wall -o bin\MyClass.exe obj\MyClassDriver.o obj\MyClass.o

MyClass.o:
	g++ -Wall -E -P -o obj\MyClass.pp test\MyClass.cpp
	g++ -Wall -S -o obj\MyClass.asm test\MyClass.cpp
	g++ -Wall -c -o obj\MyClass.o test\MyClass.cpp

MyClassDriver.o:
	g++ -Wall -c test\MyClassDriver.cpp -o obj\MyClassDriver.o

LinkingTest.exe:
	g++ -Wall -c -o obj\LinkingTest.o test\LinkingTest.cpp
	g++ -Wall -o bin\LinkingTest.exe obj\LinkingTest.o