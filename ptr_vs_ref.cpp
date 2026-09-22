#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int b=20;

    //指针
    int*p=&a;
    *p=15;  // 解引用修改a
    p=&b;   // 指针可以改指向，现在指向b
    *p=25;  // 修改的是b

    //引用
    int& r=a;   // r是a的别名，定义必须初始化
    r=18;       //直接修改a
    //r=b;      //不是改绑定，是把b的值赋给a！引用永远不能改绑定

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}