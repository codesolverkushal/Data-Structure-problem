#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node *next;

       Node(int data){
          this->data = data;
          next = NULL;
       }
};

Node *takeInput()
{
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
void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* merge(Node* head1, Node* head2)
{
    Node* p1 = head1;
    Node* p2 = head2;

    Node* dummyNode =new Node(-1);
    Node* p3 = dummyNode;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next= p1;
            p1= p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next; 
    }
    while(p1!=NULL){
        p3->next = p1;
        p1= p1->next;
        p3 = p3->next;
    }
    while (p2!=NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

int main(){
    Node *head1 = takeInput();
    // print(head);
    Node *head2 = takeInput();

    Node* newhead = merge(head1,head2);

    print(newhead);

    
return 0;
}