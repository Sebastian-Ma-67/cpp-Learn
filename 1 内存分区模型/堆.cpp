#include<iostream>
using namespace std;

int* func()
{
	// 利用new关键字，可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}

int main()
{
	int * p2 = func();//在栈区又存放了一个变量p，用于存放指针，而main函数不执行完，这个p2就不会被释放，所以p2所存储的地址一直存在，而这个地址所指向的是堆上的数据，所以可以读取好多次
	cout << *p2 << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	system("pause");
	return 0;
}