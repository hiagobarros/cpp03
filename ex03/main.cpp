


#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout<<GRN<<"\n###############*Construct DiamondTrap*###############"<<RST<<std::endl;
	DiamondTrap d1("RUDEUS");
	std::cout << "*Derived class new method*" << std::endl;
	d1.whoAmI();

	std::cout<<GRN<<"\n###############*Actions*###############"<<RST<<std::endl;
	std::cout << "*Attack() inherited from ScavTrap class*" << std::endl;
	d1.attack("\33[31mRED Target\33[0m");
	d1.takeDamage(90);
	d1.beRepaired(10);
	d1.whoAmI();
	
	std::cout<<GRN<<"\n###############*Copy & Assignment*###############"<<RST<<std::endl;
	DiamondTrap d2(d1);
	d2.whoAmI();
	DiamondTrap d3;
	d3 = d1;
	d3.whoAmI();
	d1.attack("\33[32mGREEN Target\33[0m");
	d2 = d1;
	d2.whoAmI();

	std::cout<<GRN<<"\n###############*Destruct*###############"<<RST<<std::endl;
	return (0);
}