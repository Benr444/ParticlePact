# NOTES TO SELF #
# The g++ -Wall flag turns on extra warnings
# An "undefined reference to WinMain" means to define a main function

SHELL=cmd

all: LinkingTest.exe

MyClass.cpp:
	g++ -Wall -E test\MyClass.cpp -P -o bin\MyClass.pp
	g++ -Wall -S test\MyClass.cpp -o bin\MyClass.asm
	g++ -Wall -c test\MyClass.cpp -o bin\MyClass.o
	g++ -Wall test\MyClass.cpp -o bin\MyClass

OpenGLTest.cpp:
	g++ -Wall test\OpenGLTest.cpp -o bin\OpenGLTest -IC:\Windows\System32\opengl32.dll

LinkingTest.exe:
	echo "LinkingTest.exe target called"
	g++ -Wall test\LinkingTest.cpp -o bin\LinkingTest

clean:
	del "bin\*" /q /s