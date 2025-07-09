#include <iostream>
#include <string.h>

class MyString
{
private:
    char* buffer;

public:
    MyString(const char* initString) // constructor
    {
        buffer = NULL;
        std::cout << "Default constructor: creating new MyString" << std::endl;

        if (initString != NULL)
        {
            buffer = new char[strlen(initString) + 1];
            strcpy(buffer, initString);

            std::cout << "buffer points to: " << std::hex << (unsigned int*)buffer << std::endl;
        }
    }

    MyString(const MyString& copySource) // Copy constructor
    {
        buffer = NULL;

        std::cout << "Copy constructor: copying from MyString" << std::endl;

        if (copySource.buffer != NULL)
        {
            // allocate own buffer
            buffer = new char[strlen(copySource.buffer) + 1];

            // deep copy from the source into local buffer
            strcpy(buffer, copySource.buffer);

            std::cout << "buffer points to: " << std::hex << (unsigned int*)buffer << std::endl;
        }
    }

    ~MyString() // Destructor
    {
        std::cout << "Invoking destructor, cleaning up" << std::endl;
        delete[] buffer;
    }

    int GetLength()
    { return strlen(buffer); }

    const char* GetString()
    { return buffer; }
};

void UseMyString(MyString str)
{
    std::cout << "String buffer in sayHello is " << str.GetLength();
    std::cout << " characters long" << std::endl;

    std::cout << "Buffer contains: " << str.GetString() << std::endl;
    return;
}

int main()
{
    MyString sayHello("Hello from String Class");
    UseMyString(sayHello);

    return 0;
}