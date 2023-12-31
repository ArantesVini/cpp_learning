#include <iostream>
#include <map>
#include <string>

extern std::map<char, bool> right_guesses;
extern std::string secret_word;

void print_word_with_guesses()
{
    for (char letter : secret_word)
    {
        if (right_guesses[letter])
        {
            std::cout << letter << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
}