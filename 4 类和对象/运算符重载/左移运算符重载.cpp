#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person &p);

public:
    // 利用成员函数重载左移运算符,但是我们不会利用成员函数重载<<运算符，因为无法实现cout在左侧，只能利用全局函数来重载
    // void operator<<()
    // {
    // return cout
    // }
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

private:
    int m_A;
    int m_B;
};

ostream &operator<<(ostream &cout, Person &p)
{
    cout << p.m_A << " : " << p.m_B << endl;
    return cout;
}

void test01()
{
    Person p(10, 20);
    // p.m_A = 10;
    // p.m_B = 10;
    // cout << p.m_A << " : " << p.m_B << endl;
    cout << p << endl;
}

int main()
{
    test01();
    return 0;
}