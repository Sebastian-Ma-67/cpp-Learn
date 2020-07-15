#include <iostream>
using namespace std;
class Person
{
private:
    /* data */

public:
    Person(/* args */ int age);
    ~Person();
    Person &operator=(const Person &p)
    {
        //m_Age = p.m_Age
        //m_Age = p.m_Age // 浅拷贝

        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        // 进行深拷贝
        m_Age = new int(*p.m_Age);
        return *this; // 将自身进行返回
    };
    int *m_Age;
};

Person::Person(/* args */ int age)
{
    m_Age = new int(age); //new的结果是一个指针，需要用一个指针类型来接收
}

Person::~Person()
{
    if (m_Age != NULL)
    {
        delete m_Age;
        m_Age = NULL;
    }//浅拷贝可能会引起堆区内存重复释放的异常情况出现

    
}

void test01()
{
    Person p1(10);
    cout << "p1 = " << *p1.m_Age << endl;
    Person p2(20);
    cout << "p2 = " << *p2.m_Age << endl;
    Person p3(30);
    cout << "p3 = " << *p3.m_Age << endl;
    p3 = p2 = p1;
    cout << "p2 = " << *p2.m_Age << endl;
    cout << "p3 = " << *p3.m_Age << endl;
}
int main()
{
    test01();
}