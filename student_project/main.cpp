#include "student.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<Student> class_1;
    class_1.push_back(Student("张三",85));
    class_1.push_back(Student("李四",92));

    for(int i=0;i<class_1.size();i++){
        class_1[i].print_info();
    }
    return 0;
}