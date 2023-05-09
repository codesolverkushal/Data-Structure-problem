#include<iostream>
using namespace std;

int power(int a,int b){
    
     if(a == 0 && b==0){
        return 0;
     }
     if(a==0){
        return 1;
     }
    //  int sp = power(a-1,b);
    
    //  return sp*b;

    if(a==1){
        return b;
    }

    int ans = power(a/2,b);
    if(a%2==0){
        return ans*ans;

    }
    else{
        return b*ans*ans;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    
    int ans = power(a,b);
    cout<<ans;
    
}