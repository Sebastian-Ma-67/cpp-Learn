#include <iostream>
using namespace std;
#include <string>

class Building;

class GoodGay
{
public:
    GoodGay();
    void visit();

    Building *building;
};

class Building
{

    friend class GoodGay;

public:
    Building();
    string m_sittingRoom;

private:
    string m_bedRoom;
};

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
    cout << "good gay is visiting" << building->m_sittingRoom << endl;
    cout << "good gay is visiting" << building->m_bedRoom << endl;
}

void test01()
{
    GoodGay goodGay;
    goodGay.visit();
}
int main()
{
    test01();
    return 0;
}