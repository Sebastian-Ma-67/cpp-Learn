#include <iostream>

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public Base
{//父类中所有的非静态成员属性都会被子类继承
public:
    int m_D;
};
// 利用vs开发人员命令查看子类结构  cl /d1 reportSingleClassLayout类名 文件名
void test01()
{
    Son1 s1;
    std::cout << "Size of s1" << sizeof(s1) << std::endl;
}

int main()
{
    test01();
}