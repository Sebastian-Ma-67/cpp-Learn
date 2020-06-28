#include <iostream>
using namespace std;
/*
常函数
常对象
*/
class Person
{

public:
    //this指针的本质是指针常量,指针的指向是不可以修改的!!!
    void showPerson() const //在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改,即常函数
    {
        //m_A = 100;
        m_B = 100;
        cout << "m_B = ? " << m_B << endl;
    }
    void func()
    {
        m_A = 100;
    }

    Person()
    {
        m_A = 10;
        m_B = 20;
    }
    int m_A;
    mutable int m_B; //加上mutable之后，该成员变量就可以在常函数中修改了
};

void test01()
{
    Person p;
    p.showPerson();
}

void test02()
{
    const Person p2; //常对象只能调用常函数
    p2.showPerson();
    //p.m_A = 100;
    p2.m_B = 200; //在常对象下也可以进行修改
    //p.func();
    p2.showPerson();
}

int main()
{
    test01();
    test02();
    return 0;
}