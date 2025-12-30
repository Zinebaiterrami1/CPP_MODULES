# include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Zineb", -1);
        b.getName();
        b.getGrade();
        std::cout << b;
        b.increment_garde();
        b.decrement_garde();
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}