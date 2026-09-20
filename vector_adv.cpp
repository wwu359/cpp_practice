#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums={12,45,7,89,23};
    // 1. 在第3个位置（下标2）插入数字 66
    nums.insert(nums.begin()+2,66);
    // nums.begin() 就是指向第一个元素的迭代器，+2 就是往后移2个位置

    // 2. 删除最后一个元素
    nums.pop_back();

    // 3. 用迭代器遍历输出所有元素
    cout<<"所有元素:";
    for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
    {
        cout<<*it<<" ";// *it 就是取出迭代器指向的元素，和指针解引用一样
    }
    cout<<endl;

    // 4. 从小到大排序
    sort(nums.begin(),nums.end());

    cout<<"排序后: ";
    for(int num:nums){// 范围for循环，更简单的遍历写法
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}