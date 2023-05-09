#include<bits/stdc++.h>
using namespace std;
#include"3templates.cpp"

int main(){
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);

    cout<<p1.getX()<<p1.getY()<<endl;
    
    Pair<double>p2;
    p2.setX(10.02);
    p2.setY(30.45);

    cout<<p2.getX()<<p2.getY()<<endl;

//    Pair<char>p3;

return 0;
}