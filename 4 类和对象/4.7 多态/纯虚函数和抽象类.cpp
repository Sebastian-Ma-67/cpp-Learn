#include <iostream>
using namespace std;
/*
在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
因此可以将虚函数改为纯虚函数（在虚函数的后面加上 “ = 0 ”即可）
当类中有了纯虚函数，这个类也称之为抽象类
抽象类特点：
1、无法实例化对象
2、子类必须重写抽象类中的纯虚函数，否则该子类也属于抽象类

*/

class Base
{
public:
    virtual void func() = 0;
};

class Son : public Base
{
public:
    virtual void func()
    {
        cout << "Son's func call" << endl;
    };
};

class Son2 : public Base
{
public:
    virtual void func()
    {
        cout << "Son2's func call" << endl;
    };
};

void test01()
{
    // Base b
    // new Base
    Base *b = new Son;
    b->func();
    b = new Son2;
    b->func();
    // Son s;
}

int main()
{
    test01();
}