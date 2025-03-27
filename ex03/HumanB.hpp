#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>

/*
	Since HumanB not always with weapon, so the private member "weapon" shud be pointer instead

	Pointer can be uninitialised but reference once declared, must be initalised
*/
class	HumanB
{
	private:
	std::string	name;
	Weapon	*weapon;
	
	public:
	HumanB();
	HumanB(std::string newName);

	~HumanB();

	void	attack(void);

	void	setWeapon(Weapon &newWeapon);
};

#endif