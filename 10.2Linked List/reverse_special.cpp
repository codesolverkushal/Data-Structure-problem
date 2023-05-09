#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"
   Node *takeInput(){
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data!=-1){
        Node * newNode = new Node(data);
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
        temp =temp->next;
        
    }
    cout<<endl;

}


Node *kreverse(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    Node *temp = NULL;
    Node *curr = head;
    Node *prev = NULL;

    int count = 0;
    while(curr!=NULL && count<k){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        count++;
    }
    
    if(temp!=NULL){
        head->next = kreverse(temp,3);
    }
    return prev;

}
int main(){
    Node *head = takeInput();
    print(head);

    Node *rev = kreverse(head,3);
    print(rev);
return 0;
}