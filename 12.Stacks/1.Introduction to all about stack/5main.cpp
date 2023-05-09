#include<bits/stdc++.h>
using namespace std;
#include"5triplet_class.cpp" 

int main(){
    Pair<Pair<int,int>, int>p2;
    p2.setY(20);
    
   
   Pair<int,int>p3;

   p3.setX(20);
   p3.setY(16);


   p2.setX(p3);
   cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
return 0;
}