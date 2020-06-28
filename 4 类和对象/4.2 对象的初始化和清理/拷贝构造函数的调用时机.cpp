#include <iostream>
using namespace std;
//拷贝构造函数的调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象

class Person
{
private:
public:
    int m_age;
    Person()
    {
        cout << "无参构造函数调用" << endl;
    }
    Person(int age)
    {
        cout << "有参构造函数调用" << endl;
        m_age = age;
    }
    Person(const Person &p)
    {
        cout << "拷贝构造函数调用" << endl;
        m_age = p.m_age;
    }
    ~Person()
    {
        cout << "析构构造函数调用" << endl;
    }
};

void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "p2的年龄" << p2.m_age << endl;
}

//2、值传递的方式给函数参数传值

void doWork(Person p) //本质上调用了拷贝函数
{
}
void test02()
{
    Person p3;
    doWork(p3);
}

//3、值方式返回局部对象（现在C++已经给优化了，直接地址传递了）

Person doWork2()
{
    Person p4;
    return p4;
}
void test03()
{
    Person P5 = doWork2();
}
int main()
{
    //test01();
    //test02();
    test03();
    return 0;
}