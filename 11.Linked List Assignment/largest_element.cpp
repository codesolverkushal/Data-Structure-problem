#include<iostream>
using namespace std;

int main(){
    int a[] = {3,4,6,3,2,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    
    int max = a[0];
    for(int i = 1;i<n;i++){
         if(a[i]>min){
            max = a[i];
         }

    }
    cout<<min<<endl;
}