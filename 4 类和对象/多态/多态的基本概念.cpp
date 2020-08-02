#include <iostream>
using namespace std;
/*
静态多态：函数重载和运算符重载属于静态多态、复用函数名
动态多态：派生类和虚函数实现运行时多态

静态多态和动态多态的区别：
静态多态的函数地址早绑定 - 编译阶段确定函数地址
动态多态的函数地址晚绑定 - 运行阶段确定函数地址

*/

class Animal
{
public:
    virtual void speak() //虚函数
    {
        cout << "animal is talking!" << endl;
    }
};

class Cat : public Animal
{

public:
    void speak()
    {
        cout << "little cat is talking!" << endl;
    }
};

class Dog : public Animal
{

public:
//子类要重写父类中的虚函数
    void speak()
    {
        cout << "little dog is talking!" << endl;
    }
};

// 下面代码就属于地址早绑定，在编译阶段就确定了函数的地址,在animal类中的speak函数前面加上virtual关键字，将其变成
// 虚函数，可解决该问题
void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();
    return 0;
}