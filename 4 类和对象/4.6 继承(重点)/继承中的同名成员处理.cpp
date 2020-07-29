#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    int m_A;
    void func()
    {
        cout << "func call in Base" << endl;
    }

    void func(int a)
    {
        cout << "func(a) call in Base" << endl;
    }
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    int m_A;
    void func()
    {
        cout << "func call in Son" << endl;
    }
};

void test01()
{
    Son s;
    cout << "m_A = " << s.m_A << endl;               //访问子类son中的m_A
    cout << "m_A in Base = " << s.Base::m_A << endl; //访问父类中的m_A，需要添加作用域解析符
}

void test02()
{
    Son s;
    s.func();
    // s.func(100); // 如果子类中出现和父类同名的成员函数，那么子类的同名成员函数会隐藏掉父类中所有的同名成员函数
    s.Base::func();
    s.Base::func(10);
}

int main()
{
    // test01();
    test02();
}