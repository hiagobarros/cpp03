

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout<<GRN<<"\n###############*Construct ClapTrap*###############"<<RST<<std::endl;
	ClapTrap c("NARUTO");
	std::cout << c.getName() << " has " << c.getHp() << " HP and " << c.getEp() << " stamina points" << std::endl;
	c.attack("SASUKE");
	c.takeDamage(3);
	c.beRepaired(5);
	std::cout << c.getName() << " now has " << c.getHp() << " HP and " << c.getEp() << " stamina points" << std::endl;

	std::cout <<BLE<< "\n###############*Construct ScavTrap*###############"<<RST<<std::endl;
	ScavTrap s1("KAGEBUSHIN");
	std::cout << s1.getName() << " (original) has " << s1.getHp() << " HP and " << s1.getEp() << " stamina points" << std::endl;
	
	std::cout<<GRN<<"\n###############*Actions*###############"<<RST<<std::endl;
	std::cout << "*Base class function overwritten*" << std::endl;
	s1.attack("Darkness");
	std::cout << s1.getName() << " (original) now has " << s1.getHp() << " HP and " << s1.getEp() << " stamina points" << std::endl;
	std::cout << "*Derived class new function*" << std::endl;
	s1.guardGate();
	std::cout << "*Base class function not overwritten*" << std::endl;
	s1.takeDamage(90);
	std::cout << s1.getName() << " (original) now has " << s1.getHp() << " HP and " << s1.getEp() << " stamina points" << std::endl;
	s1.beRepaired(10);
	std::cout << s1.getName() << " (original) now has " << s1.getHp() << " HP and " << s1.getEp() << " stamina points" << std::endl;

	std::cout <<BLE<< "\n###############*Copy & Assignment*###############"<<RST<<std::endl;
	ScavTrap s2(s1);
	std::cout << s2.getName() << " (copy) has " << s2.getHp() << " HP and " << s2.getEp() << " stamina points" << std::endl;
	ScavTrap s3;
	s3 = s1;
	std::cout << s3.getName() << " (assigned) has " << s3.getHp() << " HP and " << s3.getEp() << " stamina points" << std::endl;

	std::cout <<RED<< "\n###############*Destruct*###############"<<RST<<std::endl;
	return (0);
}