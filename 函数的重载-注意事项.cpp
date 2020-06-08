#include <iostream>
using namespace std;

/*
1、引用作为函数重载的条件

*/

void func(int &a)
{
    cout << "func(int &a)" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a)" << endl;
}
//当函数重载碰上默认参数，会导致二义性
void func2(int a,int b = 10)
{
    cout << "func2(int &a)" << endl;
}

void func2(int a)
{
    cout << "func2(int a = 10 &a)" << endl;
}

int main()
{
    // int a = 10;
    // func(a);

    //func(10);
    func2(10,2);
    system("pause");
    return 0;
}