#include <iostream>
#include <string>
using namespace std;
// 多态在使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
// 解决方式：将父类中的析构函数改为虚析构或者纯虚析构
/*
虚析构和纯虚析构共性：
可以解决父类指针释放子类对象
都需要有具体的函数实现
虚析构和纯虚析构的区别：
如果是纯虚析构，该类属于抽象类，无法实例化对象
*/

class Animal
{
public:
    Animal()
    {
        cout << "animal constructor" << endl;
    }
    virtual void Speak() = 0;
    // virtual ~Animal()
    // {
    //     cout << "animal destructor" << endl;
    // }

    virtual ~Animal() = 0;
};

Animal::~Animal()
{
    cout << "animal destructor" << endl;
}
class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "cat constructor" << endl;
        m_Name = new string(name);
    }
    virtual void Speak()
    {
        cout << *m_Name << " little cat is speaking" << endl;
    }
    string *m_Name;
    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << *m_Name << " little cat destructor" << endl;
            delete m_Name;
        }
    }
};

void test01()
{
    Animal *a = new Cat("tom");

    a->Speak();

    delete a; // 父类指针在析构时候，不会调用子类中的析构函数，导致子类如果有堆区的属性，会出现内存的泄露情况
}

int main()
{
    test01();
    return 0;
}