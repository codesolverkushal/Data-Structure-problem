#include<bits/stdc++.h>
using namespace std;
#include "80dll_node.cpp"

Node *insertAtStart(Node *head, int data){
    Node *temp = head;
    if(head == NULL){
        return head;
    }
    else{
     
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
       
        head = newNode;
    }
    return head;
}

Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
    {
    Node *newNode = new Node(data);
       if(head==NULL){
          head = newNode;
          tail = newNode;
       }
    
      else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
      }
      cin>>data;
    
    }
    return head;
    
}
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node *head = takeInput();
    print(head);

    int data;
    cin>>data;

    Node *temp = insertAtStart(head,data);
    print(temp);
return 0;
}