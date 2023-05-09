#include<bits/stdc++.h>
using namespace std;
#include"queue.cpp"

int main(){
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
   

    cout<<q.first()<<endl;

    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;

    q.enqueue(60);

    cout<<q.first()<<endl;
return 0;
}