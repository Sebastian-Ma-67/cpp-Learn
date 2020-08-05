#include <iostream>
#include <string>
using namespace std;

class Calculator
{
public:
    int m_Num1;
    int m_Num2;
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }

        return 0;
    }
};

void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 20;
    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}
// 开闭原则
// 在真实开发过程中，我们提倡开闭原则，对扩展进行开放，对修改进行关闭

class AbstractCalculator
{
public:
    int m_Num1;
    int m_Num2;
    virtual int getResult()
    {
        return 0;
    }
};

class AddCalculator : public AbstractCalculator
{
    virtual int getResult()
    {

        return m_Num2 + m_Num1;
    }
};

class SubCalculator : public AbstractCalculator
{
    virtual int getResult()
    {

        return m_Num1 - m_Num2;
    }
};

class MulCalculator : public AbstractCalculator
{
    virtual int getResult()
    {

        return m_Num1 * m_Num2;
    }
};

void test02()
{
    AbstractCalculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;
    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;
    cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc; //销毁掉堆区的数据

    abc = new MulCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;
    cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc; //销毁掉堆区的数据
}

// 多态的好处：
// 组织结构清晰、可读性强、对于前期和后期的扩展和维护性高

int main()
{
    test02();
    return 0;
}