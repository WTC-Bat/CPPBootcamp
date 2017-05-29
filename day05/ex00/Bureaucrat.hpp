#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        /* Fields */
        const std::string   _name;
        int                 _grade; //1 - 150

    public:
        /* Constructors */
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat(std::string name);
        Bureaucrat(int grade);
        Bureaucrat(std::string name, int grade);

        /* Destructors */
        ~Bureaucrat(void);

        /* Operator Overloads */
        Bureaucrat&  operator=(const Bureaucrat& bureaucrat);

        /* Getters */
        std::string getName(void) const;
        int         getScore(void) const;
        void        incrementScore(void) const; //const?
        void        decrementScore(void) const; //const?

        /* Exceptions */
        class       GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("");
            }
        };

        class       GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("");
            }
        };
};

#endif
