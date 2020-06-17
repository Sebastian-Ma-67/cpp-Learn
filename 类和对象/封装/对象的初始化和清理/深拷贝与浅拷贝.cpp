#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "默认构造函数的调用" << endl;
    }
    Person(int age)
    {
        m_age = age;
        cout << "有参构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "析构函数调用" << endl;
    }
    int m_age;
    int *
};

void test01()
{
    Person p1(18);
    cout << "p1 的年龄为" << p1.m_age << endl;
    Person p2(p1);//编译器默认进行了拷贝函数的调用，进行了一次浅拷贝
    cout << "p2 的年龄为" << p2.m_age << endl;
}
int main()
{
    test01();
    return 0;
}