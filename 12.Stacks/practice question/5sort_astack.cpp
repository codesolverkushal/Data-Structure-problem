#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int num){
    if(s.empty() || (!s.empty()&& s.top()<num)){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();

    solve(s,num);
    s.push(n);
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    sortStack(s);

    solve(s,num);
}
int main(){
    stack<int> s;

    s.push(11);
    s.push(12);
    s.push(31);
    s.push(4);

   sortStack(s);

   while (!s.empty())
   {
      cout<<s.top()<<" ";
      s.pop();
   }
   

   

   
}



