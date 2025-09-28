#include <iostream>

int main(){

    std::string A = "HI THIS IS BRAIN";
    std::string* stringPTR = &A;
    std::string& stringREF = A;

    std::cout << "The memory address of the string variable : " << &A << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "The value of the string variable : " << A << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}