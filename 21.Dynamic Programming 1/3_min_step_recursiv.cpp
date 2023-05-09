#include<bits/stdc++.h>
using namespace std;

int minStep(int n){
    if(n<=1){
        return 0;
    }
    int x = minStep(n-1);
    int y = INT_MAX;
    int z = INT_MAX;
    if(n%2==0){
        y = minStep(n/2);
    }
    if(n%3==0){
        z = minStep(n/3);
    }
    int ans = min(x,min(y,z)) + 1;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<minStep(n)<<endl;
return 0;
}