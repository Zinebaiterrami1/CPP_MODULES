# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain Default Copy Constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
    if(index >= 0 && index < 100)
    {
        this->ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index)
{
    if(index >= 0 && index < 100)
    {
        return ideas[index];
    }
    return "";
}
