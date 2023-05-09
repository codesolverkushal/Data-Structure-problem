#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"
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
        tail->next = newNode;
        tail = newNode;
        cin>>data;
    }
    return head;
 }

int search(Node *head,int key){
    int count = 0;
    Node *temp = head;
    if(head==NULL){
        return -1;
    }
     
    else{
        while(temp->data!=key){
            temp = temp->next;
            count++;
        }
        
    }  
    return count; 
}
void print(Node *head){
    Node *temp  =head;
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
  int y = search(head,data);
  cout<<y;
return 0;
}