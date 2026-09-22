#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    double score;
};

int main()
{
    // 动态创建一个Student对象，返回指向它的指针
    Student* p=new Student;

    // 结构体指针访问成员用 ->
    p->name="张三";
    p->score=85.5;

    cout<<"姓名:"<<p->name<<",成绩:"<<p->score<<endl;

    // 用完必须手动释放内存
    delete p;
    return 0;
}