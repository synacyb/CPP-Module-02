#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){

    std::string chois[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    for (size_t i = 0; i < 4; i++)
    {
        if(level == chois[i]){
            index = i;
            break ;
        }
    }
    
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
            std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
    }
}