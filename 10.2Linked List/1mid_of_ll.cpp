#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"

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
            tail = newNode;
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
void findmid(Node *head){
    int i = 0;
    int j = 5;
    int mid = (i+j-1)/2;
    cout<<mid<<" "<<endl; 
    Node *temp = head;
    while (i<mid)
    {
        temp = temp->next;
        i++;
    }
    cout<<"mid element is "<<temp->data;
    
}

int main(){
    Node *head = takeInput();
    print(head);

    findmid(head);
return 0;
}