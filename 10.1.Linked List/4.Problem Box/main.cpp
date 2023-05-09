#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"
Node *ti(){
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
// Count the total list of the our linked list

int count(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
       count++;
       temp = temp->next;
    }
    return count;
}

// find ith postion element in the linked list 

void print(int pos, Node*head){
//  int x = pos;

   if(head==NULL){
    cout<<"Linked list is empty"<<endl;
   }
  
   else{
      Node *temp = head;
        while(pos>1){
          temp = temp->next;
          pos--;
          
        }
        cout<<temp->data<<endl;
       
   }

    
}
int main(){
    Node *head = ti();
    // int ans = count();
    int ans = count(head);
    cout<<ans<<endl;

    print(4,head);
}