#include<bits/stdc++.h>
using namespace std;
#include<stack>

void sortedInsert(stack<int> &s,int num)
{
    if(s.empty() || s.top()<num){
        s.push(num);
        return;
    }
    int x = s.top();
    s.pop();

    sortedInsert(s,num);

    s.push(x);
}

void sort(stack<int> &s){
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

int a[8] = {1,23,6,5,4,9,7,8};

for(int i = 0;i<8;i++)
{
    int x = a[i];
    s.push(x);
}

sort(s);

while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
return 0;
}