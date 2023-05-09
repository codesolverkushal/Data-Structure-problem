#include<bits/stdc++.h>
#include "vehicle_class.cpp"
using namespace std;

class Car : public Vehicle{
    public:
     int numgears;

Car print(int x, int y){
    cout<<this->numgears<<endl;
    cout<<this->numTyres<<endl;
}
 Car(int x,int y):Vehicle(x){
    cout<<"Car default constructor is called"<<endl;
    numgears = y;
 }
 ~Car(){
    cout<<"Car destructor is called"<<endl;
 }
 void print(){
    cout<<"Numtyres" <<numTyres<<endl;
    cout<<"Color" <<color<<endl;
    cout<<"numgears"<<numgears<<endl;
    // cout<<"MaxSpeed"<<maxspeed<<endl;
 }
};