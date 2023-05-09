#include<bits/stdc++.h>
using namespace std;
#include "car_class.cpp"

class HondaCity : public Car{
    public:

    HondaCity(int x, int y): Car(x,y){
        cout<<"Honda City constructor"<<endl;
    }
   ~HondaCity(){
    cout<<"Honda city destructor is called"<<endl;
   }
};
