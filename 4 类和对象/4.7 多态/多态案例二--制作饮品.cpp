#include <iostream>
using namespace std;
class DrinksMaker
{
public:
    //  煮水
    virtual void BoilWater() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 倒入杯中
    virtual void Dumping() = 0;
    // 加入辅料
    virtual void AddAccessories() = 0;

    void makeDrink()
    {
        BoilWater();
        Brew();
        Dumping();
        AddAccessories();
    }
};

class CoffeeMaker : public DrinksMaker
{
public:
    //  煮水
    void BoilWater()
    {
        cout << "boil nong fu shan quan" << endl;
    }
    // 冲泡
    void Brew()
    {
        cout << "brew coffee" << endl;
    }
    // 倒入杯中
    void Dumping()
    {
        cout << "dumping cup" << endl;
    }
    // 加入辅料
    void AddAccessories()
    {
        cout << "add suger and milk" << endl;
    }
};

class Tea : public DrinksMaker
{

public:
    //  煮水
    void BoilWater()
    {
        cout << "boil wa ha ha" << endl;
    }
    // 冲泡
    void Brew()
    {
        cout << "brew tea" << endl;
    }
    // 倒入杯中
    void Dumping()
    {
        cout << "dumping cup" << endl;
    }
    // 加入辅料
    void AddAccessories()
    {
        cout << "add lemon" << endl;
    }
};
// 制作函数
void doWork(DrinksMaker *dm)
{
    dm->makeDrink();
    delete dm;
}

void test01()
{
    doWork(new CoffeeMaker);
    cout<<"================="<<endl;
    doWork(new Tea);
}
int main()
{
    test01();
}