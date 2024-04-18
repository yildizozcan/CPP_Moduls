#include "phonebook.hpp"

const char *GREEN_TEXT = "\033[1;32m";
const char *YELLOW_TEXT = "\033[1;33m";
const char *BLUE_TEXT = "\033[1;34m";
const char *RED_TEXT = "\033[1;31m";
const char *RESET_TEXT = "\033[0m";

void firstMessage(void)
{
    std::cout << BLUE_TEXT << "*************************************************" << RESET_TEXT << std::endl;
    std::cout << "- To add a contact to your phone book: " << YELLOW_TEXT << "ADD" << RESET_TEXT << std::endl;
    std::cout << "- To find the person in your contacts: " << YELLOW_TEXT << "SEARCH" << RESET_TEXT << std::endl;
    std::cout << "- To check out                       : " << YELLOW_TEXT << "EXIT" << RESET_TEXT << std::endl;
    std::cout << BLUE_TEXT << "*************************************************" << RESET_TEXT << std::endl;
    std::cout << RED_TEXT << "Your choice: " << RESET_TEXT;
}

int main()
{
    PhoneBook phonebook;
    std::string userInput;

    std::cout << GREEN_TEXT << "Welcome to the 80s and its incredible technologies!" << std::endl;
    std::cout << "Please select the action you want to take." <<  RESET_TEXT << std::endl;

    while (true)
    {
        firstMessage();
        std::getline(std::cin, userInput);
        if (userInput == "ADD")
        {
            phonebook.addContact();
        }
        else if (userInput == "SEARCH")
        {
            phonebook.searchContact();
        }
        else if (userInput == "EXIT")
        {
            exit(1);
        }
        else
            std::cout << "Invalid transaction. Please try again!" << std::endl;
    }
}