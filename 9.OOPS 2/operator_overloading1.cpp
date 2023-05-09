#include<iostream>
using namespace std;
#include "operator_overloading_class.cpp"

int main(){
    Fraction f1(10,2);
    Fraction f2(10,4);


    Fraction f3 = f1.add(f2);   // f1 passes in this and f2 passes as argument..
    Fraction f4 = f1+f2;
    f1.print();
    f2.print();
    
    f3.print();
    f4.print();

    Fraction f5 = f1 + f2;
    if(f1== f2){
        cout<<"Equal"<<endl;
    } 
    else{
        cout<<"Not Equal"<<endl;
    }

}