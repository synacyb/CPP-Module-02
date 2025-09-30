#include "HumanA.hpp"

HumanA::HumanA(const std::string& h_name, Weapon& weapon): name(h_name), arms(weapon){}

void    HumanA::attack(void){
    std::cout << name << " " << "attacks with their" << " " << arms.getType() << std::endl;
}