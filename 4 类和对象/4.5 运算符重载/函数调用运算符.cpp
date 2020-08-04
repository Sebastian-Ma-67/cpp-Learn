#include <iostream>
//仿函数

/*

非常灵活，没有固定的写法
*/

class MyPrint
{
private:
    /* data */
public:
    MyPrint(/* args */);
    ~MyPrint();

    void operator()(std::string test)
    {
        std::cout << test << std::endl;
    }
};

MyPrint::MyPrint(/* args */)
{
}

MyPrint::~MyPrint()
{
}

class MyAdd
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};
void test01()
{
    MyPrint mp;
    mp("hhhh");
}

void test02()
{
    MyAdd ma;
    std::cout << ma(100, 100) << std::endl;
    // 使用匿名对象
    std::cout << MyAdd()(100, 200) << std::endl;
}
int main()
{
    test01();
    test02();
    return 0;
}