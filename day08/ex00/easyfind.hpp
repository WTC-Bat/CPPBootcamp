#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <sstream>
#include <vector>

template <typename T>
int     easyfind(T& cInt, int i)
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
                return (1);
            idx++;
        }
    }
    return (0);
};

#endif