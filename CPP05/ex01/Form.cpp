# include "Form.hpp"

Form::Form() : name("default"), is_signed(false), grade_to_sign(150), grade_to_execute(150)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(const std::string &Name, int GradeToSign, int GardeToExecute)
    : name(Name), is_signed(false), grade_to_sign(GradeToSign), grade_to_execute(GardeToExecute)
{
    std::cout << "Parazmitrazed Constructor called" << std::endl;
    if(GradeToSign < 1 || GardeToExecute < 1)
        throw GradeTooHighException();
    else if(GradeToSign > 150 || GardeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    std::cout << "Default Copy Constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor is called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        this->is_signed = other.getIsSigned();
    }
    return (*this);
}

const std::string& Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return true;
}

int Form::getGradeToSign() const
{
    return grade_to_sign;
}

int Form::getGardeToExecute() const
{
    return grade_to_execute;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    this->is_signed = true;
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << "Name :" << form.getName()
    << " status : " << form.getIsSigned()
    << " grade required to sign it : " << form.getGradeToSign()
    << " grade required to execute it : " << form.getGardeToExecute() << std::endl;
}
