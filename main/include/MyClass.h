#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <string>

class MyClass
{
	public:
		MyClass();
		~MyClass();

		void setA(int);
		int getA() const;
		void setB(const std::string &);
		std::string getB() const;
	private:
		int a;
		std::string* b;
};

#endif