#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <limits>
#include <iomanip>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;
    public:
            /*Getters*/
    std::string  getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getDarkestSecret();
    std::string getPhoneNumber();
            /*Setters*/
    void setFirstName(std::string fname);
    void setLastName(std::string lname);
    void setNickname(std::string nname);
    void setDarkestSecret(std:: string secret);
    void setPhoneNumber(std::string phnumber);
    void displayContact();
    std::string getLenghtString(std::string str);
};

#endif