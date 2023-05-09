#include<bits/stdc++.h>
using namespace std;
#include<stack>
void insertAtbo(stack<int> &s,int num){
   if(s.empty()){
     s.push(num);
     return;
   }
   int x = s.top();
   s.pop();

   insertAtbo(s,num);
   
   s.push(num);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    reverse(s);
    insertAtbo(s,num);
}
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverse(s);

   

   
}



