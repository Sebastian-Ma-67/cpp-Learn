#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "default function call" << endl;
    }
    Person(int age, int height)
    {
        m_age = age;
        m_Height = new int(height); //new会返回一个指针
        cout << "arguments function call" << endl;
    }
    Person(const Person &p)
    {
        cout << "Copy function calls" << endl;
        m_age = p.m_age;
        m_Height = new int(*p.m_Height); //深拷贝
    }
    ~Person()
    {
        cout << "Destructor call" << endl;
        //析构代码，将堆区开辟的数据做释放操作
        if (m_Height != NULL)
        {
            delete m_Height; //释放掉
            m_Height = NULL; //防止野指针出现，将其置空
            cout << "Release" << endl;
        }
    }
    int m_age;
    int *m_Height; //指针类型
};

void test01()
{
    Person p1(18, 170);
    cout << "p1's age is:" << p1.m_age << " p1's height is:" << *p1.m_Height << endl;
    Person p2(p1);
    //编译器默认进行了拷贝函数的调用，进行了一次浅拷贝
    cout << "p2's age is:" << p2.m_age << " p2's height is:" << *p2.m_Height << endl;
}
int main()
{
    test01();
    return 0;
}
/*
浅拷贝带来的问题就是堆区的内存重复释放
浅拷贝的问题要靠深拷贝解决
*/