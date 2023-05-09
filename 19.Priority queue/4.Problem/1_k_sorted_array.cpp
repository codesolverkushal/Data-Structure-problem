#include<bits/stdc++.h>
#include<queue>
using namespace std;

void ksorted(int input[], int n, int k){
    priority_queue<int> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
    }
    
    int j = 0;
    for (int i = k; i < n; i++)
    {
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }
    while (!pq.empty())
    {
        input[j] = pq.top();
        pq.pop();
        j++;
    }
    
    
}
void print(int* input, int n ){
  for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<" ";
    }   
}

int main(){
    int input[] = {12,15,6,7,9};
    ksorted(input,5,3);
    print(input,5);
return 0;
}