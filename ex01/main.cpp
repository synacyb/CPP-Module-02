#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
int main() {
    std::cout << "=== Test 1: Small horde, same name ===" << std::endl;
    int N1 = 3;
    Zombie* horde1 = zombieHorde(N1, "Zombie");
    for (int i = 0; i < N1; i++) {
        horde1[i].announce();
    }
    delete[] horde1;

    std::cout << "\n=== Test 2: Larger horde, same name ===" << std::endl;
    int N2 = 5;
    Zombie* horde2 = zombieHorde(N2, "BrainEater");
    for (int i = 0; i < N2; i++) {
        horde2[i].announce();
    }
    delete[] horde2;

    std::cout << "\n=== Test 3: Edge case: 1 zombie ===" << std::endl;
    int N3 = 1;
    Zombie* horde3 = zombieHorde(N3, "SoloZombie");
    horde3[0].announce();
    delete[] horde3;

    std::cout << "\n=== Test 4: Edge case: 0 zombies ===" << std::endl;
    int N4 = 0;
    Zombie* horde4 = zombieHorde(N4, "NoZombie");
    if (!horde4) {
        std::cout << "No zombies created, pointer is nullptr." << std::endl;
    } else {
        for (int i = 0; i < N4; i++)
            horde4[i].announce();
        delete[] horde4;
    }

    // std::cout << "\n=== Test 5: Unique names (optional) ===" << std::endl;
    // int N5 = 4;
    // Zombie* horde5 = zombieHorde(N5, "Zombie");
    // for (int i = 0; i < N5; i++) {
    //     horde5[i].set_name("Zombie" + std::to_string(i + 1)); // set unique names
    //     horde5[i].announce();
    // }
    // delete[] horde5;
    return 0;
}