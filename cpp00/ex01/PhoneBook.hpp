# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact arr[8];
        int     index; /*0-8*/
        int     next_index; /*next index to replace when i hit 9+ contacts*/
    public:
    void add_new_contact()
    {
        index = 0;
        while(index < 9)
        {
            std::cout << arr[index].getFirstName();
            std::cout << arr[index].getLastName();
            std::cout << arr[index].getNickname();
            std::cout << arr[index].getDarkestSecret();
            std::cout << arr[index].getPhoneNumber();
            index++;
        }
    }
};

#endif