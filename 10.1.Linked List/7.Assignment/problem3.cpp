#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"
Node *duplicateElement(Node *head){
    Node *curr = head;

    
    while (curr!=NULL)
    {
        Node *temp = curr->next;
        if((curr->next!=NULL)&&(curr->data == temp->data)){
            while (temp->data==curr->data){
                temp = temp->next;
            }

            curr->next = temp;
            curr = temp;
            
           
              
        }
        else{
            curr = curr->next;
        }
    }
    return head;
    
    
}
Node *takeinp(){
    int data;
    cin>>data; 
    Node *head = NULL;
    Node *tail = NULL;

    while(data!=-1){
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
    Node *head = takeinp();

    print(head);
    
    cout<<endl;
    Node *temp = duplicateElement(head);

    print(temp);
return 0;
}