#include <iostream>
using namespace std;
//this 指针的用处
/*
1、解决名称冲突
2、返回对象本身 用*this
*/

class Person
{
public:
    Person(int age)
    {
        this->m_age = age; //this指针指向被调用的成员函数所属的对象
    }
    Person &PersonAddAge(Person &p)
    {
        this->m_age += p.m_age;
        return *this;
    }

    Person PersonAddAge2(Person &pSample)
    {
        this->m_age += pSample.m_age;
        Person p = *this;
        return p;
    }
    int m_age;
};

void test01()
{
    Person p(18);
    cout << "p's age is: " << p.m_age << endl;
}

void test02()
{
    Person p1(10);
    Person p2(10);
    p2.PersonAddAge(p1);
    cout << "p2's age is: " << p2.m_age << endl;
    //链式编程
    p2.PersonAddAge(p1).PersonAddAge(p2).PersonAddAge(p1);//引用传递
    cout << "p2's age is: " << p2.m_age << endl;

    p2.PersonAddAge2(p1).PersonAddAge2(p2).PersonAddAge2(p1);//值传递
    cout << "p2's age is: " << p2.m_age << endl;
    
}

int main()
{
    test01();

    test02();
    return 0;
}