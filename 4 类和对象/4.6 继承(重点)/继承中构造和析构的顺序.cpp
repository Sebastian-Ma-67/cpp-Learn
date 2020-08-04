#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "this is base constructor"
                  << "\n";
    }
    ~Base()
    {
        std::cout << "this is base destructor"
                  << "\n";
    }
};

class Son : public Base
{
public:
    Son()
    {
        std::cout << "this is son constructor"
                  << "\n";
    }
    ~Son()
    {
        std::cout << "this is son destructor"
                  << "\n";
    }
};

void test01()
{
    Base b;
    Son s;
}

int main()
{
    test01();
    return 0;
}