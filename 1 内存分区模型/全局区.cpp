# include<iostream>
using namespace std;
int g_a = 10;
int g_b = 10;
const int c_g_b = 10;
int main()
{
	// 全局区

	// 全局变量、静态变量、常量

	//创建一个普通的局部变量

	int a = 10;//写在函数体内的变量都是局部变量
	int b = 10;

	static int s_a = 10;
	static int s_b = 10;

/*
常量：
字符串常量:"hello world"
const 修饰的变量：1、const修饰的局部变量；2、const修饰的全局变量放在全局区 

*/
	const int c_l_a = 10;

	cout << "局部变量的地址为：" << (int)&a << endl;
	cout << "局部变量的地址为：" << (int)&b << endl;


	cout << "全局变量的地址为：" << (int)&g_a << endl;
	cout << "全局变量的地址为：" << (int)&g_b << endl;

	cout << "静态变量的地址为：" << (int)&s_a << endl;
	cout << "静态变量的地址为：" << (int)&s_b << endl;

	cout << "字符串常量的地址为：" << (int)&"helllo world" << endl;
	cout << "const 修饰的变量的地址为：" << (int)&c_l_a << endl;
	cout << "const 修饰的变量的地址为：" << (int)&c_g_b << endl;

	system("pause");
	return 0;
}