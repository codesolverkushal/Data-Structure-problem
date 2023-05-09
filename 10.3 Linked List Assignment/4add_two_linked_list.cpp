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
Node *finaladd(Node *h1, Node *h2){
    Node *dummy = new Node(0);
    Node *temp = dummy;
    
    int carry = 0;
    while(h1!=NULL || h2!=NULL || carry)
    {
        int sum = 0;
        if(h1!=NULL)
        {
            sum = sum + h1->data;
            h1 = h1->next;
        }

        if(h2!=NULL)
        {
            sum = sum + h2->data;
            h2 = h2->next;
        }

        sum = sum + carry;
        carry = sum/10;

        Node *newNode = new Node(sum%10);

        temp->next = newNode;
        temp = temp->next;
    }
    return dummy->next;

}
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
int main(){
    Node *h1 = takeInput();
    // print(h1);
    Node *h2 = takeInput();
    // print(h2);

    Node *finadd = finaladd(h1,h2);

    Node *addLinked = reverse(finadd);
    print(addLinked);
return 0; 
}