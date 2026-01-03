# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target)
{
    std::cout << "Default copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Target) :  AForm("ShrubberyCreationForm", 145, 137), target(Target)
{
    std::cout << "Paramitrazed Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    executeAction(executor);
    std::string outfile =  target + "_shrubbery" ;
    std::ofstream outputFile(outfile.c_str());
    if(outputFile.is_open())
    {
    std::cout << "      /\
                       /**\
                      /****\
                     /******\
                    /********\
                        ||" << std::endl;
    outputFile.close();
    }
    else
        //throw exception
}