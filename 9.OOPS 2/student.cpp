#include<iostream>
using namespace std;
#include<string.h>

class Student {
    

    public:
    int age;
    char *name;
    Student(int age, char *name){
        this->age = age;
        //Shallow copy..
        // this->name= name;

        //Deep copy

        this->name = new char[strlen(name) + 1];  //at this position new array created
        strcpy(this->name,name); // now we copying previous char element in new...
    }

    // Copy constructor...
    Student(Student const &s){
        // this->name = s.name;// shallow copy.

        //Deep copy.

        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
        this->age = s.age; 
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};