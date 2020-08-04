#include <iostream>
using namespace std;

class Person
{
public:
    int m_A;        //非静态成员变量 属于对象 （只有非静态成员变量属于对象上）
    static int m_B; //静态成员变量 不属于类的对象上

    void func1() // 非静态成员函数，不属于类的对象，独一无二，一份就可以
    {
    }

    static void func2() //静态成员函数，不属于类的对象上，独一无二，一份就可以
    {
    }

private:
};

void test01()
{
    Person p;
    cout << "size of p = " << sizeof(p) << endl;
    //C++编译器会给每一个空对象分配一个内存空间，大小为一个字节，是为了区分不同空对象占内存的位置。
    //每个空对象也应该有一个独一无二的内存地址
}

void test02()
{
    Person p;
    cout << "size of p  = " << sizeof(p) << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}