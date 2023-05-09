#include<bits/stdc++.h>
using namespace std;

bool checkHeap(int a[], int n){
     
     priority_queue<int> pq;

     for (int i = 0; i <n; i++)
     {
         pq.push(a[i]);
     }
    bool output = true;
     int ans = INT_MIN;
     int ans1 = 0;
     int j =0;
     while (!pq.empty() && j<n)
     {
         ans = pq.top();
         pq.pop();
        if(j==0){
            j++;
            continue;
        }
        ans1 = ans;
        if(ans1<ans){
            output = false;
        }
        else{
            j++;
        }
        
        
     }
     return output;
     
     
}
int main(){
    int a[] = {42, 20, 18, 6, 14, 11, 9, 4};
    // int a[] = {10,5,8,1,4};

    // int a[] = {12,15,6,7,9};
    // int a[] = {3,2,3,1,2,4,5,5,6};

    int n = sizeof(a)/sizeof(a[0]);
    bool ans = checkHeap(a,n);
    if(ans){
        cout<<"You get a gift"<<endl;
    }
    else{
        cout<<"Try again! don't worry bro.."<<endl;
    }
return 0;
}