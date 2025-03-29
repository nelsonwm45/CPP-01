#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug(void)
{
	std::cout << BLUE << "DEBUG" << RESET << std::endl;
	std::cout << BLUE << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" 
		<< RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << GREEN << "INFO" << RESET << std::endl;
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!"
		<< RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "WARNING" << RESET << std::endl;
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working here since last month."
		<< RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "ERROR" << RESET << std::endl;
	std::cout << RED << "This is unacceptable! I want to speak to the manager now."
		<< RESET << std::endl;
}

void	Harl::transform_upper(std::string &level)
{
	for (size_t i = 0; i < level.length(); i++)
		level[i] = std::toupper((unsigned char)level[i]);
}

/*
	complaints[] is not a pointer
	the array contains [std::string]
	total_size = number of elements * size of one element

	since u wanna get how many element
	so 
	number of elements = total_size / size of one element
*/
int	Harl::get_index(std::string level)
{
	const std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	size = 0;

	size = sizeof(complaints) / sizeof(complaints[0]); // getting number of elements
	for (int i = 0; i < size ; i++)
	{
		if (level.compare(complaints[i]) == 0)
			return (i);
	}
	return (-1);
}

/*
	Define a pointer to a member function of MyClass
	void (MyClass::*funcPtr)();

	Assigning a function
	funcPtr = &MyClass::show;

	Call the member function using the pointer
	(obj.*funcPtr)();  // Syntax for calling a member function through a pointer
*/
void	Harl::complain(std::string level)
{
	void	(Harl::*fxptr)();
	int		index = 0 ;

	fxptr = 0;
	transform_upper(level);
	index = get_index(level);
	switch (index)
	{
		case 0:
			fxptr = &Harl::debug; // assigning a fxptr does not need bracket, debug() is calling it
			break;
		case 1:
			fxptr = &Harl::info;
			break;
		case 2:
			fxptr = &Harl::warning;
			break;
		case 3:
			fxptr = &Harl::error;
			break;
		default:
			std::cout << MAGENTA << "Invalid level" << RESET << std::endl;
			fxptr = 0;
			break;
	}
	if (fxptr)
		(this->*fxptr)(); // Since fxptr is a member function pointer, you need to call it using the this pointer.
}
