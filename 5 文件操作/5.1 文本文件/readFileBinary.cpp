#include <iostream>

#include <fstream>

using namespace std;

class Person
{

public:
    char m_Name[64]; //不建议用string ，而是使用char来表示字符串
    int m_Age;
};

void test01()
{
    ifstream ifs;
    ifs.open("person.txt", ios::in | ios::binary);
    if (!ifs.is_open())
    {
        cout << "open file failed" << endl;
        return;
    }

    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << "Name = " << p.m_Name << ", Age = " << p.m_Name << endl;

    ifs.close();
}
int main()
{
    test01();
    return 0;
}