#include "HumanB.hpp"

HumanB::HumanB(const std::string& h_name): name(h_name), arms(NULL){}

void    HumanB::attack(void){
    if (!arms)
    {
        std::cout << name << " Has no weapon" << std::endl;
        return;
    }
    std::cout << name << " " << "attacks with their" << " " << arms->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    arms = &weapon;
}

void    HumanB::set_Type(std::string element){
    arms->setType(element);
}