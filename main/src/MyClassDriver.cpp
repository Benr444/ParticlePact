#include <iostream>

#include <MyClass.h>

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