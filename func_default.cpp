#include <iostream>
#include <string>
using namespace std;

// 默认参数必须从右往左依次设置，不能跳着给
void print_info(string name,int age=20,string major="计算机")
{
    cout<<"姓名："<<name<<",年龄:"<<age<<",专业:"<<major<<endl;
}


int main()
{
    print_info("张三");                 // 只传姓名，后面两个都用默认值
    print_info("李四", 21);            // 传姓名和年龄，专业用默认值
    print_info("王五", 19, "自动化");  // 三个参数都传，覆盖默认值
    return 0;
}