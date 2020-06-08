#include <iostream>
using namespace std;
//成员属性设置成私有的优点：
/*
1、可以自己控制读写权限
2、对于写 可以检测数据的有效性
*/
class Person
{
public:
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }
    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            return;
        }
        m_age = age;
    }
    int getAge()
    {
        //m_age = 0;
        return m_age;
    }
    void setLover(string lover)
    {
        m_Lover = lover;
    }

private:
    string m_Name;
    int m_age;
    string m_Lover;
};

int main()
{
    Person p;
    p.setName("zhangsan");
    string name = p.getName();
    p.setLover("feiniao");
    p.setAge(0);
    cout << name << endl;
    cout << p.getAge() << endl;
    //system("pause");
    return 0;
}