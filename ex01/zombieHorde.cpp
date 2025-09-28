#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    Zombie *multi_zomb = new Zombie[N];
    for(int i = 0; i < N ; i++){
        multi_zomb[i].set_name(name + std::to_string(i + 1));
    }
    return multi_zomb;
}