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

all: directories LinkingTest.exe

# Creates all the directories necessary for output
# The preceding @ symbol silences the recipe
directories:
	@if not exist bin (mkdir bin)
	@if not exist obj (mkdir obj)

MyClass.cpp: directories
	g++ -Wall -E test\MyClass.cpp -P -o obj\MyClass.pp
	g++ -Wall -S test\MyClass.cpp -o obj\MyClass.asm
	g++ -Wall -c test\MyClass.cpp -o obj\MyClass.o
	g++ -Wall test\MyClass.cpp -o bin\MyClass

OpenGLTest.cpp:
	g++ -Wall test\OpenGLTest.cpp -o bin\OpenGLTest -IC:\Windows\System32\opengl32.dll

LinkingTest.exe:
	g++ -Wall test\LinkingTest.cpp -o bin\LinkingTest

clean:
	del "bin\*" /q /s