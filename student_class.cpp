#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int score;
    public:
        Student(string n,int s){
            name=n;
            score=s;
        }
        void print_info(){
            cout<<"姓名:"<<name<<"成绩:"<<score<<endl;
        }

        void set_score(int new_score)
        {
            score=new_score;
        }
};

int main()
{
    Student s1("张三",85);
    Student s2("李四",92);

    s1.print_info();
    s2.print_info();

    s1.set_score(88);
    cout<<"修改后张三的信息:"<<endl;
    s1.print_info();

    return 0;
}