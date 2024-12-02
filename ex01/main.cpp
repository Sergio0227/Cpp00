#include <iostream>
#include <ostream>
#include <string>
#include "PhoneBook.hpp"

void display_contact_list(PhoneBook pb, int phonebook_size)
{
    Contact t_contact;
    std::string field[4];

    std::cout << "Contact list:" << std::endl;
    std::cout << "|     INDEX|      NAME|    L.NAME|  NICKNAME|\n";
    for (int j = 0; j < phonebook_size && j < PHONEBOOK_MAX_SIZE; j++)
    {
        t_contact = pb.get_contact(j);
        field[0] = j + 49;
        field[1] = t_contact.get_first_name();
        field[2] = t_contact.get_last_name();
        field[3] = t_contact.get_nickname();
        for (int x = 0; x < 4; x++)
        {
            int spaces = 10 - field[x].length();
            std::cout << "|";
            for (int y = 0; y < spaces; y++)
                std::cout << " ";
            if (spaces < 0)
            {
                for (int y = 0; y < 9; y++)
                    std::cout << field[x][y];
                std::cout << ".";
            }
            else
                std::cout << field[x];
            if (x == 3)
                std::cout << "|\n";
        }
    }

}

int main()
{
    int index = 0;
    PhoneBook pb;
    Contact t_contact;

    std::cout << "Welcome to my awesome Phonebook" << std::endl;
    while (true)
    {
        std::string choice;
        std::cout << "Please select your option: (ADD-SEARCH-EXIT)" << std::endl;
        std::getline(std::cin, choice);
        if (choice == "ADD")
        {
            try
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
            catch (const std::invalid_argument &e)
            {
                std::cout << "Error: " << e.what() << ". Please try again.\n";
            }
        }
        else if (choice == "SEARCH")
        {
            int choice_index = 1;
            display_contact_list(pb, index);
            do
            {
                if (!(choice_index > 0 && choice_index <= index))
                    std::cout << "Wrong index, try again\n";
                std::cout << "Enter you contact's index: ";
                std::cin >> choice_index;
                std::cin.ignore();
            }while(!(choice_index > 0 && choice_index <= index));
            t_contact = pb.get_contact(choice_index - 1);
            std::cout << "Name: " << t_contact.get_first_name() << std::endl;
            std::cout << "Last name: " << t_contact.get_last_name() << std::endl;
            std::cout << "Nickname: " << t_contact.get_nickname() << std::endl;
            std::cout << "Number: " << t_contact.get_number() << std::endl;
            std::cout << "Secret: " << t_contact.get_secret() << std::endl;
        }
        else if (choice == "EXIT")
            break;
        else
            std::cout << "Invalid Choice" << std::endl;
    }
    return 0;
}