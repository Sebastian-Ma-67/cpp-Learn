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
    ofstream ofs;
    ofs.open("person.txt", ios::out | ios::binary);
    if (!ofs.is_open())
    {

        cout << "file open failed" << endl;
    }
    Person p = {"zhang san", 18};
    ofs.write((const char *)&p, sizeof(p));
    ofs.close();
}

int main()
{
    test01();
    return 0;
}