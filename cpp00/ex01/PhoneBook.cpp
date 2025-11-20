#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    i = 0;
    counter = 0;
    total_contacts = 0;
}

int ft_isnbr(std::string str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void PhoneBook::addContacts()
{
    i = counter % 8;
    std::string firstname , lastname, nickname, secret, phonenumber;
    std::cout << "entrer your first name: ";
    std::getline(std::cin , firstname);
    std::cout << "enter your last name: " ;
    std::getline(std::cin, lastname);
    std::cout << "enter your nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "what is your darkest secret? " ;
    std::getline(std::cin, secret);
    std::cout << "your phone number: ";
    std::getline(std::cin, phonenumber);
    while(!ft_isnbr(phonenumber))
    {
        std::cout << "digit only!" << std::endl;
        std::getline(std::cin, phonenumber);
    }
    if(firstname.empty() || lastname.empty() || nickname.empty()
        || secret.empty() || phonenumber.empty())
    {
        std::cout << "EMPTY INPUT!" << std::endl;
        return;
    }
    contacts[i].setFirstName(firstname);
    contacts[i].setLastName(lastname);
    contacts[i].setNickname(nickname);
    contacts[i].setDarkestSecret(secret);
    contacts[i].setPhoneNumber(phonenumber);
    counter ++;
    if(total_contacts < 8)
        total_contacts ++;
    std::cout << "ADD SUCCESSFULLY"<< std::endl;
}

void PhoneBook::searchContacts()
{
    if(total_contacts == 0)
    {
        std::cout << "no contacts" << std::endl;
        return ;
    }
    int index;

    std::cout << "choose index of contact that u want: ";
    std::cin >> index;
    if(std::cin.fail() || index < 0 || index > total_contacts)
    {
        std::cout << "must be between 0 && 9" << std::endl;
        // std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    contacts[index].displayContact();
}

void PhoneBook::displayContacts()
{
    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" << "|"
            << std::setw(10) << "Last Name" << "|"
            << std::setw(10) << "Nickname" <<  "|" <<std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for(int i = 0; i < total_contacts; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << contacts[i].getLenghtString(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << contacts[i].getLenghtString(contacts[i].getLastName()) << "|"
                  << std::setw(10) << contacts[i].getLenghtString(contacts[i].getNickname()) << std::endl;
    }
}
