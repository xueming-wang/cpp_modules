#include <iostream>
#include <string>

int main () {

    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string addr: " << &string << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "tringREF: " << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}