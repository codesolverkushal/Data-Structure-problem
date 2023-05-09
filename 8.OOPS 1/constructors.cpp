#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    // create student statically..
    Student s1;
    s1.display();

    Student *s2 = new Student; 
    s2->display();
    
    cout<<"Parameterized constructors Demo"<<endl;
    Student s4(10);

    s4.display();

    Student *s5 = new Student(101);

    s5->display();

    Student s6(5,6); // Always matching constructor use by program that is a simple way..
    s6.display();
}