#pragma once
#include "contact.hpp"

class Phonebook {
    private:
        Contact list[8];
        int     index;
        int     size;
    public:
        Phonebook();
        ~Phonebook();
        void add_command();
        void search_command();
};
