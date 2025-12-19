#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound(); // Woof
    a2->makeSound(); // Meow

    delete a1;
    delete a2;

    // Animal x; // error: cannot instantiate abstract class
    return 0;
}