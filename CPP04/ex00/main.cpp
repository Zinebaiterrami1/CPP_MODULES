# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* c = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    c->makeSound();
    delete i;
    delete j;
    delete meta;
    delete c;
    return (0);
}