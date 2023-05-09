#include<bits/stdc++.h>
using namespace std;
#include"class.cpp"



int main(){
//    Stack<char> s;
     Stack s;
   
   s.push(100);
   s.push(101);
   s.push(102);
   s.push(103);
   s.push(105);

   cout<<s.top()<<endl;

   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;

   cout<<s.getSize()<<endl;
   cout<<s.isEmpty()<<endl;
return 0;
}