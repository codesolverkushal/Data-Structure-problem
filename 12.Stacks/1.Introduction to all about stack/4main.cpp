#include<iostream>
using namespace std;
#include"4pair_different.cpp"

int main(){
    Pair<int,double>p1;
    
    p1.setX(100);
    p1.setY(100.34);

    cout<<p1.getX()<<" "<<p1.getY()<<endl;

    
    
return 0;
}