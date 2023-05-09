#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"
Node* insertAtNode(int pos, int data, Node*head){

   Node *newNode = new Node(data);
   int count = 0;
   Node *temp = head;
   if(pos==0){
     newNode->next = head;
     head = newNode;
     return head;
   }
   else{
   while(temp!=NULL && count<pos-1)
   {
      temp = temp->next;
      count++;
   }
   if(temp!=NULL){
//    Node* a = temp->next;
   newNode->next = temp->next;
   temp->next = newNode;
//    newNode->next = a;
   }
   }
   return head;    
  
}
Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    }
int main(){
    Node *head = takeInput();
    print(head);
    int i,data;
    cin>>i>>data;
    Node * temp = insertAtNode(i,data,head);
    print(temp);
}
