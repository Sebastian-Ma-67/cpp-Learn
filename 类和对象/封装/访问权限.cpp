#include <iostream>
using namespace std;

class Person
{
public:
    string name;

protected: //保护权限，在类外是不能访问的
    string car;

private:
    int pwd;

public:
    void func1()
    {
        name = "zhangsan";
        car = "baoshijie";
        pwd = 123456;
    }
};

int main()
{
    Person p;
    p.name = "lisi";
    p.func1();
    system("pause");
    return 0;
}