#include "Zombie.hpp"

/*
	This project mainly to learn about new && delete

	new - allocate a HEAP memory for the object/variable and return pointer of it
	delete - free the allocated memory
	new class[x] - allocate an array
	delete [] - free the allocated array

	memory allocated by new MUST be HEAP

	std::getline
	- read from std::cin (current cursor position) ---> means it will rmb where it stops
	- read input till it encounters "\n"
	- discard "\n"

	Another possible
	std::string	numZombie;
	std::getline(std::cin, numZombie);

	Horde = zombieHorde(atoi(numZombie.c_str()), name);
*/
int	main()
{
	Zombie	*Horde;
	int			numZombie;
	std::string	name;
	

	std::cout << BLUE << "Enter Zombie Number: " << RESET;
	std::cin >> numZombie;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << YELLOW << "Your Zombie Name will be all the same" << RESET << std::endl;
	std::cout << BLUE << "Your Zombie Name: " << RESET;
	std::getline(std::cin, name);
	Horde = zombieHorde(numZombie, name);
	delete[] Horde;
	return (0);
}
