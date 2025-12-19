# include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Default Copy Constructor called" << std::endl;
    *this = other;
    brain = new Brain(*other.brain); 
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
         brain = new Brain(*other.brain); 
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
}
