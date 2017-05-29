#include "Bureaucrat.hpp"

#pragma region Constructors

    Bureaucrat::Bureaucrat(void)
    {
        this->_name = "";
        this->_grade = 150;
    }

    Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
    {
        *this = bureaucrat;
    }

    Bureaucrat::Bureaucrat(std::string name)
    {
        this->_name = name;
        this->_grade = 150;
    }

    Bureaucrat::Bureaucrat(int score)
    {
        this->_name = "";
        if (score < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (score > 150)
            throw Bureaucrat::GradeTooHighException();
        this->_grade = score;
    }

    Bureaucrat::Bureaucrat(std::string name, int score)
    {
        this->_name = name;
        if (score < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (score > 150)
            throw Bureaucrat::GradeTooHighException();
        this->_grade = score;
    }

#pragma endregion Constructors

#pragma region Destructors

    Bureaucrat::~Bureaucrat(void)
    {
        return ;
    }

#pragma endregion Destructors

#pragma region Operator Overloads

    Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
    {
        this->_name = bureaucrat.getName();
        this->_grade = bureaucrat.getScore();

        return (*this);
    }

#pragma endregion Operator Overloads

#pragma region Member Functions

    std::string Bureaucrat::getName(void) const
    {
        return (this->_name);
    }

    int         Bureaucrat::getScore(void) const
    {
        return (this->_grade);
    }

    void        Bureaucrat::incrementScore(void) const
    {
        if (this->_grade <= 1)
            throw Bureaucrat::GradeTooLowException();
        this->_grade--;
    }

    void        Bureaucrat::decrementScore(void) const
    {
        if (this->_grade >= 150)
            throw Bureaucrat::GradeTooHighException();
        this->_grade++;
    }

#pragma endregion Member Functions