#include <iostream>

class Person
{
private:
    /* data */
public:
    Person(/* args */ std::string name, int age);
    ~Person();

    // 重载关系运算符==
    bool operator==(Person &p)
    {
        if (m_Name == p.m_Name && m_Age == p.m_Age)
        {
            /* code */
            return true;
        }
        return false;
    }

    // 重载关系运算符!=
    bool operator!=(Person &p)
    {
        if (m_Name != p.m_Name || m_Age != p.m_Age)
        {
            /* code */
            return true;
        }
        return false;
    }
    std::string m_Name;
    int m_Age;
};

Person::Person(/* args */ std::string name, int age)
{
    m_Name = name;
    m_Age = age;
}

void test01()
{
    Person P1("Tom", 18);
    Person P2("Tom", 18);
    if (P1 == P2)
    {
        /* code */
        std::cout << "P1 = P2" << std::endl;
    }
    if (P1 != P2)
    {
        /* code */
        std::cout << "P1 != P2" << std::endl;
    }
}

Person::~Person()
{
}

int main()
{
    test01();
    return 0;
}