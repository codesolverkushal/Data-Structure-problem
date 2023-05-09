#include<bits/stdc++.h>
using namespace std;
#include "1stack.cpp"

int main(){
stackUsingArray s(4);

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
return 0;
}