#include <iostream>
#include <vector>

extern std::vector<char> wrong_guesses;

void print_wrong_guesses()
{
    if (wrong_guesses.size() > 0)
    {
        std::cout << "Wrong guesses: ";
        for (char letter : wrong_guesses)
        {
            std::cout << letter << " ";
        }
        std::cout << std::endl;
    }
}