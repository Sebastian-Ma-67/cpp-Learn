#include <iostream>

class Base1
{
private:
    /* data */
    int m_C;

protected:
    int m_B;

public:
    int m_A;
    Base1(/* args */);
    ~Base1();
};

Base1::Base1(/* args */)
{
}

Base1::~Base1()
{
}

class Son1 : public Base1
{
private:
    /* data */
public:
    Son1(/* args */);
    ~Son1();
    void func()
    {
        m_A = 10;
        m_B = 20; // 父类的保护权限成员也可访问，也是保护权限
        // m_C 不可访问 父类私有成员 访问不到，爸爸的有些东西，儿子是看不到的
    }
};

Son1::Son1(/* args */)
{
}

Son1::~Son1()
{
}

void test01()
{
    Son1 s1;
    s1.m_A;
    // s1.m_B 不可在类外访问,保护权限的类成员在类外是无法访问的
}

class Base2
{

public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son2 : protected Base2
{
public:
    void func()
    {
        m_A = 100; //m_A 变成了保护权限
        m_B = 200;
        // m_C 无法访问
    }
};
void test02()
{
    Son2 s2;
    //   s2.m_A; 不可访问
}

class Son3 : private Base1
{
public:
    void func()
    {
        m_A = 100; //变为私有成员
        m_B = 200; //变为私有成员
        // m_C 访问不到
    }
};

void test03()
{
    Son3 s3;
    // s3.m_A;访问不了
}

class Grand1 :public Son3
{
    public:
    void func()

{
    // m_A = 100; 访问不了

}}
int main()
{
    return 0;
}