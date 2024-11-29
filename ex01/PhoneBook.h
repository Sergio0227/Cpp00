#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>

#include "Contact.h"


class PhoneBook
{
private:
    Contact contacts[8];
    int     index;

public:
    PhoneBook();
    ~PhoneBook();

    void add_contact();
    void display_contact();
};



#endif
