#include <iostream>
using namespace std;
class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger mi);

public:
    MyInteger()
    {
        m_Num = 0;
    }
    MyInteger &operator++() //这里注意要返回引用，是为了一直对一个数据进行递增操作
    {
        //前置递增运算符
        this->m_Num += 1;
        return *this;
    }
//后置递增返回的是值类型
    MyInteger operator++(int) //加上int之后，编译器就会认为这是一个后置++运算符重载了，这个int代表的是一个占位参数，可以用于区分前置和后置递增
    {
        // 先记录当时结果，然后进行递增，最后将记录的结果作为返回结果
        MyInteger temp = *this;
        this->m_Num += 1;
        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &cout, MyInteger mi)
{
    cout << mi.m_Num << endl;
    return cout;
}


void test01()
{
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt++ << endl;
}

void test02()
{
}
int main()
{
    test01();
    return 0;
}