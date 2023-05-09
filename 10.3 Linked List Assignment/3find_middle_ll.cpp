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
        if(head==NULL)
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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int middle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main(){
  Node *head = takeInput();
  print(head); 
  int ans = middle(head);
  cout<<"middle of the linked list is :"<<endl;
  cout<<ans<<endl;   
return 0;
}