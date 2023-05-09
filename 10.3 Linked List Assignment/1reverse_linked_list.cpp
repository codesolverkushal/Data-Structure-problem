#include<bits/stdc++.h>
using namespace std;
#include"class.cpp"

Node *reverse(Node *head)
{
    Node *prev = NULL;

    while (head!=NULL)
    {
        Node *curr = head->next; 
        head->next = prev;
        prev = head;
        head = curr;
    }
    return prev;
    

}
Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head = takeInput();
    print(head);
    cout<<"Reverse Linked list is "<<endl;

    Node *rev = reverse(head);
    print(rev);
    return 0;
}