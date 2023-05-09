#include<bits/stdc++.h>
using namespace std;
#include<stack>

void deleteMiddle(stack<int>&inputstack,int count, int size){
    if(count==size/2){
        inputstack.pop();
        return;
    }
    int num = inputstack.top();
    inputstack.pop();

    deleteMiddle(inputstack,count+1,size);
    inputstack.push(num);
}

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    
    deleteMiddle(s,0,7);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

}