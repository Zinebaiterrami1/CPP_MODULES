# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

int main()
{

    // std::cout << "\n=== Test tableau d'Animals ===" << std::endl;
    // {
    //     const int size = 4;
    //     const Animal* animals[size];

    //     for (int i = 0; i < size; i++)
    //     {
    //         if (i < size / 2)
    //             animals[i] = new Dog();
    //         else
    //             animals[i] = new Cat();
    //     }

    //     for (int i = 0; i < size; i++)
    //         delete animals[i];
    // }

    std::cout << "\n=== Test deep copy Dog ===" << std::endl;
    {
        Dog dog1;
        dog1.setIdea(0, "I love bones");

        Dog dog2 = dog1;
        dog2.setIdea(0, "I want to play");

        std::cout << "Dog1 idea: " << dog1.getIdea(0) << std::endl;
        std::cout << "Dog2 idea: " << dog2.getIdea(0) << std::endl;
    }


        std::cout << "\n=== Test deep copy Cat ===" << std::endl;
    {
        Cat Cat1;
        Cat1.setIdea(0, "I love bones");

        Cat Cat2 = Cat1;
        Cat2.setIdea(0, "I want to play");

        std::cout << "Cat1 idea: " << Cat1.getIdea(0) << std::endl;
        std::cout << "Cat2 idea: " << Cat2.getIdea(0) << std::endl;
    }
}
