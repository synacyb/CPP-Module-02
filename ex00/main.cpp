#include "Zombie.hpp"

int main()
{
    Zombie *obj1_heap = newZombie("Ikhan");
    obj1_heap->announce();
    delete obj1_heap;
    randomChump("Foo");
}