#include "PhoneBook.h"

#include <iostream>
#include <ostream>

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_contact(int index, Contact t_contact)
{
    if (index < PHONEBOOK_SIZE)
        this->contacts[index] = t_contact;
    else
        this->contacts[PHONEBOOK_SIZE - 1] = t_contact;
}

Contact PhoneBook::get_contact(int index)
{
    return this->contacts[index];
}
