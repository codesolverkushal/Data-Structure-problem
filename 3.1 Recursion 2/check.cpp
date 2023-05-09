#include<bits/stdc++.h>
using namespace std;
void print(int n){
    cout<<n<<endl;
}
bool check(int n){
    print(n);
    // return fmod((log10(n)/log10(3)),1) == 0;
     if(n==3 || n==1){
        return true;
     }
     if(n%3==1 || n%3==2 || n==0){
        return false;
     }
     return check(n/3);
}
int main(){
    int num;
    cin>>num;

    bool ans = check(num);

    if(ans){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    // int n= num;
    // if(num>0){
    //     while (num%2==0)
    //     {
    //       num =num/2;
    //     }
    //     if(num==1){
    //         cout<<n<<"is a power of 2."<<endl;
    //     }
        
    // }
    // if(num==0 || num!=1){
    //     cout<<n<<" is not a power of 2."<<endl;
    // }
    return 0;
}