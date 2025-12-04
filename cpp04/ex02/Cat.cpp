# include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Default Copy Constructor called" << std::endl;
    *this = other;
    brain = new Brain(*other.brain); 
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
        if(this->brain)
            delete brain;
         brain = new Brain(*other.brain); //if i use this->brain = other.brain, this is a shollow copy and it cause, double free
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}



