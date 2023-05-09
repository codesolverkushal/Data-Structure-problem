#include<iostream>
using namespace std;
#include "fraction.cpp"

int main(){
    Fraction f1(10,20);
   
    Fraction f2(10,30);
   

    // f1.add(f2);

    f1.add(f2);

    f1.print();
    f2.print();

    f1.multiply(f2);

    f1.print();
    f2.print();
}