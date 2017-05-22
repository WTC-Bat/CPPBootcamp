#include <iostream>

int     main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int idx = 0; idx < argc; idx++)
        {
            for (int cidx = 0; cidx < strlen(argv[idx]); cidx++)
            {
                if (argv[idx][cidx] != '\"' && argv[idx][cidx] != '\'')
                {
                    std::cout << toupper(argv[idx][cidx]);
                }
            }
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
}