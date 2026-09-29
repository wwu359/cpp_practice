#include <iostream>
#include <string>
using namespace std;

// 父类：人
class Person
{
private:
    string name;
    int age;

public:
Person(string n,int a):name(n),age(a){
    cout<<"Person构造调用"<<endl;
}
~Person(){
    cout<<"Person构析调用"<<endl;
}

void show_basic()
{
    cout<<"姓名:"<<name<<"年龄:"<<age<<endl;
}

void set_age(int a){
    age=a;
}
};

// 子类：学生，公有继承Person
class Student:public Person{
private:
    double score;

public:
    Student(string n,int a,double s):Person(n,a),score(s){
        cout<<"Student 构造调用"<<endl;
    }
   
    ~Student(){
        cout << "Student 析构调用" << endl;
    }

    void show_score(){
        show_basic();
        cout<<"成绩：" << score << "分" << endl;
    }

    void set_score(double s)
    {
        score=s;
    }
};

int main()
{
    Student s("张三", 20, 85.5);

    cout<<"\n学生信息:"<<endl;
    s.show_score();

    s.set_age(21);
    s.set_score(88);
    cout << "\n修改后信息：" << endl;
    s.show_score();

    cout << "\n--- 程序结束，对象销毁 ---" << endl;
    return 0;
}
