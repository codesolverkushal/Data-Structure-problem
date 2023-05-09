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
        if(head == NULL){
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

void palindrome1(int *a,Node *head){
     Node *temp = head;
     int i = 0;
     while (head!=NULL && i<5)
     {
        a[i] = temp->data;
        temp = temp->next;
        i++;
     }
     
    

     
     
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

    int a[5];
    palindrome1(a,head);
return 0;
}