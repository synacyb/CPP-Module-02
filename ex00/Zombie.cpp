#include "Zombie.hpp"

Zombie::Zombie(std::string name_object) {name = name_object;}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}

void    Zombie::announce(void){
    if(name == "Foo")
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout << "<"<< name << ">" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}