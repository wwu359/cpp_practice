#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 创建写入文件的对象，打开scores.txt
    ofstream fout("scores.txt",ios::out);
    
    fout<<85<<endl;
    fout<<92<<endl;
    fout<<78<<endl;
    fout<<90<<endl;
    fout<<88<<endl;

    fout.close();

    cout<<"文件已写入scores.txt"<<endl;

    return 0;
}