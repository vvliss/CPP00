#pragma once
#include <string>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
        bool set_first_name(std::string str);
        bool set_last_name(std::string str);
        bool set_nickname(std::string str);
        bool set_phone_number(std::string str);
        bool set_darkest_secret(std::string str);
};