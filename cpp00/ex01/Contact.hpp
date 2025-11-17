#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;
    public:
    //Getter access method to access the private data
    std::string  getFirstName()
    {
        return first_name;
    }
    //Setter method to modify the private data
    void setFirstName(std::string fname)
    {
        first_name = fname;
    }
    std::string getLastName()
    {
        return last_name;
    }
    void setLastName(std::string lname)
    {
        last_name = lname;
    }
    std::string getNickname()
    {
        return nickname;
    }
    void setNickname(std::string nname)
    {
        nickname = nname;
    }
    std::string getDarkestSecret()
    {
        return darkest_secret;
    }
    void setDarkestSecret(std:: string secret)
    {
        darkest_secret = secret;
    }
    std::string getPhoneNumber()
    {
        return phone_number;
    }
    void setPhoneNumber(std::string phnumber)
    {
        phone_number = phnumber;
    }
};