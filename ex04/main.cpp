#include "Files.hpp"

/*
	Create a program that takes three parameters in the following order: a filename and
 		two strings, s1 and s2.

	It will open the file <filename> and copies its content into a new file
 		<filename>.replace, replacing every occurrence of s1 with s2.
*/
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << RED << "This program takes in 4 inputs: <Program> <Filename> <String 1> <String 2>" << RESET << std::endl;
		std::cout << BLUE << "Example of Correct Input: ./Sed_is_for_losers example.txt sun moon" << RESET << std::endl;
	}
	else
	{
		
	}
}