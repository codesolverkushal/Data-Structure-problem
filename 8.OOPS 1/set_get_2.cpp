#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    // create student statically..
    Student s1;
    Student *s2 = new Student;
     
    s1.setAge(20);
    s2->setAge(30);

    
    s1.display();
    s2->display();

}