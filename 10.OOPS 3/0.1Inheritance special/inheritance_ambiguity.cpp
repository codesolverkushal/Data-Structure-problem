// to remove the ambiguity we use scope resolutin operator




#include<bits/stdc++.h>
using namespace std;



class A{
    public:
     
     void func(){
        cout<<"I am A"<<endl;
     }
};

class B{
    public:
     void func(){
         cout<<"I am B"<<endl;
     }
};

class C:public A, public B{

};

int main(){
   C obj1;

   obj1.A::func();
}

