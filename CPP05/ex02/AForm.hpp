# ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        AForm();
        AForm(const std::string &Name, int GradeToSign, int GardeToExecute);
        AForm(const AForm &other);
        virtual ~AForm();
        AForm& operator=(const AForm& other);
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
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Form is Not Signed";
                }
        };
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGardeToExecute() const;
        void beSigned(const Bureaucrat &bureaucrat);

        virtual void execute(Bureaucrat const & executor) const = 0;
        void executeAction(Bureaucrat const & executor);
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif 