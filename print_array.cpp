#include<iostream>
using namespace std;

void print_arr(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10,12};

    print_arr(arr1,5);
    print_arr(arr2,6);

    return 0;
}