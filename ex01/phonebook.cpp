#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : index(0), size(0) {}

Phonebook::~Phonebook() {}

void Phonebook::add_command() {
    std::string input;
    while(1) {
        std::cout << "First name: ";
        std::getline(std::cin,input);
        if(list[index].set_first_name(input))
            break;
        std::cout << "Invalid input" << std::endl;
    }
    while(1) {
        std::cout << "Last name: ";
        std::getline(std::cin,input);
        if(list[index].set_last_name(input))
            break;
        std::cout << "Invalid input" << std::endl;
    }
    while(1) {
        std::cout << "Nickname: ";
        std::getline(std::cin,input);
        if(list[index].set_nickname(input))
            break;
        std::cout << "Invalid input" << std::endl;
    }
    while(1) {
        std::cout << "Phone number: ";
        std::getline(std::cin,input);
        if(list[index].set_phone_number(input))
            break;
        std::cout << "Invalid input" << std::endl;
    }
    while(1) {
        std::cout << "Darkest secret: ";
        std::getline(std::cin,input);
        if(list[index].set_darkest_secret(input))
            break;
        std::cout << "Invalid input" << std::endl;
    }
    if(size < 8)
        size++;
    index = (index + 1) % 8;
}

static std::string check_format(std::string line) {
    if(line.length() > 10)
        return(line.substr(0, 9) + ".");
    return(line);
}

void Phonebook::search_command() {
    if(size == 0)
    {
        std::cout << "Phonebook empty, add contact";
        return ;
    }
    std::cout << std::right;
    std::cout << std::setw(10) << "index" << "|"
            << std::setw(10) << "first name" << "|"
            << std::setw(10) << "last name" << "|"
            << std::setw(10) << "nickname" << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << std::setw(10) << i << "|"
                << std::setw(10) << check_format(list[i].get_first_name()) << "|"
                << std::setw(10) << check_format(list[i].get_last_name()) << "|"
                << std::setw(10) << check_format(list[i].get_nickname()) << "|" << std::endl;
    }
}