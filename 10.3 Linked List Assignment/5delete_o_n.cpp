#include<bits/stdc++.h>
using namespace std;
#include"class.cpp"

Node *takeInput()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while(data!=-1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
           tail->next = newNode;
           tail = newNode;
        }
        cin>>data;
    }
    return head;
}
void print(Node *h1)
{
    Node *temp = h1;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main(){
    Node *head = takeInput();
    print(head);
 
   
   
   
return 0; 
}