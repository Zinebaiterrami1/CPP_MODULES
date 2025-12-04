# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

int main()
{
    // original tests
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    const Animal* animals[4];
    std::cout << "--------------------------------------------------------" << std::endl;
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    std::cout << "--------------------------------------------------------" << std::endl;
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    std::cout << "--------------------------------------------------------" << std::endl;
    for (int i = 0; i < 4; i++)
        delete animals[i];
    return 0;
}