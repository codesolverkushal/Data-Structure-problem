#include<iostream>
using namespace std;
#include "node.cpp "


void print(Node*head){
  Node *temp = head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;

  temp = head; 
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
  
  
  
}
int main(){
    Node *n1 = new Node(10);
    Node*head = n1;
    
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    print(head);
    print(head);
}