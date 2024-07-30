#include "../../../include/std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    std::string previous = " ";
    std::string current;
    while (std::cin >> current)
    {
        ++number_of_words;
        if (previous == current)
        {
            std::cout << "Word number " << number_of_words
                      << " repeated: " << current << '\n';
        }
        previous = current;
    }

    return 0;
}