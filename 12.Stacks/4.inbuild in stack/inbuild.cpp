#include<bits/stdc++.h>
using namespace std;
#include "class.h"

#include<stack>

int main(){
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);

cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();

cout<<s.size()<<endl;

cout<<s.empty()<<endl;
}


/*int main(){
    Stack s;
    s.push(10);    
    s.push(20);    
    s.push(30);    
    s.push(40);    
    s.push(50);    
    s.push(60);    
    s.push(70);    
    s.push(80);
    
    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.isEmpty()<<endl;
    
}*/