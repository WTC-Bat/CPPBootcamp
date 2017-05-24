#include <iostream>

int     main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int idx = 1; idx < argc; idx++)
            for (size_t cidx = 0; cidx < strlen(argv[idx]); cidx++)
                if (argv[idx][cidx] != '\"' && argv[idx][cidx] != '\'')
                    std::cout << (char)toupper(argv[idx][cidx]);
		std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
