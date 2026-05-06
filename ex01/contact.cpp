#include "contact.hpp"

std::string Contact::get_first_name() {
    return(first_name);
}

std::string Contact::get_last_name() {
    return(last_name);
}

std::string Contact::get_nickname() {
    return(nickname);
}

std::string Contact::get_phone_number() {
    return(phone_number);
}

std::string Contact::get_darkest_secret() {
    return(darkest_secret);
}

bool Contact::set_first_name(std::string str) {
    if(str.empty())
        return(false);
    this->first_name = str;
    return(true);
}

bool Contact::set_last_name(std::string str) {
    if(str.empty())
        return(false);
    this->last_name = str;
    return(true);}

bool Contact::set_nickname(std::string str) {
    if(str.empty())
        return(false);
    this->nickname = str;
    return(true);
}

bool Contact::set_phone_number(std::string str) {
    if(str.empty())
        return(false);
    this->phone_number = str;
    return(true);
}

bool Contact::set_darkest_secret(std::string str) {
    if(str.empty())
        return(false);
    this->darkest_secret = str;
    return(true);
}