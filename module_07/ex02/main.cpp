#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> a(5);
	Array<int> b(5);
	Array<int> c(5);
	Array<std::string> strArray(3);
	strArray[0] = "Hello";
	strArray[1] = "World";
	strArray[2] = "!";

	for (unsigned int i = 0; i < a.size(); i++)
	{
		a[i] = i;
		b[i] = i * 2;
		c[i] = i * 3;
	}

	std::cout << "a: ";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "c: ";
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	Array<int> d(a);

	std::cout << "d: ";
	for (unsigned int i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

	Array<int> e = c;

	std::cout << "e: ";
	for (unsigned int i = 0; i < e.size(); i++)
		std::cout << e[i] << " ";
	std::cout << std::endl;

	std::cout << "Complex type: ";
	for (unsigned int i = 0; i < strArray.size(); i++){
		std::cout << strArray[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Trying to search in an index out of range" << std::endl;
	try
	{
		std::cout << "a[5]: " << a[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
