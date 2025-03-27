#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>

/*
	Human A always with weapon, so human A can take weapon as reference // Pass by reference
	Human A also can do pass by pointer 
*/
class	HumanA
{
	private:
	std::string	name;
	Weapon	&weapon; 
	// Weapon	*weapon; // Pass by pointer
	
	public:
	// HumanA();
	HumanA(std::string newName, Weapon &newWeapon);

	~HumanA();

	void	attack(void);

};

#endif