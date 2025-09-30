#include "Weapon.hpp"

Weapon::Weapon(const std::string element): type(element){}

const std::string &Weapon::getType(void) const{
    return type;
}

void Weapon::setType(const std::string name){
    type = name;
}