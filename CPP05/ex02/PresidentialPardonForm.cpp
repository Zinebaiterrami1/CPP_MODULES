#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) ,target("default")
{
    std::cout << "Default Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : AForm("PresidentialPardonForm", 25, 5),target(target)
{
    std::cout << "Paramitrazed Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other),target(other.target)
{
    std::cout << "Default Copy Constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) 
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    executeAction(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
