# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
    std::cout << "Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target)
{
    std::cout << "Default Copy Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", 72, 45), target(Target)
{
    std::cout << "Paramitrezd Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    executeAction(executor);
    std::srand(std::time(NULL));
    std::cout << "* drilling noises *" << std::endl;
    if(std::rand() % 2)
        std::cout << target << " has been robotomized successfully " << std::endl;
    else
        std::cout << "robotomy failed on " << target << std::endl;
}
