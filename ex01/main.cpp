#include "Zombie.hpp"

int main() {
    std::cout << "=== Test 1: Small horde, same name ===" << std::endl;
    int N1 = 2;
    Zombie* horde1 = zombieHorde(N1, "Zombie");
    for (int i = 0; i < N1; i++) {
        horde1[i].announce();
    }
    delete[] horde1;
    
    return 0;
}