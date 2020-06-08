#include <iostream>
using namespace std;
//m_ 表示member
class Cube
{
public:
    void set_m_H(double mh)
    {
        m_H = mh;
    }
    void set_m_L(double ml)
    {
        m_L = ml;
    }
    void set_m_W(double mw)
    {
        m_W = mw;
    }

    double get_m_H()
    {
        return m_H;
    }
    double get_m_W()
    {
        return m_W;
    }
    double get_m_L()
    {
        return m_L;
    }

    double getVol()
    {
        double vol = m_H * m_L * m_W;
        return vol;
    }
    double getArea()
    {
        double area = 2 * (m_H * m_L + m_H * m_W + m_W * m_L);
        return area;
    }
    //通过成员函数判断
    bool isSameByClass(Cube &c)
    {
        if ((getArea() == c.getArea()) && (getVol() == c.getVol()))
        {
            return true;
        }
    }

private:
    double m_H;
    double m_W;
    double m_L;
};

//全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
    if ((c1.getArea() == c2.getArea()) && (c1.getVol() == c2.getVol()))
    {
        return true;
    }
}
int main()
{
    Cube c1;
    c1.set_m_H(10);
    c1.set_m_L(10);
    c1.set_m_W(10);
    cout << c1.getArea() << endl;
    cout << c1.getVol() << endl;

    Cube c2;
    c2.set_m_H(10);
    c2.set_m_L(10);
    c2.set_m_W(10);
    cout << c2.getArea() << endl;
    cout << c2.getVol() << endl;
    bool ret = isSame(c1, c2);
    if (ret)
    {
        cout << "c1 和 c2 相等" << endl;
    }
    else
    {
        cout << "c1 和 c2 不相等" << endl;
    }
    bool ret2 = c1.isSameByClass(c2);
    if (ret2)
    {
        cout << "c1 和 c2 相等" << endl;
    }
    else
    {
        cout << "c1 和 c2 不相等" << endl;
    }

    return 0;
}