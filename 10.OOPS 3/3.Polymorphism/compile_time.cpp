#include<bits/stdc++.h>
using namespace std;


class A{
    public:

    void sayHello(){
        cout<<"hello Kushal "<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};
int main(){
  A obj;
  obj.sayHello();  
  obj.sayHello("kushal");
return 0;
}