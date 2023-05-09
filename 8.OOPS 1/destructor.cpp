#include<iostream>
using namespace std;
#include "student.cpp"

int main()
{
    Student s1(10,200);
    Student s2(20,300);
    
    s1 = s2;
    Student *s3 = new Student(10,2);
    (*s3) = s1;
    delete s3;

}