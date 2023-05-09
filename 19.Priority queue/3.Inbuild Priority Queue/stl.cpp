#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(16);
    pq.push(116);
    pq.push(106);
    pq.push(23);
    pq.push(167);
    pq.push(123);

    cout<<"Size :: "<<pq.size()<<endl;
    cout<<"Size :: "<<pq.top()<<endl;

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    

return 0;
}