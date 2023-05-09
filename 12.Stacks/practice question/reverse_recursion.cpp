#include<bits/stdc++.h>
using namespace std;
#include<stack>

void inserttopelem(stack<int> &s,int num){
    if(s.empty()){
        s.push(num);
        return;
    }

    int x = s.top();
    s.pop();

    inserttopelem(s,num);
    s.push(x);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    reverse(s);
    // temp.push(num);
    inserttopelem(s,num);
}
int main(){
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

    reverse(s);

   while(!s.empty()){
     cout<<s.top()<<endl;
     s.pop();
   }
    

    

    
    


return 0;
}