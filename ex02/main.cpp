#include <iostream>

int main()
{
	// Declaration
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF;

	// Initialization
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;

	// Printing Memory Address
	std::cout << BLUE << "Memory Address of str variable: " << &str << std::endl;
	std::cout << BLUE << "Memory Address of stringPTR: " << stringPTR << std::endl;
	std::cout << BLUE << "Memory Address of stringREF: " << &stringPTR << std::endl;

	// Printing Value
	std::cout << GREEN << "Value of str variable: " << str << std::endl;
	std::cout << GREEN << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << GREEN << "Value of stringREF: " << str << std::endl;

	return (0);
}