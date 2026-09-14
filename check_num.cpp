#include <iostream>
using namespace std;
int main(){
    double num;
    cout<<"请输入一个数字：";
    cin>>num;

    if(num>0){
        cout<<"这是正数"<<endl;
}else if(num<0){
    cout<<"这是负数"<<endl;
}else{
    cout<<"这是零"<<endl;
}

return 0;
}