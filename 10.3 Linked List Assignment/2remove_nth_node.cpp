#include<bits/stdc++.h>
using namespace std;
#include"class.cpp"
Node *removeN(Node *head, int n)
{
  Node *start;
  start->next = head;

  Node *fast = start;
  Node *slow = start;

  for(int i = 1;i<=n;i++)
  {
    fast = fast->next;
  }

  while(fast->next!=NULL){
    fast = fast->next;
    slow = slow->next;
  }
  slow->next = slow->next->next;

return head;
}
int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}

Node *takeInput()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
Node *head = takeInput();
print(head);
int ans = length(head);

cout<<ans<<endl;

Node *nth = removeN(head,4);

print(nth);
return 0;
}