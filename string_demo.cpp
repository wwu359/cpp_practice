#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="Hello";
    string s2="World";


    string s3=s1+s2;
    cout<<"拼接后："<<s3<<endl;

    cout<<"长度："<<s3.size()<<endl;

    cout<<"第一个字符："<<s3[0]<<endl;

    cout<<"World的位置:"<<s3.find("World")<<endl;

    cout<<"子串："<<s3.substr(6,5)<<endl;

    return 0;
}