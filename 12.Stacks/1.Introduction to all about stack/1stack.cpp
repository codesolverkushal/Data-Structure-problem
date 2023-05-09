#include<climits>
#include<bits/stdc++.h>
using namespace std;

class stackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
    stackUsingArray(int totalsize){
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }

    //return the no. of the element

    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex == 0;
    }

    // insert element

    void push(int element)
    {
        if(nextIndex == capacity)
        {
            cout<<"Stack is full now"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return(data[nextIndex-1]);
    }
};