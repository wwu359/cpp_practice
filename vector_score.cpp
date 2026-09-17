#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> scores;

    scores.push_back(85);
    scores.push_back(92);
    scores.push_back(78);
    scores.push_back(90);


    cout<<"当前有"<<scores.size()<<"个成绩"<<endl;

    cout<<"所有成绩：";
    for(int i=0;i<scores.size();i++)
    {
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    
    int sum=0;
    for(int i=0;i<scores.size();i++)
    {
        sum+=scores[i];
    }

    double avg=sum/(double)scores.size();
    cout<<"平均分:"<<avg<<endl;

    scores.push_back(95);
    cout<<"加完第5个后的平均分:"<<sum/(double)scores.size()<<endl;

    return 0;
}