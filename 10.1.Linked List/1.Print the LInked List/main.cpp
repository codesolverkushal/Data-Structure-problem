#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"

void print(Node *head){
    Node *temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
   cout<<endl;
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node *n1 = new Node(5);
    Node *head = n1;
    Node *n2 = new Node(10);
    n1->next = n2;
    Node *n3 = new Node(20);
    n2->next = n3;
    Node *n4 = new Node(30);
    n3->next = n4;
    Node *n5 = new Node(40);
    print(head);
    cout<<endl;
    print(head);

    // cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data<<endl;
return 0;
}