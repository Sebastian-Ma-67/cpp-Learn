#include <iostream>
using namespace std;
#include <string>
// 类对象作为类成员

class Phone
{
public:
    Phone(string p_brand)
    {
        m_brand = p_brand;
        cout << "phone constructor" << endl;
    }
    ~Phone()
    {
        cout << "phone destructor" << endl;
    }
    string m_brand;
};

class Person
{
public:
    Person(string name, string p_brand) : m_name(name), m_phone(p_brand) //隐式转换法
    {
        cout << "person constructor" << endl;
    }
    ~Person()
    {
        cout << "person destructor" << endl;
    }
    string m_name;
    Phone m_phone;
};

// 当其他类对象作为本类成员，构造函数先构造类对象，在构造自身。析构的顺序?先进后出原则

void test01()
{
    Person p("zhangsan", "apple");
}

int main()
{
    test01();
    return 0;
}