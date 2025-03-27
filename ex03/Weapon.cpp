#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// Weapon::Weapon() {};

Weapon::Weapon(std::string newType): type(newType) {};

Weapon::~Weapon() {};

const std::string	&Weapon::getType()
{
	return (type);
}

void	Weapon::setType(const std::string &newType)
{
	this->type = newType;
}

