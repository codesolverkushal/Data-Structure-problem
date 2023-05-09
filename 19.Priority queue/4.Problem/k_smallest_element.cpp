#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int k){
    int size = n-k;
    int b[k];
    priority_queue<int, vector<int>, greater<int> > pq;
    
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
    }

    int j = 0;
    while (pq.size()!=size)
    {
        b[j] = pq.top();
        pq.pop();
        j++;
    }

    for (int i = 0; i < k; i++)
    {
        cout<<b[i]<<" ";
    }
    
    
    
}
int main(){
    int a[] = {9, 7, 10, 1 ,3,2, 5, 7};
    int n = sizeof(a)/sizeof(a[0]);

    solve(a,n,4);
return 0;
}