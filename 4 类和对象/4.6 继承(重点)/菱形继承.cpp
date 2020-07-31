#include <iostream>
using namespace std;

class Animal
{
public:
    int m_Age;
};

class Sheep : virtual public Animal
{
public:
};

class Camel : virtual public Animal
{
public:
};

class Alpaca : public Sheep, public Camel
{
public:
};

void test01()
{
    Alpaca al;
    std::cout << "size of al = " << sizeof(al) << std::endl;
    al.Camel::m_Age = 18;
    al.Sheep::m_Age = 20;
    std::cout << "size of al = " << sizeof(al) << std::endl;
    cout << " al.Camel::m_Age = " << al.Camel::m_Age << endl;
    cout << " al.Sheep::m_Age = " << al.Sheep::m_Age << endl;
    cout << " al.m_Age = " << al.m_Age << endl;
}

// 利用虚继承可以解决菱形继承的问题 在继承之间加上virtual Animal为虚基类,所有的age为共有的一份数据
// vbptr 虚基类指针；指向一个叫vbtable（虚基类表）
/*
v - virtual
b - base
ptr - pointer
*/

int main()
{
    test01();
    return 0;
}