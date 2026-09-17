#pragma once
#include <string>
using namespace std;

class Student{
private:
    string name;
    int score;
public:
    Student(string n,int s);
    ~Student();
    void print_info();
    void set_score(int new_score);

};