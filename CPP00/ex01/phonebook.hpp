#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        void setFirstName(const std::string &firstName) { this->firstName = firstName; }
        void setLastName(const std::string &lastName) { this->lastName = lastName; }
        void setNickname(const std::string &nickname) { this->nickname = nickname; }
        void setPhoneNumber(const std::string &phoneNumber) { this->phoneNumber = phoneNumber; }
        void setDarkSecret(const std::string &newDarkSecret) { this->darkestSecret = newDarkSecret; }

        std::string getFirstName() const { return this->firstName; }
        std::string getLastName() const { return this->lastName; }
        std::string getNickname() const { return this->nickname; }
        std::string getPhoneNumber() const { return this->phoneNumber; }
        std::string getDarkSecret() const { return this->darkestSecret; }
};

class PhoneBook
{
    private:
        Contact contacts[8];
        int contactCount;

    public:
        PhoneBook() { contactCount = 0; }
        void addContact();
        void searchContact();
        void detailContact() const;
        void printContact(int index) const;
};

#endif