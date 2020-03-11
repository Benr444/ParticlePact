#include "MyClass.h"

#include <iostream>

MyClass::MyClass() {}

MyClass::~MyClass() {}

void MyClass::setA(int newA)
{
	a = newA;
}

int MyClass::getA() const
{
	return a;
}

void MyClass::setB(const std::string& newB)
{
	*(this->b) = newB;
}

std::string MyClass::getB() const
{
	return *b;
}