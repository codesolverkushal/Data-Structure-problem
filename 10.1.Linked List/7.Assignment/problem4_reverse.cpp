#include<iostream>
using namespace std;
#include "node.cpp"

Node *reversal(Node *head){
   Node *curr = head;
   Node *prev = NULL;
   Node *forward = NULL;

   while (curr!=NULL)
   {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
   }
   return prev;


}
int length(Node *head){
     Node *temp = head;
     int count = 0;
     while (temp!=NULL)
     {
        count++;
        temp = temp->next;
     }
     return count;
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
//    print(head);

//    int y = length(head);

   Node * reverse = reversal(head);
    
    print(reverse);

}