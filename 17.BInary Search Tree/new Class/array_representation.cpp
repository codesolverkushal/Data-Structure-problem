#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

class Tree{
    public:
    int a[100];

    void insert(int v, int n){
        a[n] = v;
    }

    void insertLChild(int  pi, int value){
       a[2*pi + 1] = value;
    }

    void rightChild(int pi, int value){
        a[2*pi + 2] = value;
    }

    int getLeftChild(int pi){
        return a[2*pi + 1];
    }
};