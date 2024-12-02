#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>

#include "Contact.hpp"

#define PHONEBOOK_MAX_SIZE 8

class PhoneBook
{
private:
    Contact contacts[8];

public:
    PhoneBook(void);

    ~PhoneBook(void);

    void add_contact(int index, Contact t_contact);

    Contact get_contact(int index);
};


#endif
