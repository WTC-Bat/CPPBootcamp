#include "Bureaucrat.hpp"

/* Constructors */
Bureaucrat::Bureaucrat(void) : _name("")
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
    *this = bureaucrat;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(int grade) : _name("")
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

/* Destructors */
Bureaucrat::~Bureaucrat(void)
{
    return ;
}

/* Operator Overloads */
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
    this->_grade = bureaucrat.getGrade();

    return (*this);
}

std::ostream& operator<<(std::ostream &ostr, const Bureaucrat &bureaucrat)
{
    ostr << bureaucrat.getName() << ", bureaucrat grade " 
            << bureaucrat.getGrade() << std::endl;
    return (ostr);
}

/* Getters */
std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int         Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

/* Setters */
void        Bureaucrat::setGrade(const int newGrade)
{
    if (newGrade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (newGrade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = newGrade;
}

/* Member Functions */
void        Bureaucrat::incrementGrade(void)
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooLowException();
    this->_grade--;
}

void        Bureaucrat::decrementGrade(void)
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade++;
}

/* Exceptions */
Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException
    (const Bureaucrat::GradeTooLowException& ex)
{
    *this = ex;

    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooLowException
    &Bureaucrat::GradeTooLowException::operator=
        (const Bureaucrat::GradeTooLowException& ex)
{
    std::exception::operator=(ex);

    return (*this);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("\"Bureaucrat::_grade\" cannot be less than 1");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException
    (const Bureaucrat::GradeTooHighException& ex)
{
    *this = ex;

    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooHighException
    &Bureaucrat::GradeTooHighException::operator=
        (const Bureaucrat::GradeTooHighException& ex)
{
    std::exception::operator=(ex);

    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("\"Bureaucrat::_grade\" cannot be more that 150");
}