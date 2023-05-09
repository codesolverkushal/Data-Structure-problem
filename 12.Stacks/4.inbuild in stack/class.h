#include<bits/stdc++.h>
using namespace std;

class Stack{
    
     int *data;
     int nextIndex;
     int capacity;
  public:
    Stack()
    {
        data = new int[1];
        nextIndex = 0;
        capacity = 1;
    }

    int getSize()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex == 0;
    }
    void push(int element)
    {
        if(nextIndex==capacity)
        {
           int  *neData = new int[2*capacity];
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
    int pop()
    {
        if(nextIndex==0)
        {
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if(nextIndex==0)
        {
            return 0;
        }
        return data[nextIndex];
    }
};