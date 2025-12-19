# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    type = "default";
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal Default Copy Constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}
