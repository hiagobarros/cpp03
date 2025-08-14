

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RED "\033[31m"
#define GRN "\033[32m"
#define BLE "\033[34m"
#define RST "\033[0m"

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_atk;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		
		ClapTrap&	operator=(const ClapTrap &other);
		~ClapTrap(void);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getHp(void) const;
		unsigned int	getEp(void) const;
};
#endif
