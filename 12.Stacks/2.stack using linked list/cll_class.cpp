#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
    int data;
    Node *next;
   
   Node(int data){
    this->data = data;
    next = NULL;
   }
};

class Stack{
    Node *head;
    int size;

    public:
    Stack(){
        head = NULL;
        size= 0;
    }

    int getSize(){
        return size;
    } 
    bool isEmpty(){
        return size == 0;
    }

    void push(int data){
        Node *newNode = new Node(data);

        newNode->next = head;
        head = newNode;
        size++;
    }

    int pop(){
        if(head == NULL){
            return 0;
        }
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete [] temp;
        size--;
        return ans;
    }
    int top(){
        if(head == NULL){
            return 0;
        }
        return head->data;
    }
};