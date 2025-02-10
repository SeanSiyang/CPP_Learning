#include "../../../include/std_lib_facilities.h"

int main() 
{
    // std::cout << "Please enter your first name (followed by 'enter'):\n";

    std::string first_name = " ";
    // std::cin >> first_name;

    // std::cout << "Hello, " << first_name << "!\n";

    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;

    std::cout << "Dear, " << first_name << ",\n";

    std::cout << "  How are you? I am fine. I miss you.\n";

    std::string friend_name = " ";
    std::cout << "Enter the name of another friend:\n";
    std::cin >> friend_name;

    std::cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex = 0;
    std::cout << "Please enter the sex of your friend(male-m, female-f): \n";
    std::cin >> friend_sex;

    if (friend_sex == 'm') {
        std::cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    else {
        std::cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    std::cout << "Please enter the age of your friend: \n";
    int age = -1;
    std::cin >> age;
    
    std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age <= 0 && age >= 110) {
        simple_error("you'r kidding!");
    } else if (age < 12) {
        std::cout << "Next year you will be " << age + 1 << "\n";
    } else if (age == 17) {
        std::cout << "Next year you will be able to vote.\n";
    } else if (age > 70) {
        std::cout << "I hope you are enjoying retirement.\n";
    }

    std::cout << "Yours sincerely, \n\n";
    std::cout << first_name << "\n";
}
