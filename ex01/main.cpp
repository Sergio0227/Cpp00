#include <iostream>
#include <ostream>
#include <string>
#include "PhoneBook.h"

int main()
{
    PhoneBook pb;
    std::string choice;

    while (true)
    {
        std::cin >> choice;
        if (choice == "ADD")
            pb.add_contact();
        else if (choice == "SEACH")
            pb.display_contact();
        else if (choice == "EXIT")
            break;
        else
            std::cout << "Invalid Choice" << std::endl;
    }
}