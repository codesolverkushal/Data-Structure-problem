#include<bits/stdc++.h>
using namespace std;

// template<typename T>
class Node{
    public:
    // T data;
    int data;
    // Node<T> *next;
    Node *next;   
  

    Node(int data){
        this->data = data;
        next = NULL;
    }
};
// template<typename T>
class Stack{
//    Node<T> *head;
Node *head;
  
   int size;

   public:
   Stack(){
      head = NULL;
      size = 0;
   }
   int getSize(){
       return size;
   }

   bool isEmpty(){
   return size == 0;
   }

//    void push(T element)
   void push(int element)
   {
    //    Node<T> *newNode = new Node(element);
    Node *newNode = new Node(element);
       newNode->next = head;
       head = newNode;
       size++;

   }

   int pop()
   {
    if(isEmpty())
    {
        return 0;
    }
    //  T ans = head->data;
        //  Node<T> *temp = head;
    int ans = head->data;
    Node *temp = head;
     head = head->next;
     delete [] temp;
     size--;
     return ans;
   }

   int top(){
    if(isEmpty()){
        return 0;
    }
       return head->data;
   }
   
};