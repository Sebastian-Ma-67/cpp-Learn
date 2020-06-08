#include <iostream>
using namespace std;

//函数重载
//可以让函数名相同，提高复用性
/*
1、同一个作用域
2、函数名称相同
3、函数参数类型不同，或者个数不同，或者顺序不同
注意：函数的返回值不可以作为函数重载的条件，
即两个函数出来返回值不一样，其他都一样，这种情况是不允许的
*/

void func()
{
    cout<<"func 调用"<<endl;
}

void func(int a,int b)
{
    cout<<"func(a,b) 调用"<<endl;
}

void func(int a)
{
    cout<<"func(a) 调用"<<endl;
}

void func(string b)
{
    cout<<"func(b) 调用"<<endl;
}

int main()
{
    cout << "Hello World!" << endl;
   
   func(10);
   
    system("pause");
    return 0;
}