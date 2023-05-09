#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"

Node *appendAtLast(Node *head,int n,int len){
     int count = len - n;
     Node *curr = head;
     Node *h2 = NULL;

    int i = 1;
     while(i<count){
        curr = curr->next;
        i++;
     }
     h2 = curr->next;

     curr->next = NULL;

     Node *temp = h2;
     while(temp->next!=NULL){
        temp = temp->next;
     }
     temp->next = head;

     return h2;
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
        temp = temp->next;
    }
}
int main(){
Node* head = takeInput();
// print(head);
int n = length(head);
// cout<<n<<endl;
int x;
cin>>x;
Node *temp = appendAtLast(head,x,n);
print(temp);
return 0;


}