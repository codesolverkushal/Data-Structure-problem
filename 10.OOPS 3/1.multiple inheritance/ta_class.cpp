#include<bits/stdc++.h>
using namespace std;
// #include "student_class.cpp"

class TA : public Teacher, public Student{
    public:
    void print(){
        cout<<"Ta"<<endl;
    }
};