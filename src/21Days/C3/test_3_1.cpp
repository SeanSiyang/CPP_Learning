#include <iostream>

int main()
{
    enum YourCards {
        Ace,
        Jack,
        Queen = 45,
        King
    };

    // YourCards name = Queen;

    std::cout << "Queen = " << Queen << "\n";


}