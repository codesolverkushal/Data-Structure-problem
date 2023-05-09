#include<bits/stdc++.h>
using namespace std;
template<typename T>

class stackUsingArray{
    T *data;
    int nextIndex;
    int capacity;

    public:
    stackUsingArray(){
        data = new T[1];
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

    void push(T element)
    {
        if(nextIndex == capacity)
        {
            T   *neData = new T[2*capacity];

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

    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return(data[nextIndex-1]);
    }
};