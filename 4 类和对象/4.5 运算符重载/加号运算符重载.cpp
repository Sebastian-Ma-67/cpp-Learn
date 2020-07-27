#include <iostream>
using namespace std;

//成员函数重载
class Person
{
public:
    //通过成员函数重载
    Person operator+(Person &p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
    int m_A;
    int m_B;
};

// 通过全局函数来重载
// Person operator+(Person &p1, Person &p2)
// {
//     Person temp;
//     temp.m_A = p1.m_A + p2.m_A;
//     temp.m_B = p1.m_B + p2.m_B;
//     return temp;
// }

Person operator+(const Person& p2, int val)  
{
	Person temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;
	return temp;
}

void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;

    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;
    Person p3 = p1 + p2;
    Person p4 = p3 +10;
    cout << "p3.m_A : " << p3.m_A << " p3.m_B : " << p3.m_B << endl;
    cout << "p4.m_A : " << p4.m_A << " p4.m_B : " << p4.m_B << endl;
}

int main()
{
    test01();
    return 0;
}