#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

    private:
        std::string name;
        Weapon& arms;
    public:
        HumanA(const std::string& h_name, Weapon& weapon);
        void    attack(void);
};

#endif