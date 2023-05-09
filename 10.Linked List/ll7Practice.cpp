#include<iostream>
using namespace std;
#include "node.cpp"

Node *insertAtNode(Node *head, int data, int i){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if(i==0){
        newNode->next = temp;
        head = newNode;
        return head;
    }
    else{
        while(count<i-1){
            temp = temp->next;
            count++;
        }
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
       
    }
     return head;
    
}

void deleteAtNode(Node *head, int j){
    
     if(j==0){
       Node *temp = head;
       head = temp->next;
       delete temp;    
  }

  else{
     Node *curr = head;
     Node *prev = NULL;
     
     int count = 1;
     while (count<=j)
     {
        prev = curr;
        curr = curr->next;
        count++;

     }
     prev->next = curr->next;
     delete curr;
     
  }
     
}
Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
    {
        Node *newNode = new Node(data);
        if (head==NULL)
        {
            head = newNode;
            tail = newNode;
        }

        else{
             tail->next = newNode;
             tail = tail->next;
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
      

      int i , data;
      cin>>i>>data;
      Node *insert = insertAtNode(head, data, i);
      print(head);

      //for deleting..

      int j;
      cin>>j;
      deleteAtNode(head,j);
      print(head);
}