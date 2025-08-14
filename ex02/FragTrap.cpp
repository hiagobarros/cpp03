

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default FragTrap")
{
	this->_hp = 100;
	this->_ep = 100;
	this->_atk = 30;
	std::cout << "FragTrap default constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_atk = 30;
	std::cout << "FragTrap parameterized constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "This is a positive high-fives request :-)" << std::endl;
}