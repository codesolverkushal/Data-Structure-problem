#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"


Node *deleteNode(Node *head, int pos)
{
   if(head == NULL)
   {
       return head;
   }

   if(pos == 0)
   {
       return head->next;
   }

   Node* curr = head;
   int count = 0;

   while(curr != NULL && count < pos - 1)
   {
       
       curr = curr->next;
       count++;
   }

   if(curr == NULL || curr->next == NULL)
   {
       return head;
   }

   curr->next = curr->next->next;
   
   delete curr;
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
    int i;
    cin>>i;
   Node *head1 =  deleteNode(head,i);
    print(head1);
    
}
