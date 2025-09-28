#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie *obj1_heap = newZombie("Ikhan");
    obj1_heap->announce();
    delete obj1_heap;
    randomChump("Foo");
}