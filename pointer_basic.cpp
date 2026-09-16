#include <iostream>
using namespace std;

int main()
{
    int num=100;

    int* p= &num;


    cout<<"num的值:"<<num<<endl;
    cout<<"num的地址:"<<&num<<endl;
    cout<<"指针p存的地址:"<<p<<endl;
    cout<<"通过指针p取到的值: "<<*p<<endl;

    *p=200;
    cout<<"修改后num的值: "<<num<<endl;

    return 0;
}