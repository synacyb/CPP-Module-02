#include "Zombie.hpp"
#include <cstdlib>

Zombie* zombieHorde( int N, std::string name ){

    Zombie *multi_zomb = new (std::nothrow) Zombie[N];

    if(!multi_zomb)
    {
        std::cerr << "allocation failed !" << std::endl;
        exit(1);
    }
    
    for(int i = 0; i < N ; i++){
        multi_zomb[i].set_name(name);
    }
    return multi_zomb;
}