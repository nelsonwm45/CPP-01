#include "HumanB.hpp"
#include "Weapon.hpp"

/*
	"This->" is mostly used when you have a naming conflict between
	parameter and member variables, this will point to member variable !
*/
HumanB::HumanB() {};

HumanB::HumanB(std::string newName): name(newName) {};

HumanB::~HumanB() {};

void	HumanB::attack(void)
{
	if (this->weapon)
	{
		std::cout	<< this->name
					<< " attacks with their "
					<< this->weapon->getType()
					<< std::endl;
	}
	else
	{
		std::cout	<< this->name
					<< " attacks with fist!"
					<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
