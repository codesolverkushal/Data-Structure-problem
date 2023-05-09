#include<iostream>
using namespace std;

int main(){
    int a[] = {5,62,7,6,3};
    int n  = sizeof(a)/sizeof(a[0]);

    int first,second = INT_MIN;

    for(int i=1;i<n;i++){
        if (a[i]<a[0])
        {
            second = first;
            first = a[i];
        }
        else{
            second = a[i];
        }
        
    }
    cout<<first<<second;
}