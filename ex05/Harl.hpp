#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cctype>
#include <string>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define WHITE "\033[37m"
# define RESET "\033[0m"

class	Harl
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

	Harl();
	~Harl();

	// enum complaints { 
	// 	DEBUG = 0, 
	// 	INFO = 1, 
	// 	WARNING = 2,
	// 	ERROR = 3
	// };

	void	complain(std::string level);
	void	transform_upper(std::string &level);
	int		get_index(std::string level);
};

#endif