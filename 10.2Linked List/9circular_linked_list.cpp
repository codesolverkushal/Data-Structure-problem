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
            newNode->next = head;
        }
        else{ 
            tail->next = newNode;
            tail = newNode;
            newNode->next = head;

        }
        cin>>data;
    }
    return head;
}
void print(Node *head){
    Node *temp = head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node *head = takeInput();
    print(head);    
return 0;
}