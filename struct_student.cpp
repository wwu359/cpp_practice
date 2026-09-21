#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Student
{
    string name;    // 默认public，外面可以直接访问
    int age;
    double score;
    
};

using StudentList=vector<Student>;

int main()
{
    Student s1;
    s1.name="张三";
    s1.age=20;
    s1.score=85.5;

    Student s2;
    s2.name="李四";
    s2.age=21;
    s2.score=92.0;

    StudentList class_list;
    class_list.push_back(s1);
    class_list.push_back(s2);

    cout<<"全班同学信息:"<<endl;
    for(const auto& s:class_list)
    {
        cout<<"姓名:"<<s.name
            <<",年龄:"<<s.age
            <<",成绩:"<<s.score<<endl;

    }
    return 0;
}
