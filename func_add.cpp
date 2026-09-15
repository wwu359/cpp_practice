#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;    
}

int main()
{
    int x = 3, y = 5;
    int result = add(x,y);
    cout<<"和="<<result<<endl;
    return 0;
}