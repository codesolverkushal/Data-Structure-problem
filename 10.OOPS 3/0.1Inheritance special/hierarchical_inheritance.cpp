//One class serve as parent class for more than one class..


#include<bits/stdc++.h>
using namespace std;



class A{
    public:
     
     void func(){
        cout<<"inside function"<<endl;
     }
};

class B : public A{
    public:
     void func2(){
         cout<<"inside function2"<<endl;
     }
};

class C : public A{
    public:
    void func3(){
        cout<<"inside function 3"<<endl;
    }
};

int main(){
    
    A obj1;
    obj1.func();
    return 0;
}

