#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    std::string  str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])() = {
        ptr[0] = &Harl::debug,
        ptr[1] = &Harl::info,
        ptr[2] = &Harl::warning,
        ptr[3] = &Harl::error
	};
    int i = 0;
    while (i < 4 && level != str[i])
        i++;
    switch (i)
    {
    case 0:
        (this->*ptr[i])();
        break;
    case 1:
        (this->*ptr[i])();
        break;
    case 2:
        (this->*ptr[i])();
        break;
    case 3:
        (this->*ptr[i])();
        break;
    default:
        std::cerr << "Invalid complaint level: " << level << std::endl;
        break;
    }
}