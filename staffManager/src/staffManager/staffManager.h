#pragma once
#include <iostream>
using namespace std;
class StaffManager
{
public:
    //构造函数
    StaffManager();

    // 展示菜单界面
    void Show_Menu();

    // 实现退出功能
    void exitSystem();
    
    //析构函数
    ~StaffManager();
};