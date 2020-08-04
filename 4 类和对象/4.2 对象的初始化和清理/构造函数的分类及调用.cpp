#include <iostream>
using namespace std;
/*
构造函数的分类及调用
分类
按照参数分类： 无参构造（也称之为默认构造函数）和有参构造
按照类型分类： 普通构造和拷贝构造函数
*/
class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int a);
    //拷贝函数,作用
    Person(const Person &p);
    ~Person();
};

Person::Person(/* args */)
{
    cout << "普通无参构造函数调用" << endl;
}

Person::Person(int a)
{
    cout << "普通有参构造函数调用" << endl;
}

Person::Person(const Person &p) //使用静态变量+引用的方式
{
    cout << "拷贝构造函数调用" << endl;
    //可以将p的属性拷贝到本类上
}

Person::~Person()
{
    cout << "析构函数调用" << endl;
}
//调用
void test01()
{
    //1、括号法，简单常用
    Person p1; //注意事项：调用默认构造函数的时候、不要加()
    Person p2(10);
    Person p3(p2); //将p2的属性拷贝至p3

    //2、显示法
    Person p4;
    Person p5 = Person(20);
    Person(20);             //其中Person(20)为匿名对象，其特点在于，当前执行结束后，系统会立即回收掉匿名对象(先执行构造函数，然后执行完当前行之后，立即执行析构函数)
    Person P6 = Person(p5); //注意事项：不要利用拷贝构造函数来初始化匿名对象

    //3、隐式转换法
    Person p7 = 10;
    Person p8 = p7;
}

int main()
{

    test01();
    return 0;
}