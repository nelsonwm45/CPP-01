#include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"


/*
	Reference : Must be initialized at declaration
	- A reference is like an alias for an existing variable.
	- It does not create a new copy of str but instead refers directly to the same memory location.

	- stringPTR is a pointer to str.
	- A pointer is a variable that stores the memory address of another variable.
	- Unlike references, pointers can be reassigned to point to a different variable.

	Pointers (*) - Can Change the Memory Address
		A pointer stores a memory address and can be reassigned to point to different variables.

	References (&) - Cannot Change the Memory Address
		A reference is just another name (alias) for an existing variable. 
		It must be initialized when declared and cannot be changed later.

	If i use ptr, it means I can easily change the the memory address of a variable;
		for example, initially it points to var A, but then I reassign and change it so that it points to var 	B.
	But for reference, once declaration and initialise to store memory address of A;
		then it cannot be change to store other memory address.
*/
int main()
{
	// Declaration && Initialization
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	// Printing Memory Address
	std::cout << BLUE << "Memory Address of str variable: " << &str << std::endl;
	std::cout << BLUE << "Memory Address of stringPTR: " << stringPTR << std::endl;
	std::cout << BLUE << "Memory Address of stringREF: " << &stringREF << std::endl;

	// Printing Value
	std::cout << GREEN << "Value of str variable: " << str << std::endl;
	std::cout << GREEN << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << GREEN << "Value of stringREF: " << stringREF << std::endl;

	return (0);
}
