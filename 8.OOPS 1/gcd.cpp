#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    int j = min(x,y);
    
    int gcd = 1;
    for (int i = 1; i <=j; i++)
    {
        if(x%i==0 && y%i==0){
            gcd = i;
        }
    }
    cout<<gcd<<endl;
    
}