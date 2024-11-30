#include <iostream>
#include <ostream>
#include <string>
#include "PhoneBook.h"

void display_contact_list(PhoneBook pb, int phonebook_size)
{
    Contact t_contact;

    std::cout << "Contact list:" << std::endl;
    for (int i = 0; i < phonebook_size; ++i)
    {
        t_contact = pb.get_contact(i);
        std::cout << i << std::endl;
        std::cout << t_contact.get_first_name() << std::endl;
        std::cout << t_contact.get_last_name() << std::endl;
        std::cout << t_contact.get_nickname() << std::endl;
    }
}

int main()
{
    int index = 0;
    int choice_index;
    PhoneBook pb;
    Contact t_contact;
    std::string choice;

    std::cout << "Welcome to my awesome Phonebook" << std::endl;
    while (true)
    {
        std::cout << "Please select your option: (ADD-SEARCH-EXIT)" << std::endl;
        std::getline(std::cin, choice);
        if (choice == "ADD")
        {
            std::string t_string;
            std::cout << "Enter contact's first name: ";
            getline(std::cin, t_string);
            t_contact.set_first_name(t_string);
            std::cout << "Enter contact's last name: ";
            getline(std::cin, t_string);
            t_contact.set_last_name(t_string);
            std::cout << "Enter contact's nickname: ";
            getline(std::cin, t_string);
            t_contact.set_nickname(t_string);
            std::cout << "Enter contact's phone number: ";
            getline(std::cin, t_string);
            t_contact.set_number(t_string);
            std::cout << "Enter contact's secret: ";
            getline(std::cin, t_string);
            t_contact.set_secret(t_string);
            pb.add_contact(index++, t_contact);
        }
        else if (choice == "SEARCH")
        {
            display_contact_list(pb, index);
            std::cout << "Enter you contact's index: ";
            std::cin >> choice_index;
            if (choice_index > 0 && choice_index <= index)
                pb.get_contact(index);
        }
        else if (choice == "EXIT")
            break;
        else
            std::cout << "Invalid Choice" << std::endl;
    }
    return 0;
}