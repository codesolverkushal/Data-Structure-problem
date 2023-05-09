#include<bits/stdc++.h>
using namespace std;
#include<stack>


void print(stack<int> &s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
void sortedInsert(stack<int> &s, int num)
{
    if(s.empty() || (!s.empty() && s.top()<num))
    {
        s.push(num);
        return;
    }
    int x = s.top();
    s.pop();

    sortedInsert(s,num);
    s.push(x);
}
void sort(stack<int> &s)
{
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    sort(s);

    sortedInsert(s,num);
}
int main(){
   stack<int> s;
   s.push(10);    
   s.push(9);    
   s.push(30);    
   s.push(4);

  sort(s);
  print(s);
return 0;
}