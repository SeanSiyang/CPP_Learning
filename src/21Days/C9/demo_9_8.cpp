#include <iostream>
#include <string.h>

class MyString
{
private:
    char* buffer;

public:
    MyString(const char* initString)
    {
        buffer = NULL;
        if (initString != NULL)
        {
            buffer = new char[strlen(initString) + 1];
            strcpy(buffer, initString);
        }
    }

    ~MyString()
    {
        std::cout << "Invoking destructor, cleaning up" << std::endl;
        delete[] buffer;
    }

    int GetLength()
    { return strlen(buffer); }

    const char* GetString()
    { return buffer; }
};

void UseMyString(MyString str) // 浅拷贝
{
    std::cout << "String buffer in sayHello is " << str.GetLength();
    std::cout << " characters long" << std::endl;

    std::cout << "Buffer contains: " << str.GetString() << std::endl;
    return;
}

int main()
{
    MyString sayHello("Hello from String Class");
    UseMyString(sayHello);  // 该函数结束时会释放拷贝对象的内存

    // main结束以后，会再次释放，导致报错

    return 0;
}

