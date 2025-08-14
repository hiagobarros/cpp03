
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap&	operator=(const DiamondTrap &other);
		~DiamondTrap(void);

		void	attack(std::string const& target);
		void	whoAmI(void);
};

#endif