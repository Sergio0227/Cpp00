#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc >= 2)
    {
        int i = 1;
        while (argv[i])
        {
            while (*argv[i])
            {
                *argv[i] = toupper(*argv[i]);
                std::cout << *argv[i];
                argv[i]++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}
