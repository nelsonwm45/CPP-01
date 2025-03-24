#include "Zombie.hpp"

// Default Constructor
Zombie::Zombie()
{
	std::cout	<< "Random zombie is spawned"
				<< std::endl;
};

// Constructor with string
Zombie::Zombie(std::string str)
	: name(str)
{
	std::cout << str
			  << " zombie is spawned"
			  << std::endl;
};

// Default Destructor
Zombie::~Zombie()
{
	std::cout << this->name
			  << " is Dead"
			  << std::endl;
};

void	Zombie::announce(void)
{
	std::cout << this->name
			  << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}
