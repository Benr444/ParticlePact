SHELL=cmd

all: LinkingTest.exe

LinkingTest.exe:
	echo "LinkingTest.exe target called"
	md build
	gcc -Wall test\LinkingTest.cpp -o bin\LinkingTest

clean:
	del -q -s bin/*