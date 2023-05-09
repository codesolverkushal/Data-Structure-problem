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

}
 bool ll_to_array(int *a,Node *head){
    Node *temp = head;
    int i =0;
    while (temp!=NULL && i<5)
    {
        a[i] = temp->data;
        temp = temp->next;
        i++;
    }
     int x = 0;
     int y = i - 1;
     
    
     while (x<=y)
     {
       
       if(a[x]!=a[y]){
        return false;
       }
       x++;
       y--;
       
     }
     return true;
   
   
     
     
    
    
 }

int main(){
    Node *head = takeInput();
    print(head);
    int a[10];
  bool ans = ll_to_array(a,head);
  
  if(ans){
    cout<<"Yes it is a palindrome"<<endl;
  }
  else
  {
    cout<<"No it is not a palindrome"<<endl;
  }
  return 0;
}