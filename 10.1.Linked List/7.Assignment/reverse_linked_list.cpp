#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"
void reverse(Node *head, Node *curr,Node *prev){
  if(curr==NULL){
    // head = prev;
    return;
  }

  Node *forward = curr->next;
 
  reverse(head,forward,curr);
  curr->next = prev;
  curr = forward;
  
}
Node *takeInput(){
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
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
int main()
{
    Node *head = takeInput();
    print(head);
    cout<<endl;

    Node *curr = head;
    Node *prev = NULL;


    reverse(head,curr,prev);
    // print(head);
// }`
}