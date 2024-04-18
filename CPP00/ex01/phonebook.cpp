#include "phonebook.hpp"

void PhoneBook::detailContact() const
{
    std::cout << " |   Index  |First Name| LastName | Nickname |" << std::endl;
    std::cout << " |----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!(contacts[i].getFirstName().empty()))
        {
            std::cout << std::setw(10) << i + 1 << "  ";
            if (contacts[i].getFirstName().length() > 10)
                std::cout << std::setw(10) << contacts[i].getFirstName().substr(0, 9) << ".";
            else
                std::cout << std::setw(10) << std::right << contacts[i].getFirstName();
            if (contacts[i].getLastName().length() > 10)
                std::cout << std::setw(10) << contacts[i].getLastName().substr(0, 9) << ".";
            else
                std::cout << std::setw(10) << std::right << contacts[i].getLastName();
            if (contacts[i].getNickname().length() > 10)
                std::cout << std::setw(10) << contacts[i].getNickname().substr(0, 9) << ".";
            else
                std::cout << std::setw(10) << std::right << contacts[i].getNickname();
            std::cout << std::endl;
        }
    }
    std::cout << " |----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::printContact(int index) const
{
    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkSecret() << std::endl;
}

bool ft_isdigit(const std::string &str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return false;
        i++;
    }
    return true;
}

void PhoneBook::addContact()
{
    static int i = 0;
    std::string command;

    if (i > 7)
        i = 0;
    fname:
    std::cout << i + 1 << ". " << "Firstname: ";
    std::getline(std::cin, command);
    if (command.empty())
    {
        std::cout << "Please try again!" << std::endl;
        goto fname;
    }
    contacts[i].setFirstName(command);
    lname:
    std::cout << i + 1 << ". " << "Lastname: ";
    std::getline(std::cin, command);
    if (command.empty())
    {
        std::cout << "Please try again!" << std::endl;
        goto lname;
    }
    contacts[i].setLastName(command);
    nname:
    std::cout << i + 1 << ". " << "Nickname: ";
    std::getline(std::cin, command);
    if (command.empty())
    {
        std::cout << "Please try again!" << std::endl;
        goto nname;
    }
    contacts[i].setNickname(command);
    pnumber:
    std::cout << i + 1 << ". " << "Phone Number: ";
    std::getline(std::cin, command);
    if (command.empty())
    {
        std::cout << "Please try again!" << std::endl;
        goto pnumber;
    }
    else if (!ft_isdigit(command))
    {
        std::cout << "Invalid phone number! Please try again!" << std::endl;
        goto pnumber;
    }
    contacts[i].setPhoneNumber(command);
    dsecret:
    std::cout << i + 1 << ". " << "Dark Secret: ";
    std::getline(std::cin, command);
    if (command.empty())
    {
        std::cout << "Please try again!" << std::endl;
        goto dsecret;
    }
    contacts[i].setDarkSecret(command);
    if (contactCount < 8)
        contactCount++;
    i++;
}

int toInt(const std::string& input)
{
    int result = 0;
    for (unsigned int i = 0; i < input.length(); ++i) {
        char c = input[i];
        result = result * 10 + (c - '0');
    }
    return result;
}


void PhoneBook::searchContact()
{
    std::string input;
    int index = 5;
    if(contactCount <= 0)
        std::cout << "No Recors Found" << std::endl;
    else
    {
        detailContact();
        trying:
        std::cout << "\033[1;33m" << "Enter the number for contact information: " << "\033[0m";
        std::getline(std::cin, input);
        if(!ft_isdigit(input))
        {
            std::cout << "Invalid value! Try again." << std::endl;
            goto trying;
        }
        else if(input.empty())
        {
            std::cout << "Please enter a number!" << std::endl;
            goto trying;
        }
        else
        {
            index = toInt(input);
            if(index <= contactCount)
                printContact(index - 1);
            else if(index <= 0 || index > contactCount)
                std::cout << "Invalid value!" << std::endl;
        }
    }
}