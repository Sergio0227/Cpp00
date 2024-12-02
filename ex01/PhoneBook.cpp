#include "PhoneBook.hpp"

#include <iostream>
#include <ostream>

PhoneBook::PhoneBook(void)
{

}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::add_contact(int index, Contact t_contact)
{
    if (index < PHONEBOOK_MAX_SIZE)
        this->contacts[index] = t_contact;
    else
        this->contacts[PHONEBOOK_MAX_SIZE - 1] = t_contact;
}

Contact PhoneBook::get_contact(int index)
{
    return this->contacts[index];
}
