#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imaginary;

    public:

    complex(int real,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<<this->real << " + "<<this->imaginary<<"i"<<endl;
    }
   

    void add(complex &c2){
        int x = real + c2.real;
        int y = imaginary + c2.imaginary;

        real = x;
        imaginary = y;

    }

};