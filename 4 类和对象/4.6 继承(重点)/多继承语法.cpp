#include <iostream>
// 在实际开发过程中是不建议使用多继承的,容易产生二义性
class Base1
{
public:
    Base1()
    {
        m_A = 100;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_A = 200;
        m_B = 200;
    }
    int m_A;
    int m_B;
};

class Son : public Base1, public Base2
{
public:
    Son()
    {
        m_C = 300;
        m_D = 400;
    }
    int m_C;
    int m_D;
};

void test01()
{
    Son s;
    std::cout << "size of s = " << sizeof(s) << std::endl;
    std::cout << "s.Base1::m_A = " << s.Base1::m_A << std::endl;
    std::cout << "s.Base2::m_A = " << s.Base2::m_A << std::endl;
}

int main()
{
    test01();
    return 0;
}