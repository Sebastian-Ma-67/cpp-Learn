#include <iostream>
using namespace std;

class Person
{
public:
    static int m_Age; //所有对象共享同一个数据，有点类似于指针
};
int Person::m_Age = 10;//类内声明，类外初始化
void test01()
{
    Person p;
    //p.m_Age = 10;
    cout << p.m_Age << endl;

    Person p2;
    p2.m_Age = 20;
    cout << p.m_Age << endl;
    // 访问方式有两种，1、通过对象进行访问；2、通过类名进行访问
    cout << Person::m_Age << endl;
    // 静态成员变量也是有访问权限的，类外是访问不了私有的静态成员变量的
}

int main()
{
    test01();
    return 0;
}