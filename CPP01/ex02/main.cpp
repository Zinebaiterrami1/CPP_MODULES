# include <iostream>
# include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN.";
    std::string *p = &str;
    std::string& ref = str;

    std::cout << &str << std::endl;
    std::cout << p << std::endl;
    std::cout << &ref << std::endl;

    std::cout << std::endl;

    std::cout << str << std::endl;
    std::cout << *p << std::endl;
    std::cout << ref << std::endl;

}