#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class Span
{
    private:
        unsigned int        _elementCount;
        std::vector<int>    _elements;

        int                 getSmallestElement(void) const;
        int                 getNextSmallest(void) const;
        int                 getLargestElement(void) const;
    
    public:
        /* Constructors */
        Span(void);
        Span(const Span& span);
        Span(unsigned int elementCount);

        /* Destructors */
        ~Span(void);

        /* Operator Overloads */
        Span&               operator=(const Span& span);

        /* Member Functions */
        void                addNumber(const int n);
        int                 shortestSpan(void) const;
        int                 longestSpan(void) const;
        unsigned int        getElementCount(void) const;
        std::vector<int>    getElements(void) const;

        /* Exceptions */
        class TooFewNumbersException : public std::exception
        {
            public:
                TooFewNumbersException(void);
                TooFewNumbersException(const TooFewNumbersException& ex);

                ~TooFewNumbersException(void) throw();

                TooFewNumbersException& operator=(const Span::TooFewNumbersException& ex);

                virtual const char*     what() const throw();
        };

        // class NoStoredNumbersException : public std::exception
        // {
        //     public:
        //         NoStoredNumbersException(void);
        //         NoStoredNumbersException(const NoStoredNumbersException& ex);

        //         ~NoStoredNumbersException(void) throw();

        //         NoStoredNumbersException&    operator=(const NoStoredNumbersException& ex);

        //         virtual const char* what() const throw();
        // };

        // class TooManyNumbersException : public std::exception
        // {
        //     public:
        //         TooManyNumbersException(void);
        //         TooManyNumbersException(const TooManyNumbersException& ex);

        //         ~TooManyNumbersException(void) throw();

        //         TooManyNumbersException&    operator=(const TooManyNumbersException& ex);

        //         virtual const char*         what() const throw();
        // };
        
};

#endif