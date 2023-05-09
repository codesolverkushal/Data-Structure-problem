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

}
Node *reverse(Node *head){
if(head==NULL || head->next==NULL){
        return head;
    }
    Node *ans = reverse(head->next);

    Node *temp = ans;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return ans;

}
int main(){
    Node *head = takeInput();
    print(head);
    cout<<endl;

    Node * result = reverse(head);
    print(result);

return 0;
}