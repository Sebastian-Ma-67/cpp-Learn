#include<iostream>
using namespace std;

int* func()
{
	// 在堆区创建一个整形数据
	// new 返回的是该数据类型的指针
	int* p = new int(10);
	return p;


}

void test01()
{
	int * p2 = func();
	cout << *p2 << endl;
	cout << *p2 << endl;
	// 堆区的数据由程序员管理开辟，由程序员管理释放

// 如果想释放，利用关键字delete
	cout << "-------------" << endl;
	delete p2;
	//cout << *p2 << endl; //内存已经被释放，再次访问就是非法操作了
}

// 在堆区开辟一个数组
void test02()
{
	int * arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int j = 0; j < 10;j++)

	{
		cout << arr[j] << endl;
	}
	// 释放堆区数组
	delete[] arr;
	//for (int j = 0; j < 10; j++)

	//{
	//	cout << arr[j] << endl;
	//}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}