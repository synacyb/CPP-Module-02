#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void announce(void);
        void set_name(std::string name_object);
        ~Zombie();
};

#endif