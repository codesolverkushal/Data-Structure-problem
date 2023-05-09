#include<iostream>
using namespace std;
#include "student2.cpp"


// Copy constructor..
int main(){
    Student s1(10,100);  // Just to make the copy for object using the different object.

    Student s2(s1);

    s1.display();

    cout<<"S2"<<" "<<endl;
    s2.display();

    Student *s3 = new Student(20,2002);
    cout<<"S3"<<" ";
    s3->display();

    Student s4(*s3);
    
    Student *s5 = new Student(*s3);

    Student *s6 = new Student(s1);
}