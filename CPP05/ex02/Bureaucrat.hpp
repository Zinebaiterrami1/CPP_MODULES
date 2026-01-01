#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        const std::string &getName() const;
        int getGrade() const;
        void increment_garde();
        void decrement_garde();
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();
        void signForm(Form &form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif

/*
const Bureaucrat b("Bob", 42);
b.getName();   // ❌ COMPILATION ERROR

if i use: const std::string getName();

*/