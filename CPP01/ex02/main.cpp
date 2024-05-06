#include <iostream>

const char *YELLOW_TEXT = "\033[1;33m";
const char *BLUE_TEXT = "\033[1;34m";
const char *RESET_TEXT = "\033[0m";

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "str memory address      : " << YELLOW_TEXT << &str << RESET_TEXT << std::endl;
    std::cout << "stringPTR memory address: " << YELLOW_TEXT << stringPTR << RESET_TEXT << std::endl;
    std::cout << "stringREF               : " <<  YELLOW_TEXT << &stringREF << RESET_TEXT << std::endl;

    std::cout << "str value      : " << BLUE_TEXT << str << RESET_TEXT << std::endl;
    std::cout << "stringPTR value: " << BLUE_TEXT << *stringPTR << RESET_TEXT << std::endl;
    std::cout << "stringREF      : " << BLUE_TEXT << stringREF << RESET_TEXT << std::endl;
    return 0;
}