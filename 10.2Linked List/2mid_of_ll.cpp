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
void findmid(Node *head,int n){
    Node *slow = head;
    Node *fast = head->next;
    if(n%2==0){
        while (fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->data<<" ";
        
    }
    else{
        while (fast!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->data<<" ";
        
    }
    
}

int main(){
    Node *head = takeInput();
    print(head);
    
    cout<<endl;
    
    int tno;
    cin>>tno;
    findmid(head,tno);
return 0;
}