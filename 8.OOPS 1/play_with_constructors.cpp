#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
    Student s1; // constructor 1 called 

    Student s2(101); // Constructor 2 called.
    Student s3(20,103); // constructor 3 is called.

    Student s4(s3);  // copy sonstructor is called..

    s1 = s2;   // copy assignment operator.
    
    Student s5 = s4; // it is as an Student s5(s5)  and the copy constructor is called..

    

}
