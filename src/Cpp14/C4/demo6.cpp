#include <iostream>

int main()
{
    double value = 0.0;
    double max = 0.0, min = 0.0;
    bool first_input = true;


    while (std::cin >> value) {
        std::cout << "current value is: " << value << '\n';
        
        if (first_input) {
            max = min = value;
            first_input = false;
        } else {
            if (value > max) {
                max = value;
                std::cout << "The largest so far.\n";
            }
            else if (value < min) {
                min = value;
                std::cout << "The smallest so far.\n";
            } 
                
        }
        
    }

    return 0;
}