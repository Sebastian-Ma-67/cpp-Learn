#include <iostream>
using namespace std;
#include <string>

class Student
{
private:
    /* data */
public:
    Student(/* args */);
    ~Student();
    string Name;
    int StNum;
    void showStudent()
    {
        cout << Name << StNum << endl;
    }

    void setName(string name)
    {
        Name = name;
    }
    void setStNum(int stNum)
    {
        StNum=stNum;
    }
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}

int main()
{
    Student student;
    //student.Name = "lushiqi";
    student.setName("zs");
    //student.StNum = 3290;
    student.setStNum(3290);
    
    student.showStudent();
    system("pause");
    return 0;
}