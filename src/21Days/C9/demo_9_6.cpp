#include <iostream>
#include <string>

class Human
{
private:
    int age;
    std::string name;

public:
    // 这个也是默认构造函数
    Human(std::string humansName = "Adam", int humansAge = 25)
        :name(humansName), age(humansAge)
    {
        std::cout << "Overloaded constructor creates " << name;
        std::cout << " of age " << age << std::endl;
    }
};

int main()
{
    Human adam;
    Human eve("Eve", 16);

    return 0;
}