

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define RED "\033[31m"
#define GRN "\033[32m"
#define BLE "\033[34m"
#define RST "\033[0m"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string const& name);
		ScavTrap(const ScavTrap &other);
		ScavTrap&	operator=(const ScavTrap &other);
		~ScavTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif