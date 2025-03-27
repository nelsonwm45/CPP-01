#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

/*
	const return value at getType does not allow function to modify the str
	To protect the private member being modified at getter

	Weapon must pass by reference, already decided by subject.pdf
*/
class	Weapon
{
	private:
	std::string	type;

	public:

	// Constructor
	// Weapon(void);
	Weapon(std::string newType);

	// Destructor
	~Weapon();

	// Getter
	const std::string	&getType(void);
	
	// Setter
	void	setType(const std::string &newType);
};

#endif