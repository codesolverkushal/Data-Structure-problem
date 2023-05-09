#include<iostream>
using namespace std;

void sort(int *a, int n){
    //Base case
    
    if(n==0 || n==1){
        return ;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    sort(a,n-1);
      
}
int main(){
   int a[] = {3,2,4,6,4,8,6,5,4};
   int n  = sizeof(a)/sizeof(a[0]);
   sort(a,n);

   for (int i = 0; i < n; i++)
   {
     cout<<a[i]<<" ";
   }
   
}