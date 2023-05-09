#include<bits/stdc++.h>
using namespace std;   
   
   int findKthLargest(int nums[], int n,int k) {
        
        priority_queue<int> pq;
        int len = k;
        for(int i = 0;i<n;i++){
            pq.push(nums[i]);
        }
        
        int j = 1;
        int ans = -1;
        while (!pq.empty() && j<=4)
        {
            ans = pq.top();
            pq.pop();
            j++;
           

        }
        return ans;
        

    }

    int main(){
        int a[] = {3,2,3,1,2,4,5,5,6};
        int n = sizeof(a)/sizeof(a[0]);
         int ans = findKthLargest(a,n,4);
         cout<<ans<<" ";
    }