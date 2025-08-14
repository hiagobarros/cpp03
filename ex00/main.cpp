

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	ClapTrap	b("MEGUMIN");
	ClapTrap	c(b);
	ClapTrap	d;

	d = b;
	
	std::cout<<GRN<<"\n###############*Attack step*###############"<<RST<<std::endl;
	b.attack("KASUTRASH");
	std::cout << b.getName() << " now has " << b.getEp() << " stamina points left" << std::endl;
	
	std::cout <<RED<< "\n###############*Damage step*###############"<<RST<<std::endl;
	b.takeDamage(6);
	std::cout << b.getName() << " now has " << b.getHp() << " HP left"<<RST<<std::endl;
	std::cout << b.getName() << " still has " << b.getEp() << " stamina points left" << std::endl;
	
	std::cout<<GRN<<"\n###############*Heal step*###############"<< std::endl;
	b.beRepaired(4);
	std::cout << b.getName() << " now has " << b.getHp() << " HP left"<<RST<<std::endl;
	std::cout << b.getName() << " now has " << b.getEp() << " stamina points left" << std::endl;

	std::cout<<BLE<<"\n###############*Stamina step*###############"<<RST<<std::endl;
	while (b.getEp())
	{
		b.attack("AHOSUBA");
		std::cout << b.getName() << " now has " << b.getEp() << " stamina points left"<<RST<<std::endl;
	}

	std::cout<<RED<<"\n###############*Damage step ...again rs*###############"<<RST<<std::endl;
	b.takeDamage(100);
	b.attack("Target3");
	b.beRepaired(10);
	
	return (0);
}