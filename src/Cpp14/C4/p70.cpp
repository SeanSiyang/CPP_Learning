#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> words;
    std::string disliked = "damn";

    for (std::string temp; std::cin >> temp;)
        words.push_back(temp);

    std::cout << "Number of words: " << words.size() << '\n';

    std::sort(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++) {
        if (words[i] == disliked)
            std::cout << "BLEEP" << "\n";
        else if (i == 0 || words[i-1] != words[i])
            std::cout << words[i] << "\n";
    }

    return 0;
}