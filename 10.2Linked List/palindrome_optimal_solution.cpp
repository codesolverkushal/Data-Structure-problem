#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"

Node *takeInput(){
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data!=-1){
        Node * newNode = new Node(data);
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

     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
        
    }
    cout<<endl;

}
Node *findmid(Node *head){
    Node *slow = head;
    Node *fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *reverse(Node *head){
if(head==NULL || head->next==NULL){
        return head;
    }
    Node *ans = reverse(head->next);

    Node *temp = ans;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return ans;

}
int len(Node *bhai){
    Node *temp = bhai;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}
bool compare(Node *head, Node *rev){
    Node *temp1  = head;
    Node *temp2  = rev;

    int l1 = len(head);
    int l2 = len(rev);
    // cout<<l1<<endl;
    // cout<<l2;

    if(l1<l2){
        while (temp1!=NULL && temp2->next!=NULL)
        {
            if(temp1->data!=temp2->data){
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
    //  return true;
        
    }
    else if(l1>l2){
         while (temp2!=NULL && temp1->next!=NULL)
        {
            if(temp1->data!=temp2->data){
               return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
    //    return true;
    }
    
    else{
     while (temp2!=NULL && temp1!=NULL)
        {
            if(temp1->data!=temp2->data){
               return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
    //    return true;

    }
    return true;
    
}
void palindrome(Node *head){
      Node *s = findmid(head);

    cout<<s->data<<" "<<endl;

    Node *rev = reverse(s->next);
    print(rev);

    s->next = NULL;

    print(head);
    bool ans = compare(head,rev);
    if(ans){
        cout<<"maja aa gaya"<<endl;
    }
    else{
        cout<<"Try again";
    }
}
int main(){
    
    Node *head = takeInput();
    print(head);
    
    palindrome(head);
  

   


return 0;
}