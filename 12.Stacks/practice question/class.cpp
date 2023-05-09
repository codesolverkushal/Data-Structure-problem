#include<climits>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *data;
    int nextIndex;
    int capacity;

    public:
    Stack(){
        data = new int[1];
        nextIndex = 0;
       capacity = 1;
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
            int *neData = new int[2*capacity];

            for(int i = 0;i<capacity;i++)
            {
                 neData[i] = data[i];                             
            }
            capacity *=2;
            delete [] data;
            data = neData;
          
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            // return INT_MIN;
        }
        nextIndex--;
        // return data[nextIndex];
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