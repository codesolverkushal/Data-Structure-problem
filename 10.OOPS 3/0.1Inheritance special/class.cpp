#include<bits/stdc++.h>
using namespace std;


class Human{
    public:
      int height;
      int weight;
      int age;


      int get(){
        return this->age;
      }
      void setWeight(int w){
        this->weight = w;
      }
};


class Male : public Human{
    
    public:
       string color;

       void sleep()
       {
        cout<<"male sleeping"<<endl;
       }

};

int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;

    cout<<object1.color<<endl;
}