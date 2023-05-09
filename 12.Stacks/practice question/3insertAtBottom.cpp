#include<bits/stdc++.h>
using namespace std;
#include<stack>
void print(stack<int> s){
    while (!s.empty())
    {
       cout<<s.top()<<" ";
       s.pop();
    }
    
   
}
void insertAtBottom(stack<int>&s, int x)
{
    
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();

    s.pop();

    insertAtBottom(s,x);

    s.push(num);

  
}

int main(){
stack<int> s;

s.push(10);
s.push(20);
s.push(30);

int x = 40;

insertAtBottom(s,x);


print(s);

return 0;
}