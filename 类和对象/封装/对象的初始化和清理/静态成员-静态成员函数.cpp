#include <iostream>
using namespace std;

class Person
{
public:
    static void func()
    {
        m_A = 100;
        //m_B=10;无法区分是哪个对象的m_B属性
        cout << "static func call" << endl;
    }
    static int m_A;
    int m_B;

private:
    static void func2()
    {
        cout << "static func2 call" << endl;
    }
};

int Person::m_A;
void test01()
{
    Person p;
    p.func();

    Person::func();
    //类外访问不到私有的静态成员函数
}

int main()
{
    test01();

    return 0;
}