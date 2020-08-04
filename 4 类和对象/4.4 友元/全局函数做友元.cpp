#include <iostream>
using namespace std;
#include <string>

class Building
{
    //goodGay是Building 的好朋友，可以访问Building中的私有成员
    friend void goodGay(Building &building);

public:
    Building()
    {
        m_SittingRoom = "ke ting";
        m_BedRoom = "wo shi";
    }
    string m_SittingRoom;

private:
    string m_BedRoom;
};
//全局函数

void goodGay(Building &building)
{
    cout << "hao ji you de quan ju han shu zhengzai fangwen: " << building.m_SittingRoom << endl;
    cout << "hao ji you de quan ju han shu zhengzai fangwen: " << building.m_BedRoom << endl;
}

void test01()
{
    Building building;
    goodGay(building);
}
int main()
{
    test01();
    return 0;
}