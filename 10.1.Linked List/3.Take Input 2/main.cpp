#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"

Node *ti(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;

            //or tail = newNode;
        }
    }
}
void print(Node* head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
     
}

int main(){
    Node *head = ti();
    print(head);
}