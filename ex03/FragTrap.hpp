#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		FragTrap&	operator=(const FragTrap &other);
		~FragTrap(void);

		void	highFivesGuys(void);

		static unsigned int const	defaultHP;
		static unsigned int const	defaultEP;
		static unsigned int const	defaultATK;
};

#endif