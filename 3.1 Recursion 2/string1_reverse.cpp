#include<iostream>
using namespace std;

int main(){
    string s1 = "kushal";
    int s = 0;
    int e = s1.length()-1;
    cout<<e;
    while (s<e)
    {
        swap(s1[s],s1[e]);
        s++;
        e--;
    }
    cout<<s1;
    
    
}