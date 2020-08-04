#include <iostream>
using namespace std;
#include <string>
/*
空指针调用成员函数
*/
class Person
{
public:
    void showClassName()
    {
        cout << "this class's name is: "
             << "" << endl;
    }
    void showClassAge()
    {
        if (this == NULL)
        {
            return;
        }
        cout << "this class's age is: " << m_Age << endl;
    }
    int m_Age;
    string m_Name;
};
void test01()
{
    Person *p = NULL;
    p->showClassAge();
    p->showClassName();
}
int main()
{
    test01();
    return 0;
}