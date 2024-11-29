#include "Contact.h"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::set_first_name(std::string t_first_name)
{
    this->first_name = t_first_name;
}

std::string Contact::get_first_name()
{
    return this->first_name;
}

void Contact::set_last_name(std::string t_last_name)
{
    this->last_name = t_last_name;
}

std::string Contact::get_last_name()
{
    return this->last_name;
}

void Contact::set_nickname(std::string t_nickname)
{
    this->nickname = t_nickname;
}

std::string Contact::get_nickname()
{
    return this->nickname;
}

void Contact::set_number(std::string t_number)
{
    if (t_number.length() > 5)
        this->number = t_number;
    else
        this->number = "INVALID NUMBER";
}

std::string Contact::get_number()
{
    return this->number;
}

void Contact::set_secret(std::string t_secret)
{
    this->secret = t_secret;
}

std::string Contact::get_secret()
{
    return this->secret;
}


