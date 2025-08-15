


#include "FragTrap.hpp"

int main(void)
{
	std::cout<<GRN<<"\n###############*Construct FragTrap*###############"<<RST<<std::endl;
	FragTrap f1("\033[33mkuriboh\033[0m");

	std::cout << f1.getName() << " (original) has " << f1.getHp() << " HP and " << f1.getEp() << " stamina points" << std::endl;
	
	std::cout<<GRN<<"\n###############*Actions*###############"<<RST<<std::endl;
	std::cout << "*Derived class new method*" << std::endl;
	f1.highFivesGuys();
	std::cout << "*Base class method not overwritten*" << std::endl;
    
	f1.attack(BLE"Blue Eyes Dragon\033[0m");

	std::cout << f1.getName() << " now has " << f1.getHp() << " HP and " << f1.getEp() << " stamina points" << std::endl;
	f1.takeDamage(90);
	std::cout << f1.getName() << " now has " << f1.getHp() << " HP and " << f1.getEp() << " stamina points" << std::endl;
	f1.beRepaired(10);
	std::cout << f1.getName() << " now has " << f1.getHp() << " HP and " << f1.getEp() << " stamina points" << std::endl;

	std::cout<<GRN<<"\n###############*Copy & Assignment*###############"<<RST<<std::endl;
	FragTrap f2(f1);
	std::cout << f2.getName() << " (copy) has " << f2.getHp() << " HP and " << f2.getEp() << " stamina points" << std::endl;
	FragTrap f3;
	f3 = f1;
	std::cout << f3.getName() << " (assigned) has " << f3.getHp() << " HP and " << f3.getEp() << " stamina points" << std::endl;

	std::cout<<RED<<"\n###############*Destruct*###############"<<RST<<std::endl;
	
	return (0);
}