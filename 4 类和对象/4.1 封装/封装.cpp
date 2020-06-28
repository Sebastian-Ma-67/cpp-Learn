#include <iostream>
using namespace std;

const double Pi = 3.1415926;

class Circle
{
private:
    /* data */
public:
    Circle(/* args */);
    ~Circle();

    int m_r;

    double calculateZC()
    {
        return 2 * Pi * m_r;
    }
};

Circle::Circle(/* args */)
{
}

Circle::~Circle()
{
}

int main()
{

    Circle c;
    c.m_r = 2;

    cout << "圆的周长为：" << c.calculateZC() << endl;

    system("pause");
    return 0;
}