#include<bits/stdc++.h>
using namespace std;
#include<stack>

int main(){
    stack<int> s;

    // push

    s.push(2);
    s.push(4);

    // pop


   s.pop();
   
   cout<<"Top element is :"<<s.top()<<endl;

   //Check Empty

   if(s.empty())
   {
    cout<<"Stack is empty"<<endl;
   }
   else{
    cout<<"Stack is not empty"<<endl;
   }
   return 0;
}