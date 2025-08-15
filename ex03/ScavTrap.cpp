

#include "ScavTrap.hpp"

unsigned int const	ScavTrap::defaultHP = 100;
unsigned int const	ScavTrap::defaultEP = 50;
unsigned int const	ScavTrap::defaultATK = 20;

ScavTrap::ScavTrap(void) : ClapTrap("Default ScavTrap")
{
	this->_hp = ScavTrap::defaultHP;
	this->_ep = ScavTrap::defaultEP;
	this->_atk = ScavTrap::defaultATK;
	std::cout << "ScavTrap default constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->_hp = ScavTrap::defaultHP;
	this->_ep = ScavTrap::defaultEP;
	this->_atk = ScavTrap::defaultATK;
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
		std::cout << "ScavTrap " << this->_name << ": I... I can`t attack...! My energy`s drained... and my body`s barely holding on..." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ScavTrap " << this->_name << ": Tch... I can`t attack... I`m out of energy!" << std::endl;
	else if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << ": I can`t... My body`s too damaged... I don`t have enough HP to strike back!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << ": A fierce strike lands on " << target << ", inflicting " << this->_atk << "HP of damage!" << std::endl;
		this->_ep--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}