#include "Files.hpp"

/*
	Create a program that takes three parameters in the following order: a filename and
 		two strings, s1 and s2.

	It will open the file <filename> and copies its content into a new file
 		<filename>.replace, replacing every occurrence of s1 with s2.

	! SUBMIT ONLY NEEDED FILES, TEST FILES ARE NOT REQUIRED
*/

void	read_file_write_file(char **av)
{
	Files			File(av[1]);
	std::string		read_line;
	std::string		changed_line;

	File.setFind(av[2]);
	File.setReplace(av[3]);
	while(File.getFileline(read_line))
	{
		changed_line = File.find_and_replace(read_line);
		File.setOutfile(changed_line);
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << RED << "This program takes in 4 inputs: <Program> <Filename> <String 1> <String 2>" << RESET << std::endl;
		std::cout << BLUE << "Example of Correct Input: ./Sed_is_for_losers example.txt sun moon" << RESET << std::endl;
	}
	else
		read_file_write_file(av);	
	return(0);
}
