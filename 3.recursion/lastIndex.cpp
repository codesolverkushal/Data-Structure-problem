#include<iostream>
using namespace std;
int lastindex(int a[], int n , int x){
    if(n<0){
        return -1;
    } 
    if(a[n]==x){
        return n;
    }
    int ans = lastindex(a,n-1,x);
    return ans;

}
int main(){ 
    int a[] = {2,3,4,2,4};
    int n = sizeof(a)/sizeof(int);
    int x;
    cin>>x;
    int index = lastindex(a,n,x);
    cout<<index<<endl;
}