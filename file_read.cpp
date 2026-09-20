#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("scores.txt",ios::in);

    int score;
    int sum=0;
    int count=0;

    while(fin>>score){
        sum+=score;
        count++;
    }

    fin.close();

    double avg=sum/(double)count;
    cout<<"读取到"<<count<<"个成绩"<<endl;
    cout<<"总分:"<<sum<<endl;
    cout<<"平均分:"<<avg<<endl;

    return 0;
}