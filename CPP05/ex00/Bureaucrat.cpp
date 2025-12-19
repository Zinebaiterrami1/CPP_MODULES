# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) 
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &Name, int Grade) : Bureaucrat()
{
    std::cout << "Paramitrazed Constructor called" << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
         throw GradeTooLowException();
    grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    std::cout << "Default copy constructor  called" << std::endl;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->name = other.getName();
        this->grade = other.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment_garde()
{
    if(getGrade() > 150)
        throw GradeTooLowException();
    grade--;
}

void Bureaucrat::decrement_garde()
{
    if(getGrade() < 1)
        throw GradeTooHighException();
    grade++;
}

