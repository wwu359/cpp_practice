#include <iostream>
using namespace std;

void swap1(int a,int b)
{
    int temp = a;
    a=b;
    b=temp;
}

void swap2(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int num1=10,num2=20;
    cout<<"调用swap1前:"<<num1<<" "<<num2<<endl;
    swap1(num1,num2);
    cout<<"调用swap1后:"<<num1<<" "<<num2<<endl;


    cout<<"调用swap2前:"<<num1<<" "<<num2<<endl;
    swap2(num1,num2);
    cout<<"调用swap2后:"<<num1<<" "<<num2<<endl;
    return 0;
}