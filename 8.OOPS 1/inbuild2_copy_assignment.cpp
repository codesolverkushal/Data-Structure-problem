#include<iostream>
using namespace std;
#include "student.cpp"

//copy assignment operator..

int main(){
     Student s1(10,1001);
     Student s2(20,900);

     Student *s3 = new Student(30,111);

     s2 = s1;

     *s3 = s2;
}