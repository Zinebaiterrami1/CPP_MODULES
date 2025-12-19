# include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Default Copy Constructor called" << std::endl;
    brain = new Brain(*other.brain); 
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        if(this->brain)
            delete this->brain;
        this->type = other.type;
        *this->brain = *(other.brain);
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


void Cat::setIdea(int index, const std::string& idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    if(brain)
        return (brain->getIdea(index));
    else
        return NULL;
}
