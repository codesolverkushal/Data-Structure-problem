#include<iostream>
using namespace std;
int firstindex(int a[] ,int n ,int x){
    if(a[0]==x){
        return 0;
    }
     if(n==0){
        return -1;
    }
    int ans = firstindex(a+1,n-1,x);
    return ans+1;
   
}

int main(){ 
    int a[] = {2,3,4,2,4};
    int n = sizeof(a)/sizeof(int);
    int x;
    cin>>x;
    int index = firstindex(a,n,x);
    cout<<index<<endl;
}