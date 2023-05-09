#include<bits/stdc++.h>
using namespace std;
#include<stack>

void insertStBottom(stack<int> &s,int element)
{
    if(s.empty()){
        s.push(element);
        return;
    }
    int x = s.top();
    s.pop();

    insertStBottom(s,element);
    s.push(x);
}
void reverse(stack<int> &s)
{
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    reverse(s);
    insertStBottom(s,num);
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

  reverse(s);
  print(s);
return 0;
}