#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    Contact c;
    PhoneBook p;
    c.setFirstName("zineb");
    c.setLastName("aiterrami");
    c.setNickname("Luna");
    c.setDarkestSecret("jdshfuiehfusfsdhf");
    c.setPhoneNumber("+212 694359589");
    p.add_new_contact();
}