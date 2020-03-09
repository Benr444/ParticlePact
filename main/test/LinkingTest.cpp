#include <iostream>
#include "..\include\Vector2.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
	ParticlePact::Vector2 a(1.0, 2.0);
	ParticlePact::Vector2 b(4.3, 5.8);
	std::cout << (a + b) << std::endl;
    return 1;
}