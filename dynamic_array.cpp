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
    int n;
    cout<<"请输入学生人数: ";
    cin>>n;

    // 动态创建n个学生的数组，长度由输入决定
    Student* arr=new Student[n];

    // 循环输入每个学生信息
    for(int i=0;i<n;i++)
    {
        cout<<"请输入第"<<i+1<<"个学生的姓名和成绩:";
        cin>>arr[i].name>>arr[i].score;
    }

    // 遍历输出
    cout<<"\n所有学生信息:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].name<<":"<<arr[i].score<<"分"<<endl;
    }

    // 释放数组内存，必须加 []
    delete[]arr;

    return 0;
}