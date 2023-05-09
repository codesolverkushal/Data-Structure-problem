#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second  =new int[len2];

    int k1 = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = a[k1++];
    }

    int k2 = mid+1;
    for(int i = 0;i<len2;i++){
        second[i] = a[k2++];
    }
    int n1 = 0;
    int n2 = 0;

    int m = s;

    while(n1<len1 && n2<len2)
    {
        if (first[n1]<second[n2])
        {
            a[m] = first[n1];
            m++;
            n1++;
        }
        else
        {
            a[m] = second[n2];
            m++;
            n2++;
        }
        
        
    }
    while(n1<len1){
        a[m] = first[n1];
        m++;
        n1++;
    }
    while (n2<len2)
    {
        a[m] = second[n2];
        m++;
        n2++;
    }   
     
}

void mergeSort(int *a,int s, int e){
    if (s>=e)
    {
        return ;
    }
    int mid = (s+e)/2;
    
    //left part sort.
    mergeSort(a,s,mid);

    //right part sort.
    mergeSort(a,mid+1,e);
    
    //Merge two sorted array..
    merge(a,s,e);
    
}
int main(){
    int a[] = {2,5,8,4,1,9};
    int n = sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}  