    #include "span.hpp"

Span::Span(void) : _elementCount(0)
{
    return ;
}

Span::Span(const Span& span)
{
    *this = span;
}

Span::Span(unsigned int elementCount)
{
    this->_elementCount = elementCount;
}

Span::~Span(void)
{
    //remove all elements?
    return ;
}

Span&               Span::operator=(const Span& span)
{
    this->_elementCount = span.getElementCount();
    return (*this);
}

void                Span::addNumber(const int n)
{
    // if (this->_elements.size() >= this->_elementCount)
    //     throw Span::TooManyNumbersException();
    this->_elements.push_back(n);
}

int                 Span::getSmallestElement(void) const
{
    int     smallest;

    smallest = -1;
    for (int i = 0; i < this->_elements.size(); i++)
    {
        if (i == 0)
            smallest = this->_elements[i];
        if (this->_elements[i] < smallest)
            smallest = this->_elements[i];
    }
    return (smallest);
}

int                 Span::getNextSmallest(void) const
{
    int     smallest;
    int     nextSmallest;

    smallest = this->getSmallestElement();
    nextSmallest = this->getLargestElement();
    for (int i = 0; i < this->_elements.size(); i++)
    {
        if (this->_elements[i] > smallest && this->_elements[i] < nextSmallest)
            nextSmallest = this->_elements[i];
    }
    return (nextSmallest);
}

int                 Span::getLargestElement(void) const
{
    int     largest;

    largest = -1;
    for (int i = 0; i < this->_elements.size(); i++)
    {
        if (i == 0)
            largest = this->_elements[i];
        if (this->_elements[i] > largest)
            largest = this->_elements[i];
    }
    return (largest);
}

int                 Span::shortestSpan(void) const
{
    // if (this->_elements.size() == 0 || this->_elementCount == 0)
    //     throw Span::NoStoredNumbersException();
    if (this->_elements.size() < 2)
        throw Span::TooFewNumbersException();
    return (this->getNextSmallest() - this->getSmallestElement());
}

int                 Span::longestSpan(void) const
{
    // if (this->_elements.size() == 0 || this->_elementCount == 0)
    //     throw Span::NoStoredNumbersException();
    if (this->_elements.size() < 2)
        throw Span::TooFewNumbersException();
    return (this->getLargestElement() - this->getSmallestElement());
}

unsigned int        Span::getElementCount(void) const
{
    return (this->_elementCount);
}

std::vector<int>    Span::getElements(void) const
{
    return (this->_elements);
}

Span::TooFewNumbersException::TooFewNumbersException(void)
{
    return ;
}

Span::TooFewNumbersException::TooFewNumbersException
    (const Span::TooFewNumbersException::TooFewNumbersException& ex)    //? const Span::TooFewNumbersException* ex
{
    *this = ex;
}

Span::TooFewNumbersException::~TooFewNumbersException(void) throw()
{
    return ;
}

Span::TooFewNumbersException&
    Span::TooFewNumbersException::operator=
        (const Span::TooFewNumbersException& ex);
{
    std::exception::operator=(ex);

    return (*this);
}

const char* Span::TooFewNumbersException::TooFewNumbersException::what(void) const throw()
{
    return ("There are too few numbers in \"Span\" to retrieve a span between two numbers");
}

/* TooManyNumbersException */

// Span::TooManyNumbersException::TooManyNumbersException(void)
// {
//     return ;
// }

// Span::TooManyNumbersException::TooManyNumbersException
//     (const Span::TooManyNumbersException::TooManyNumbersException& ex)    //? const Span::TooManyNumbersException* ex
// {
//     *this = ex;
// }

// Span::~TooManyNumbersException(void)
// {
//     return ;
// }

// Span::TooManyNumbersException::TooManyNumbersException&
//     Span::TooManyNumbersException::TooManyNumbersException::operator=
//         (const Span::TooManyNumbersException::TooManyNumbersException& ex);
// {
//     std::exception::operator=(ex);

//     return (*this);
// }

// const char* Span::TooManyNumbersException::TooManyNumbersException::what(void) const throw()
// {
//     return ("There are too few numbers in \"Span\" to retrieve a span between two numbers");
// }

// /* NoStoredNumbersException */

// Span::NoStoredNumbersException::NoStoredNumbersException(void)
// {
//     return ;
// }

// Span::NoStoredNumbersException::NoStoredNumbersException
//     (const Span::NoStoredNumbersException::NoStoredNumbersException& ex)    //? const Span::NoStoredNumbersException* ex
// {
//     *this = ex;

//     return (*this);   
// }

// Span::NoStoredNumbersException::~NoStoredNumbersException(void)
// {
//     return ;
// }

// Span::NoStoredNumbersException::NoStoredNumbersException&
//     Span::NoStoredNumbersException::NoStoredNumbersException::operator=
//         (const Span::NoStoredNumbersException::NoStoredNumbersException& ex);
// {
//     std::exception::operator=(ex);

//     return (*this);
// }

// const char* Span::NoStoredNumbersException::NoStoredNumbersException::what(void) const throw()
// {
//     return ("There are too few numbers in \"Span\" to retrieve a span between two numbers");
// }