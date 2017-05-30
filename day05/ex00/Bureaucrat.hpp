#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <sstream>
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
        Bureaucrat  &operator=(const Bureaucrat& bureaucrat);

        /* Getters */
        std::string getName(void) const;
        int         getGrade(void) const;
        void        setGrade(const int newGrade);
        void        incrementGrade(void); //const?
        void        decrementGrade(void); //const?

        /* Exceptions */
        class       GradeTooLowException : public std::exception
        {
            public:
                /* Constructors */
                GradeTooLowException(void);
                GradeTooLowException(const GradeTooLowException& ex);

                /* Destructors */
                ~GradeTooLowException(void) throw();

                /* Operator Overloads */
                GradeTooLowException&   operator=(const GradeTooLowException& ex);

                virtual const char*     what() const throw();
        };

        class       GradeTooHighException : public std::exception
        {
            public:
                /* Constructors */
                GradeTooHighException(void);
                GradeTooHighException(const GradeTooHighException& ex);

                /* Destructors */
                ~GradeTooHighException(void) throw();

                /* Operator Overloads */
                GradeTooHighException&  operator=(const GradeTooHighException& ex);

                virtual const char*     what(void) const throw();
        };
};

std::ostream& operator<<(std::ostream &ostr, const Bureaucrat &bureaucrat);

#endif
