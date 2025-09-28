#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
int main()
{
    Zombie *arr = zombieHorde(4, "zombie");

    for(int i = 0; i < 4 ; i++){
        arr[i].announce();
    }
    delete[] arr;
}