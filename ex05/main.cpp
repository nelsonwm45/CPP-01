#include "Harl.hpp"

int main()
{
	Harl newHarl;

	newHarl.complain("DEBUG");
	newHarl.complain("INFO");
	newHarl.complain("WARNING");
	newHarl.complain("ERROR");
	newHarl.complain("error");
	newHarl.complain("Hello");
	return (0);
}
