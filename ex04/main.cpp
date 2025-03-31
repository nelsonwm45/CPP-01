#include "Files.hpp"

/*
example.txt
The sun sets over the horizon, painting the sky's sun in shades of red and orange. 
Birds chirp their final melodies before nightfall happening. sun
sun says the city lights begin to flicker, creating a dance of luminescence across the skyline. 
Children play in the park, their sun's laughter echoing in the cool evening air. 
The world's sun slows down as the day transitions into a peaceful night.
*/
/*
	Create a program that takes three parameters in the following order: a filename and
 		two strings, s1 and s2.

	It will open the file <filename> and copies its content into a new file
 		<filename>.replace, replacing every occurrence of s1 with s2.
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
