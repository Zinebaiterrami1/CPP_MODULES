# include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Default Copy Constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
}
