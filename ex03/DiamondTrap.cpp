
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), _name("Default")
{
	this->_hp = FragTrap::defaultHP;
	this->_ep = ScavTrap::defaultEP;
	this->_atk = FragTrap::defaultATK;
	std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name") , _name(name)
{
	this->_hp = FragTrap::defaultHP;
	this->_ep = ScavTrap::defaultEP;
	this->_atk = FragTrap::defaultATK;
	std::cout << "DiamondTrap parameterized constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_atk = other._atk;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}


DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		FragTrap::operator=(other);
		this->_name = other._name;
	}
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\n**Who am I?**\n";
	std::cout << "*DiamondTrap name: " << this->_name << "\n";
	std::cout << "*ClapTrap name: " << ClapTrap::getName() << "\n" << std::endl;
}


void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}