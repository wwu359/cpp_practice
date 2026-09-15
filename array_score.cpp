#include <iostream>
using namespace std;

int main()
{
    int scores[5]={85,92,78,90,88};
    int sum = 0;

    for(int i=0;i<5;i++)
    {
        cout<<"第"<<i+1<<"个成绩"<<scores[i]<<endl;
        sum=sum+scores[i];
    }

    double avg = sum /5.0;
    cout<<"平均分："<<avg<<endl;

    return 0;
}