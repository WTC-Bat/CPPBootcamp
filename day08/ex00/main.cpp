#include "easyfind.hpp"

static int getIdx(std::vector<int> vInt, int val)
{
    int     idx;

    idx = 0;
    while (idx < vInt.size())
    {
        if (vInt[idx] == val)
            return (idx);
        idx++;
    }
    return (-1);
}

int     main(int argc, char **argv)
{
    int                 i;
    std::vector<int>    cI;
    int                 idx;
    int                 iVal;
    
    if (argc > 1)
    {
        idx = 1;
        while (argv[idx] != 0)
        {
            std::stringstream(argv[idx]) >> iVal;
            if (idx == argc - 1)
                i = iVal;
            else
                cI.push_back(iVal);
            idx++;
        }
    }
    else
    {
        std::cout << "Container is empty" << std::endl;
        return (1);
    }
    if (easyfind(cI, i) == 1)
        std::cout << "Value found at index [" << getIdx(cI, i) << "]" << std::endl;
    else
        std::cout << "Value not found" << std::endl;

    return (0);
}