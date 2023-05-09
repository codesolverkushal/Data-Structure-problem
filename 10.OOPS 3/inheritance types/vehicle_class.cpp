#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    private:
     int maxSpeed;
    
    protected:
     int numTyres;
    
    public:
     string color;

    // Vehicle(){
    //     cout<<"Vehicle Default constructor is called"<<endl;
    // }
    Vehicle(int r){
        maxSpeed = r;
        cout<<"Vehicle parametrised constructor is called"<<endl;
    }
    ~Vehicle(){
        cout<<"Vehicle Destructor is called"<<endl;
    }
};