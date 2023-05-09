#include<iostream>
using namespace std;
bool check(int n){
    if(n==3){
        return true;
    }
    if (n%3!=0)
    {
        return false;
    }
    int x = n/3;
    return check(n/x);  
    
}
int main(){
    int n;
    cin>>n;

    bool ans = check(n);
    if(ans){
        cout<<"Yes it is multiple of 3";
    }
    else{
        cout<<"No it is not multiple of 3";
    }
}