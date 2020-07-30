#include <iostream>

class Base
{
public:
    static int m_A; //类内声明，类外初始化
    static void func()
    {
        std::cout << "this is func in Base" << std::endl;
    }
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;
    static void func()
    {
        std::cout << "this is func in Son" << std::endl;
    }
};

int Son::m_A = 200;

void test01()
{
    Son s;

    //通过对象的方式进行访问
    std::cout << "m_A in Son = " << s.m_A << std::endl;
    std::cout << "m_A in Base = " << s.Base::m_A << std::endl;

    //通过类名的方式进行访问
    std::cout << "m_A in Son class " << Son::m_A << std::endl;
    std::cout << "m_A in Base class = " << Base::m_A << std::endl;

    s.func();
    s.Base::func();

    Son::func();
    Son::Base::func();
}

int main()
{
    test01();
    return 0;
}