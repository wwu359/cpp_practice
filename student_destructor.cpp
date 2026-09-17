#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
private:
    string name;
    int score;

public:
    Student(string n,int s){
        name=n;
        score=s;
        cout<<name<<"被创建了"<<endl;
    }

    ~Student(){
        cout<<name<<"被销毁了"<<endl;
    }

    void print_info(){
        cout<<name<<":"<<score<<"分"<<endl;
    }

};

int main(){
    vector<Student> class_1;


    class_1.push_back(Student("张三",85));
    class_1.push_back(Student("李四",92));
    class_1.push_back(Student("王五",78));

    cout<<"\n全班成绩:"<<endl;
    for(int i=0;i<class_1.size();i++){
        class_1[i].print_info();
    }

    

    cout<<"\n-------程序结束----"<<endl;
    return 0;
}