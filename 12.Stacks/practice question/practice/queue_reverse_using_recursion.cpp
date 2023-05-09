#include<bits/stdc++.h>
using namespace std;
#include<stack>
void print(queue<int> &q){
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}

void reverse(queue<int> &q)
{
    if(q.empty()){
        return;
    }
    int num = q.front();
    q.pop();

    reverse(q);
    q.push(num);
}
int main(){
    int a[7] = {1,2,3,4,5,6,7};
    queue<int> q;
    for (size_t i = 0; i < 7; i++)
    {
        q.push(a[i]);
    }

    reverse(q);
    print(q);
    
return 0;
}