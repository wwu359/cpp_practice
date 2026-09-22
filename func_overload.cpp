#include <iostream>
using namespace std;

// 版本1：两个int相加
int add(int a,int b)
{
    return a+b;
}

// 版本2：三个int相加
int add(int a,int b,int c)
{
    return a+b+c;
}

// 版本3：两个double相加
double add(double a,double b)
{
    return a+b;
}

int main()
{
    cout << "两个int:" << add(3, 5) << endl;       // 自动匹配版本1
    cout << "三个int:" << add(1, 2, 3) << endl;    // 自动匹配版本2
    cout << "两个double:" << add(2.5, 3.7) << endl;// 自动匹配版本3
    return 0;
}
