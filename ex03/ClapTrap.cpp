
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("Default ClapTrap"), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap default constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap parameterized constructor called for " << this->_name << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_atk = other._atk;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep <= 0 && this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << ", I... I can`t attack...! My energy`s drained... and my body`s barely holding on..." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ClapTrap " << this->_name << ", Tch... I can`t attack... I`m out of energy!" << std::endl;
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << ", I can`t... My body`s too damaged... I don`t have enough HP to strike back!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << ", A fierce strike lands on " << target << ", inflicting " << this->_atk << " points of damage!" << std::endl;
		this->_ep--;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << ": Gah—"<< amount <<" damage...! That one really hurt!" << std::endl;
	if (this->_hp >= amount)
		this->_hp -= amount;
	else
		this->_hp = 0;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep <= 0 && this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << ", No matter how hard I try... I have no strength left to fight. My HP and stamina are completely drained..." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ClapTrap " << this->_name << ", It`s no use... I don`t have enough energy left to heal myself..." << std::endl;
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << ", I... I can`t heal...! My HP`s too low... I`m falling apart..." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << ", It begins to mend... recovering " << amount << " hit points!" << std::endl;
		this->_ep--;
		this->_hp += amount;
	}
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}


unsigned int	ClapTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getEp(void) const
{
	return (this->_ep);
}