#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
// #include <iomanip>


# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define WHITE "\033[37m"
# define RESET "\033[0m"

class	Zombie
{
	private:
	std::string	name;

	public:

	Zombie(void);

	Zombie(std::string str);
	~Zombie(void);

	void	announce(void);
	
	// setter
	void	setZombieName(std::string name);

};

Zombie *zombieHorde(int N, std::string name);

#endif