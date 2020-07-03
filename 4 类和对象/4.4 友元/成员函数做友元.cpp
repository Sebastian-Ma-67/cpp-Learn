#include <iostream>
using namespace std;

#include <string>

class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();  //让visit 函数可以访问building中的私有成员
    void visit2(); //让visit2函数不可以访问building中的私有成员

    Building *building;
};

class Building
{
    friend void GoodGay::visit();

public:
    Building();

public:
    string m_sittingRoom;

private:
    string m_bedRoom;
};

//类外实现成员函数

Building::Building()
{
    m_sittingRoom = "keting";
    m_bedRoom = "woshi";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "visit func is visiting " << building->m_sittingRoom << endl;
    cout << "visit func is visiting " << building->m_bedRoom << endl;
}

void GoodGay::visit2()
{
    cout << "visit2 func is visiting " << building->m_sittingRoom << endl;
     // cout << "visit func is visiting " << building->m_bedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main()
{
    test01();
    return 0;
}