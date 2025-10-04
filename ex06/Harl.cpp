#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){

    std::string chois[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    if (strcmp(level.c_str(), "DEBUG") == 0)
        index = 0;
    else if (strcmp(level.c_str(), "INFO") == 0)
        index = 1;
    else if (strcmp(level.c_str(), "WARNING") == 0)
        index = 2;
    else if (strcmp(level.c_str(), "ERROR") == 0)
        index = 3;

    void    (Harl::*print_msg[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    switch (index)
    {
        case 0:
            (this->*print_msg[0])();
        case 1:
            (this->*print_msg[1])();
        case 2:
            (this->*print_msg[2])();
        case 3:
            (this->*print_msg[3])();
            break ;
        default:
            std::cout << "Unknown complaint level: " << level << std::endl;
    }
}