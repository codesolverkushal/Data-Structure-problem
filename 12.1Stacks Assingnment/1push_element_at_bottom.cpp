#include<bits/stdc++.h>
using namespace std;
#include<stack>

void bottom(stack<int> &s, int k)
{
  if(s.empty()){
    s.push(k);
    return;
  }
  int num = s.top();
  s.pop();

  bottom(s,k);
  s.push(num);
}

void print(stack<int> &s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
   stack<int> s;
   s.push(10);    
   s.push(20);    
   s.push(30);    
   s.push(40);

  bottom(s,50);
  print(s);
return 0;
}