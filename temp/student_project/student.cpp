#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string n,int s){
    name=n;
    score=s;
}

Student::~Student(){};
void Student::print_info(){
    cout<<name<<":"<<score<<"分"<<endl;
}
void Student::set_score(int new_score){
    score=new_score;
}