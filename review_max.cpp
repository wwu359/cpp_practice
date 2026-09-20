#include <iostream>
#include <vector>
using namespace std;

int find_max(vector<int> num)
{
    int a=num[0];
    for(int i=0;i<num.size();i++)
    {
        if(num[i]>=a)
        {
            a=num[i];
        }
    }
    return a;
}

int main()
{
    vector<int> num={12,45,7,89,23,56};
    int b=find_max(num);
    cout<<b<<endl;
    return 0;

}