#include <iostream>
#include <stdio.h>
using namespace std;
#include <fstream>

void test01()
{
    ifstream ifs;
    ifs.open("test01.txt", ios::in);
    if (!ifs.is_open())
    {
        /* code */
        cout << "file open failed" << endl;
    }

    // char buf1[1024] = { 0 };
    // while (ifs >> buf1)
    // {
    // 	cout << buf1 << endl;
    // }

    // cout << "second way" << endl;
    // char buf2[1024] = {0};
    // while (ifs.getline(buf2, sizeof(buf2)))
    // {
    //     cout << buf2 << endl;
    // }

    // cout << "third way" << endl;
    // string buf3;
    // while (getline(ifs, buf3))
    // {
    //     cout << buf3 << endl;
    // }

    char c;
    while ((c = ifs.get()) != EOF) // 不建议用这种一个字符一个字符读取的方式，效率比较低
    {
        cout << c;
    }

    ifs.close();
}

int main()
{
    test01();
    return 0;
}