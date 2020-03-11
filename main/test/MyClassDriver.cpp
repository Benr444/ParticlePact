#include "MyClass.h"

#include <iostream>

int main()
{
	MyClass c;
	c.setA(3);
	c.getA();
	MyClass *d = new MyClass();
	std::string f = "aslkjsd";
	d->setB(f);
	d->getB();
	std::cout << d->getB() << std::endl;
}