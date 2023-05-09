#include<bits/stdc++.h>
using namespace std;


class Queue{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
      Queue(int s)
      {
         data = new int[s];
         nextIndex = 0;
         firstIndex = -1;
         size = 0;
         capacity = s;

      }

      int getSize()
      {
        return size;
      }

      bool isEmpty()
      {
        return size ==0;
      }

      void enqueue(int element)
      {
        if(size == capacity){
            cout<<"Please deltete before insert"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1)%5;

        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;
      }

      int first(){
        if(size==0){
            cout<<"Is empty"<<endl;
            return 0;
        }
        return data[firstIndex];
      }

      int deque()
      {
        if(size==0){
          cout<<"Is empty"<<endl;
          return 0;
        }
        int ans = data[firstIndex];
        firstIndex = (firstIndex + 1)%5;
        size--;
        if(size == 0)
        {
          firstIndex = -1;
          nextIndex = 0;
        }
        return ans;
      }
};