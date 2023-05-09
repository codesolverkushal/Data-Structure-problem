#include<bits/stdc++.h>

#include"8_hashmap_implement.cpp"
using namespace std;

int main(){
    ourmap<int> map;

    map.insert("abc",10);
    map.insert("aec",20);
    map.insert("ac",30);
    map.insert("atc",40);

    cout<<map.size()<<endl;
    cout<<map.getValue("ac")<<endl;
}