#include "Harl.hpp"

const char *YELLOW_TEXT = "\033[1;33m";
const char *RESET_TEXT = "\033[0m";

int	main( int ac, char **av )
{
	Harl	harl;

	if (ac != 2)
	{
        std::cout << YELLOW_TEXT;
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
        std::cout << RESET_TEXT;
		return 0;
	}
	harl.complain(av[1]);
	return 0;
}