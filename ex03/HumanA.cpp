#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA() {};

HumanA::HumanA(std::string newName, Weapon &newWeapon): name(newName), weapon(newWeapon) {};

HumanA::~HumanA() {};

void	HumanA::attack(void)
{
	std::cout	<< this->name
				<< " attacks with their "
				<< this->weapon.getType()
				<< std::endl;
}
