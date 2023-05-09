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
Node *reverse(Node *head)
{
    Node *pre = NULL;
    // Node *next = NULL;

    while(head!=NULL){
       Node* next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    return pre;
}

bool isPalindrome(Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;


    while(slow!=NULL)
    {
        if(slow->data != head->data)
        {
            return false;
        }
        slow = slow->next;
        head = head->next;
    }
    return true;
    
}
int main(){
    Node *head = takeInput();
    print(head);
 bool ans = isPalindrome(head);

 if(ans){
    cout<<"It is palindrome linked list"<<endl;
 }
 else{
    cout<<"Not a palindrome"<<endl;
 }

   
return 0; 
}