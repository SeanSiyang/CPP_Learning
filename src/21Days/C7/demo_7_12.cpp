#include <iostream>
#include <algorithm>
#include <vector>

void DisplayNums(std::vector<int>& dynArray)
{
    for_each (dynArray.begin(), dynArray.end(), 
    [](int Element){std::cout << Element << std::endl;});

    std::cout << "\n";
}

int main()
{
    std::vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);
    
    DisplayNums(myNums);

    std::cout << "Sorting them in descending order" << std::endl;

    std::sort(myNums.begin(), myNums.end(), [](int Num1, int Num2) {return Num2 < Num1;});
    DisplayNums(myNums);
    return 0;

}