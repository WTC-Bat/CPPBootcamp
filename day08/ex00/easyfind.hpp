#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <sstream>
#include <vector>

template <typename T>
void    easyfind(T& cInt, int i)
{
    typename T::iterator    b;
    typename T::iterator    e;
    int                     idx;

    std::cout << "Looking for: " << i << std::endl;
    if (cInt.size() > 0)
    {
        b = cInt.begin();
        e = cInt.end();
        idx = 0;
        while (idx < cInt.size())
        {
            if (cInt[idx] == i)
            {
                std::cout << "Found!" << std::endl << "Index: " << idx << " (position no.: " << (idx + 1) << ")" << std::endl << "Value: " << cInt[idx] << std::endl;
                return ;
            }
            idx++;
        }
        std::cout << "Value not found in container" << std::endl;
    }
    else
    {
        std::cout << "Container is empty" << std::endl;
    }
};

#endif