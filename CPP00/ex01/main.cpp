#include "PhoneBook.hpp"
#include "Contact.hpp"

void phoneBookMenu()
{
	std::cout << "**********************************************" << std::endl;
	std::cout << "*                                            *" << std::endl;
	std::cout << "*\033[1m\033[38;5;46m    Welcome to the PhoneBook Application    \033[0m*" << std::endl;
	std::cout << "*                                            *" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cout << "Menu:" << std::endl;
	std::cout << "> \033[38;5;226mADD\033[0m    : Add a new contact" << std::endl;
	std::cout << "> \033[38;5;226mSEARCH\033[0m : Search for a contact" << std::endl;
	std::cout << "> \033[38;5;226mEXIT\033[0m   : Exit the PhoneBook" << std::endl;
	std::cout << "**********************************************" << std::endl;
}

int main()
{
    PhoneBook phonebook;
    std::string command;

    phoneBookMenu();
    while(true)
    {
        std::cout << "Please enter a command (ADD, SEARCH, EXIT): " ;
        if(!std::getline(std::cin , command))
                break;
        if(command == "ADD")
        {
            phonebook.addContacts();
        }
        else if(command == "SEARCH")
        {
            phonebook.displayContacts();
            phonebook.searchContacts();
        }
        else if(command == "EXIT")
            break;
        else
            std::cout << "Invalid Command!" << std::endl;
    }
    return (0);
}