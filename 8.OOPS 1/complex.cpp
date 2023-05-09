#include<iostream>
using namespace std;
#include "complexclass.cpp"


int main(){
  complex c1(10,20);
  complex c2(30,42);

  c1.print();
  
  c1.add(c2);

  c1.print();
  c2.print();


   
}