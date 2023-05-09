#include<iostream>
using namespace std;
#include "fraction.cpp"

int main(){
    Fraction f1(10,20);
   
    Fraction f2(10,30);
   
     
    // f1.add(f2);

    // Fraction f3 = f1 + f2;
    // f1.print();
    // ++f1;
    // f1.print();

    // Fraction f3 = ++(++f1);
    Fraction f3 = ++f1;
    // Fraction f3 = f1++;
    f1.print();
    f3.print();

    // f2.print();
    // f3.print();

    // Fraction f5 = f1*f2;
    // f5.print();
    // if(f1==f2){
    //     cout<<"Equal"<<endl;

    // } else{
    //     cout<<"Not equal"<<endl;
    // }

}