#include<bits/stdc++.h>
using namespace std;
#include"class.cpp"

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
Node *reverseKgroup(Node *head, int k )
{
    if(head == NULL || k==1){
        return head;
    }
    Node *dummy = new Node(0);
    dummy->next = head;
    Node *curr = dummy,   *nex = dummy, *prev = dummy;


    int count = 0;

    while (curr->next!=NULL)
    {
        curr = curr->next;
        count++;
    }
     while(count>=k)
     {
          curr = prev->next;
          nex = curr->next;

          for(int i = 1;i<k;i++)
          {
            curr->next = nex->next;
            nex->next = prev->next;
            prev->next = nex;
            nex = curr->next;
          }
          prev = curr;
          count -=k;
     }
     return dummy->next;

}
int main(){
    Node *head = takeInput();
    print(head);

    Node *temp = reverseKgroup(head,3);
    print(head);
return 0;
}