#include <iostream>
using namespace std;

//栈区数据注意事项 --不要在栈区存放局部变量的地址
// 栈区的数据由编译器管理开辟和释放
// 局部变量的地址千万不要返回

int* func(int b)
{
	b = 100;// 形参数据也会存放在栈区
	int a = 10;//局部变量，存放在栈区，栈区的数据在函数执行完后自动释放
	return &a; // 返回局部变量的地址

}

int main2()
{
	int *p = func(10);
	cout << *p << endl;// 第一次可以打印正确数据是因为编译器做了保留
	cout << *p << endl;// 第二次这个数据就不再保留了
	system("pause");
	return 0;
}