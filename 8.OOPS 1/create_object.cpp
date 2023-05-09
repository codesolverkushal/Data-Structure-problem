#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    // create student statically..
    Student s1;
    Student s2;

    Student s3,s4,s5;
   
    s1.age = 24;
    s1.rollNo = 101;

    cout<<s1.age<<endl;
    cout<<s1.rollNo<<endl;
    // create student dynamically.

    Student *s6 = new Student;
    // (*s6).age = 24;
    // (*s6).rollNo = 30;
      // OR we can write in this way.

    s6->age = 30;  // arrow first derefer and then point the value it like ass (*s6).value.. 
    s6->rollNo = 103;

    cout<<s6->age<<endl;
    cout<<(*s6).rollNo<<endl;
}