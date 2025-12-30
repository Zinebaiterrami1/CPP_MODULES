# ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form();
        Form(const std::string &Name, int GradeToSign, int GardeToExecute);
        Form(const Form &other);
        ~Form();
        Form& operator=(const Form& other);
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is Too High, Out of Bounds";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is Too Low, Out of Bounds"; 
                }
        };
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGardeToExecute() const;
        void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif 