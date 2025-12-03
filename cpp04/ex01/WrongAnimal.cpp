# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : Animal(other)
{
    std::cout << "WrongAnimal Default Copy Constructor called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal Sound" << std::endl;
}
