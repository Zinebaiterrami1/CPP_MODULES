#include "Contact.hpp"

std::string  Contact::getFirstName()
{
    return first_name;
}

void Contact::setFirstName(std::string fname)
{
    first_name = fname;
}

std::string Contact::getLastName()
{
    return last_name;
}

void Contact::setLastName(std::string lname)
{
    last_name = lname;
}

std::string Contact::getNickname()
{
    return nickname;
}

void Contact::setNickname(std::string nname)
{
    nickname = nname;
}

std::string Contact::getDarkestSecret()
{
    return darkest_secret;
}

void Contact::setDarkestSecret(std:: string secret)
{
    darkest_secret = secret;
}

std::string Contact::getPhoneNumber()
{
    return phone_number;
}

void Contact::setPhoneNumber(std::string phnumber)
{
    phone_number = phnumber;
}

void Contact::displayContact()
{
    if(first_name.empty() || last_name.empty() ||
        nickname.empty() || darkest_secret.empty() || phone_number.empty())
        return ;
    std::cout << "first name: " << first_name << std::endl;
    std::cout << "last name: " << last_name << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "darkest secret: " << darkest_secret << std::endl;
    std::cout << "phone number: " << phone_number << std::endl; 
}

std::string Contact::getLenghtString(std::string str)
{
    if(str.length() > 9)
    {
        return (str.substr(0, 9) + '.');
    }
    else
        return (str);
}
