#include<iostream>
#include<vector>
using namespace std;

#include"PriorityQueue.h"


int main(){
    PriorityQueue p;
    p.insert(100);
    p.insert(200);
    p.insert(400);
    p.insert(500);
    p.insert(600);
    p.insert(700);
    p.insert(800);

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

    while (!p.isEmpty())
    {
        cout<<p.removeMin()<<" ";
    }
    cout<<endl;
    
}