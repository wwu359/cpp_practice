#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,int> scores;

    scores["张三"]=85;
    scores["李四"]=92;
    scores["王五"]=78;

    scores["赵六"]=90;

    scores["张三"]=88;


    map<string,int>::iterator it=scores.find("李四");
    if(it!=scores.end()){
        cout<<"李四的成绩"<<it->second<<endl;
        // it->first 是键，it->second 是值
    }
    else{
        cout<<"找不到李四"<<endl;
    }

    scores.erase("王五");

    cout<<"\n所有学生成绩"<<endl;
    for(auto& pair:scores){// 范围for循环，auto自动识别类型
        cout<<pair.first<<":"<<pair.second<<"分"<<endl;
    }

    cout<<"当前共"<<scores.size()<<"个学生"<<endl;

    return 0;
}