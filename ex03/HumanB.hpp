#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

    private:
        std::string name;
        Weapon* arms;
    public:
        HumanB(const std::string& h_name);
        void    attack(void);
        void    setWeapon(Weapon& weapon);
        void    set_Type(std::string element);
};

#endif