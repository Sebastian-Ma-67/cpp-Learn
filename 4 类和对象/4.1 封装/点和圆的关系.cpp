#include <iostream>
using namespace std;
class Point
{
public:
    void setPx(double x)
    {
        Px = x;
    }
    void setPy(double y)
    {
        Py = y;
    }
    double getPx()
    {
        return Px;
    }
    double getPy()
    {
        return Py;
    }

private:
    double Px;
    double Py;
};
class Circle
{
public:
    void setCx(double x)
    {
        p.setPx(x);
    }
    void setCy(double y)
    {
        p.setPy(y);
    }
    void setCenter(double x, double y)
    {
        p.setPx(x);
        p.setPy(y);
    }
    void setCr(double r)
    {
        Cr = r;
    }

    double getCx()
    {
        return p.getPx();
    }
    double getCy()
    {
        return p.getPy();
    }
    double getCr()
    {
        return Cr;
    }
    void position(Point &p)
    {
        double temp1 = (p.getPx() - getCx()) * (p.getPx() - getCx()) + (p.getPy() - getCy()) * (p.getPy() - getCy());
        double temp2 = getCr() * getCr();
        if (temp1 < temp2)
        {
            cout << "点在圆内" << endl;
        }
        else
        {
            if (temp1 == temp2)
            {
                cout << "点在圆上" << endl;
            }
            else
            {
                cout << "点在圆外" << endl;
            }
        }
    }

private:
    double Cr;
    Point p;
};

int main()
{

    Circle c1;
    c1.setCx(10.1);
    c1.setCy(10.1);
    c1.setCr(20.1);
    Point p1;
    p1.setPx(30.2);
    p1.setPy(30.2);

    c1.position(p1);
    //system("pause");
    return 0;
}