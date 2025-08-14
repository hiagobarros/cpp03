

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default ScavTrap")
{
	this->_hp = 100;
	this->_ep = 50;
	this->_atk = 20;
	std::cout << "ScavTrap default constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_atk = 20;
	std::cout << "ScavTrap parameterized constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_ep <= 0 && this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " cannot attack. Not enough energy points nor hit points." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ScavTrap " << this->_name << " cannot attack. Not enough energy point." << std::endl;
	else if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " cannot attack. Not enough hit points." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
		this->_ep--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() <<RED<< " is now in Gate keeper mode" <<RST<< std::endl;
}