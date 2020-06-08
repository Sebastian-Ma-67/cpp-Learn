#include <iostream>
using namespace std;
//struct和class唯一的区别是 默认的访问权限不同
/*
struct 默认权限是public公有
class 默认权限是private私有
*/

class C1
{
    int m_A;
};
struct C2
{
    int m_A;
};

int main()
{
    C1 c1;
    C2 c2;
    c2.m_A = 100;
 
    system("pause");
    return 0;
}