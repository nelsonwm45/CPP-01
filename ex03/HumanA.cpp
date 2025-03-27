#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA() {};

/*
	Since pdf doesn't limit Human A, so pass by pointer is possible for HumanA
	- modify weapon(newWeapon) -> weapon(&newWeapon) ---- so that, the pointer hold memory address of newWeapon var
	- modify this->weapon.getType() to this->weapon->getType() ---- as it's pointer now, so use "->" instead of "."
*/

HumanA::HumanA(std::string newName, Weapon &newWeapon): name(newName), weapon(newWeapon) {};

HumanA::~HumanA() {};

void	HumanA::attack(void)
{
	std::cout	<< this->name
				<< " attacks with their "
				<< this->weapon.getType()
				<< std::endl;
}
