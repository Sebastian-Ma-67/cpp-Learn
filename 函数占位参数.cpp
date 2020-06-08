#include <iostream>
using namespace std;

//占位参数
//返回值类型 函数名（数据类型）
//目前阶段的占位参数，我们还用不到，后面课程中会用到
void func(int)
{
    cout << "hhh" << endl;
}

int main()
{
    cout << "Hello World!" << endl;

    func(10);

    system("pause");
    return 0;
}
//shift + alt + f 格式化代码
/*
C++ 中函数的参数列表里可以有占位符，用来做占位，调用函数时必须填补该位置
*/