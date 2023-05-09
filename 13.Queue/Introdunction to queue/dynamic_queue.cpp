#include<bits/stdc++.h>
using namespace std;


class Queue{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
      Queue()
      {
         data = new int[1];
         nextIndex = 0;
         firstIndex = -1;
         size = 0;
         capacity = 1;

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
          int *newData = new int[2*capacity];
          int j = 0;
          for(int i = firstIndex;i<capacity;i++){
                newData[j] = data[i];
                j++;
          }

          for(int i = 0;i<firstIndex;i++){
            newData[j] = data[i];
            j++;
          }
          delete [] data;
          firstIndex = 0;      
          data = newData;

          nextIndex = capacity;
          capacity *=2;
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