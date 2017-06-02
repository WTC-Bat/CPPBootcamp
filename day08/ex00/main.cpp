#include "easyfind.hpp"

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
    easyfind(cI, i);
}