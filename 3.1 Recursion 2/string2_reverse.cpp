#include<iostream>
using namespace std;

void reverse(string &s1,int i, int j){
    // base case.
    if(i>j){
        return;
    }
    swap(s1[i],s1[j]);
    i++;
    j--;

    reverse(s1,i,j);
}
int main(){
    string s1  = "kushal";
    int i = 0;
    int j = s1.length()-1;

    reverse(s1,i,j);
    cout<<s1;
}