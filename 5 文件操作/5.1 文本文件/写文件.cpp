#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    ofstream ofs;
    ofs.open("test01.txt", ios::out);
    if (!ofs.is_open())
    {
        cout << "file open failed" << endl;
        return;
    }
    ofs << "name: zhangsan" << endl;
    ofs << "gender: male" << endl;
    ofs << "age: 18" << endl;
    cout << "file is closing" << endl;
    ofs.close();
}
int main()
{
    test01();
    return 0;
}