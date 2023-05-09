#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{

};

class GermanShepherd : public Dog{

};

int main(){
    Dog d;
    d.speak();

    cout<<d.age<<endl;

    GermanShepherd h;
    h.speak();

    cout<<h.age<<endl;
}