# include "AForm.hpp"

AForm::AForm() : name("default"), is_signed(false), grade_to_sign(150), grade_to_execute(150)
{
    std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(const std::string &Name, int GradeToSign, int GardeToExecute)
    : name(Name), is_signed(false), grade_to_sign(GradeToSign), grade_to_execute(GardeToExecute)
{
    std::cout << "Parazmitrazed Constructor called" << std::endl;
    if(GradeToSign < 1 || GardeToExecute < 1)
        throw GradeTooHighException();
    else if(GradeToSign > 150 || GardeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    std::cout << "Default Copy Constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Destructor is called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->is_signed = other.getIsSigned();
    }
    return (*this);
}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return true;
}

int AForm::getGradeToSign() const
{
    return grade_to_sign;
}

int AForm::getGardeToExecute() const
{
    return grade_to_execute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    this->is_signed = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
    out << "Name :" << form.getName()
    << " status : " << form.getIsSigned()
    << " grade required to sign it : " << form.getGradeToSign()
    << " grade required to execute it : " << form.getGardeToExecute() << std::endl;
}

void AForm::executeAction(Bureaucrat const & executor)
{
    if(!is_signed)
        throw FormNotSignedException();
    if(executor.getGrade() > grade_to_execute)
        throw GradeTooLowException();
    else
        throw GradeTooHighException();
}

