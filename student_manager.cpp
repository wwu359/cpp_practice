#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// 1. 定义学生结构体：打包姓名和成绩
struct Student
{
    string name;
    double score;
};

// 2. 添加学生到列表
void add_student(vector<Student>& list,string name,double score)
{
    Student s;
    s.name=name;
    s.score=score;
    list.push_back(s);
}

// 3. 显示所有学生
void show_all(const vector<Student>& list)
{
    cout<<"\n------学生名单----"<<endl;
    for(int i=0;i<list.size();i++)
    {
        cout<<i+1<<"."<<list[i].name
            <<":"<<list[i].score<<"分"<<endl;
    }
    cout<<"-------------"<<endl;
}

// 4. 计算平均分
double calc_average(const vector<Student>& list)
{
    if(list.empty()) return 0;
    double sum=0;
    for(const auto& s:list)
    {
        sum+=s.score;
    }
    return sum/list.size();
}

// 5. 保存数据到文件
void save_to_file(const vector<Student>& list,string filename)
{
    ofstream fout(filename,ios::out);
    for(const auto& s:list)
    {
        fout<<s.name<<" "<<s.score<<endl;
    }
    fout.close();
    cout<<"数据已保存到"<<filename<<endl;
}

// 6. 从文件加载数据
void load_from_file(vector<Student> &list,string filename)
{
    ifstream fin(filename,ios::in);
    if(!fin)
    {
        return;
    }
    list.clear();
    string name;
    double score;
    while(fin>>name>>score)
    {
        add_student(list,name,score);
    }
    fin.close();
    cout<<"已从文件加载"<<list.size()<<"条数据"<<endl;
}

int main()
{
    vector<Student> class_list;
    // 启动时先加载历史数据
    load_from_file(class_list,"student_data.txt");

    int choice;
    while(true)
    {
        // 简易菜单
        cout<<"\n------成绩管理系统------------"<<endl;
        cout<<"1.添加学生"<<endl;
        cout<<"2.显示所有学生"<<endl;
        cout<<"3.计算平均分"<<endl;
        cout<<"4.保存数据"<<endl;
        cout<<"0.退出程序"<<endl;
        cout<<"请输入选项"<<endl;
        cin>>choice;

        if(choice==0)
        {
            cout<<"程序退出"<<endl;
            break;
        }
        else if(choice==1)
        {
            string name;
            double score;
            cout<<"请输入姓名："<<endl;
            cin>>name;
            cout<<"请输入成绩: "<<endl;
            cin>>score;
            add_student(class_list,name,score);
            cout<<"添加成功"<<endl;
        }
        else if(choice==2)
        {
            show_all(class_list);
        }
        else if(choice==3)
        {
            double avg=calc_average(class_list);
            cout<<"全班平均分:"<<avg<<endl;
        }
        else if(choice==4)
        {
            save_to_file(class_list,"student_data.txt");
        }
        else{
            cout<<"输入无效，请重新输入"<<endl;
        }
    }
    return 0;
}