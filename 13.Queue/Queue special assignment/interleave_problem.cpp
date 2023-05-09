#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<queue>
void solve(queue<int> &q)
{
    stack<int> s;

    int n = q.size()/2;

    for(int i = 1;i<=n;i++)
    {
        int num = q.front();
        q.pop();
        s.push(num);
    }

    while(!s.empty()){
        int num = s.top();
        s.pop();
        q.push(num);
    }

    for(int i = 1;i<=n;i++)
    {
        int num = q.front();
        q.pop();
        q.push(num);
    }
    
    for(int i =1;i<=n;i++)
    {
        int num = q.front();
        q.pop();
        s.push(num);
    }

     while (!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }

} 
  void print(queue<int> q){

    while (!q.empty())
    {
        int num = q.front();
        cout<<num<<endl;
        q.pop();
    }
    
  }



    

int main(){
   queue<int> q;

   q.push(10);    
   q.push(30);    
   q.push(50);    
   q.push(70);    
   q.push(20);    
   q.push(40);    
   q.push(60);    
   q.push(80);
   
   
   
   solve(q); 
   print(q);   
return 0;
}