#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    int name;
    private:

    int age;
    public:


    ~Student(){
      cout<<"Destructor is called!"<<endl;
    }
      // dafault constructor..

      Student(){
        cout<<"Constructor called"<<endl;
      }
      
      //Parameterized constructor demo

      Student(int r){
        cout<<"Constructor2 called"<<endl;
         rollNo = r;
      }

      //Another constructor

      Student(int a, int r){
        cout<<"Constructor3 is called"<<endl;
        age = a;
        rollNo = r;
      }
    void display(){
        cout<< age <<" "<<rollNo<<endl;
    }

    int getAge(){
        return age;
    }
    void setAge(int a){
        if(a<0){
            return;
        }
           age = a;
    }
};