#include <iostream>
#include "StaffManager/staffManager.h"

int main()
{
    StaffManager sm;
    int choice = 0;
    while (true)
    {
        sm.Show_Menu();
        cout << "please input your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0: // 退出系统
            sm.exitSystem();
            break;
        case 1: // 添加职工
            break;
        case 2: // 显示职工
            break;
        case 3: // 删除职工
            break;
        case 4: // 修改职工
            break;
        case 5: // 查找职工
            break;
        case 6: // 排序职工
            break;
        case 7: // 清空文件
            break;

        default:
            system("cls");
            break;
        }
    }

    system("pause");
    return 0;
}