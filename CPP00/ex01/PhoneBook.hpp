#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     i; /*0-8*/
        int     counter;
        int     total_contacts;
    public:
    PhoneBook();
    void        addContacts();
    void        searchContacts();
    void displayContacts();
    /*get lenght of the str, and if its > 9 fubstr 0->9 end with ., else return str*/
};

#endif