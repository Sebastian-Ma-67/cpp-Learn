#include <iostream>
using namespace std;

class Person
{
public:
    static void func()
    {
        cout << "static func call" << endl;
    }
};

void test01()
{
    Person p;
    p.func();

    Person::func();
}

int main()
{
    test01();

    return 0;
}