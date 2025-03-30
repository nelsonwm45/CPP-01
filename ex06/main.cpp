#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl newHarl;
	std::string	newComplaint;

	if (ac != 2)
	{
		std::cout << RED << "harlFilter takes in two parameter" << RESET << std::endl;
		std::cout << RED << "Example: ./harlFilter \"WARNING\"" << RESET << std::endl;
	}
	else
	{
		newComplaint = av[1];
		newHarl.complain(newComplaint);
	}
	return (0);
}
