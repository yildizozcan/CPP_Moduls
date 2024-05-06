#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]: I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]: I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			index = -1;
	
	for ( int i = 0; i < 4; i++ )
	{
		if ( levels[i] == level )
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			this->debug();
			index++;
		case 1:
			this->info();
			index++;
		case 2:
			this->warning();
			index++;
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}