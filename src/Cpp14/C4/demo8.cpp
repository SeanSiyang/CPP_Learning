#include <iostream>
#include <string>
#include <limits> // 用于清除输入错误

int main()
{
    double value = 0.0;
    double max = 0.0, min = 0.0;
    bool first_input = true;
    std::string unit = "null";
    double sum = 0.0, nums = 0.0;
    /**
     * 1m == 100cm
     * 1in == 2.54cm
     * 1ft == 12in
     */

    // while (true) {
    //     if (!(std::cin >> value >> unit))
    //         if (std::cin.eof()) break;
    // }
    
    //while (std::cin >> value >> unit) {
    while (true) {

        if (!(std::cin >> value >> unit)) {
            if (std::cin.eof()) break;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        if (unit != "m" && unit != "cm" && unit != "in" && unit != "ft") {
            std::cerr << "Error: Invalid unit '" << unit << "'. Allowed units are m, cm, in, ft.\n";
            continue;
        }
        
        std::cout << "current value is: " << value << " and unit is: " << unit << '\n';
        if (unit != "m") {
            if (unit == "cm")
                sum += value / 100.0;
            else if (unit == "in") 
                sum += value * 2.54 / 100.0;
            else if (unit == "ft")
                sum += value * 12 * 2.54 / 100.0;
        } else if (unit == "m")
            sum += value;
        //sum += value;
        nums++;

        if (first_input) {
            max = min = value;
            first_input = false;
        } else {
            // 处理最大最小值
            if (value > max) {
                max = value;
                std::cout << "The largest so far.\n";
            }
            else if (value < min) {
                min = value;
                std::cout << "The smallest so far.\n";
            } 
            
            // 单位转换
            if (unit == "cm") {
                std::cout << value << " " << unit << " == " << value / 100.0 << " m\n";
                std::cout << value << " " << unit << " == " << value / 2.54 << " in\n";
                std::cout << value << " " << unit << " == " << value / 2.54 / 12.0 << " ft\n";
            } else if (unit == "in") {
                std::cout << value << " " << unit << " == " << value * 2.54 << " cm\n";
                std::cout << value << " " << unit << " == " << value / 12.0 << " ft\n";
                std::cout << value << " " << unit << " == " << value * 2.54 / 100.0 << " m\n";
            } else if (unit == "ft") {
                std::cout << value << " " << unit << " == " << value / 12.0 * 2.54 << " cm\n";
                std::cout << value << " " << unit << " == " << value / 12.0 * 2.54 / 100.0 << " m\n";
                std::cout << value << " " << unit << " == " << value * 12.0 << " in\n";
            } else if (unit == "m") {
                std::cout << value << " " << unit << " == " << value * 100.0 / 2.54 / 12.0 << " ft\n";
                std::cout << value << " " << unit << " == " << value * 100.0 / 2.54 << " in\n";
                std::cout << value << " " << unit << " == " << value * 100.0 << " cm\n";
            }
        }
        
    }

    std::cout << "The max of value is: " << max << "\n";
    std::cout << "The min of value is: " << max << "\n";
    std::cout << "The accounts of value is: " << nums << "\n";
    std::cout << "The sum of the values is: " << sum << " m\n";
    
    return 0;
}