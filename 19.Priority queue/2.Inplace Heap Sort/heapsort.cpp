#include<bits/stdc++.h>
using namespace std;


void inplaceHeapSort(int input[], int n){
    //Build the heap in input array.

    for (int i = 0; i < n; i++)
    {

        int childIndex = i;

        while (childIndex>0)
        {
          int parentIndex = (childIndex-1)/2;

          if(input[childIndex]<input[parentIndex]){
            int temp = input[childIndex];
            input[childIndex] = input[parentIndex];
            input[parentIndex] = temp;

          }
          else{
            break;
          }
          
        childIndex = parentIndex;
        }

    }
    int size = n;
    while (size>1){
    {
     
    
    int temp = input[0];
    input[0] = input[size-1];
    input[size-1] = temp;

    size--;

    int parentIndex = 0;
    int leftChildIndex = 2*parentIndex + 1;
    int rightChildIndex = 2*parentIndex + 2;
    
    while (leftChildIndex<size)
    {
        int minIndex = parentIndex;
        if(input[minIndex]>input[leftChildIndex]){
            minIndex = leftChildIndex;
        }
        if(rightChildIndex>size && input[rightChildIndex]>input[minIndex]){
            minIndex = rightChildIndex;
        }

        if(minIndex==parentIndex){
            break;
        }
        int temp = input[minIndex];
        input[minIndex] = input[parentIndex];
        input[parentIndex] = temp;

        int parentIndex = minIndex;

        int leftChildIndex = 2*parentIndex + 1;
        int rightChildIndex = 2*parentIndex + 2;
    }
    }
    }
    
       
    }
    void print(int* input, int n){
        for(int i= n-1;i>=0;i--){
            cout<<input[i]<<" "; 
        }
    }
    

int main(){
    int input[] = {5,8,1,2,0};
    int n = sizeof(input)/sizeof(input[0]);
    inplaceHeapSort(input,n);
    print(input,n);
return 0;
}