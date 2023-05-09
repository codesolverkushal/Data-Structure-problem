// merge two sorted linked list...

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
Node *merge(Node *head1, Node *head2) {
  
  if (head1 == NULL) {
    return head2;
  } else if (head2 == NULL) {
    return head1;
  }


  Node  *mergedHead = NULL;
  Node  *mergedTail = NULL;
  if (head1->data <= head2->data) {
    mergedHead = head1;
    mergedTail = head1;
    
    head1 = head1->next;
  } else {
    mergedHead = head2;
    mergedTail = head1;
    head2 = head2->next;
  }

  
  
  while (head1 != NULL && head2 != NULL) {
    Node *temp = NULL;
    if (head1->data <= head2->data) {
      temp = head1;
      head1 = head1->next;
    } else {
      temp = head2;
      head2 = head2->next;
    }

    mergedTail->next = temp;
    mergedTail = temp;
  }

  if (head1 != NULL) {
    mergedTail->next = head1;
  } else if (head2 != NULL) {
    mergedTail->next = head2;
  }

  return mergedHead;
}


int main(){
    Node *head = takeInput();
    Node *temp = takeInput();
    print(head);
    cout<<endl;
    print(temp);

    Node *mer = merge(head,temp);
    print(mer);
return 0;
}
