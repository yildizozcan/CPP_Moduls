#include "Harl.hpp"

const char *BLUE_TEXT = "\033[1;34m";
const char *RESET_TEXT = "\033[0m";

int main()
{
    Harl harl;
    std::cout << BLUE_TEXT;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("asd");
    std::cout << RESET_TEXT;

    return 0;
}