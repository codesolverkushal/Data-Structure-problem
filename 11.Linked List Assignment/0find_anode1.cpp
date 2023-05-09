#include<iostream>
using namespace std;
#include "node.cpp"


Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
    {
        Node *newNode = new Node(data);
        if (head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
        
    }
    return head;

}
Node* insert(Node *head, int i, int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i==0){
          newNode->next = head;
          head = newNode;
          return head;
    }
    else{
    while (temp!=NULL && count<i-1)
    {
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
    }
}
    return head;
}

void deleteAtNode(Node *head ,int j){
      if(j==0){
        Node *temp = head;
        head = head->next;
        delete temp;
     }

     else{
        Node * curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt<=j){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next  = curr->next;
        delete curr;
     }
}   
void nodeAtindex(Node *head, int data){
    if(head==NULL){
        cout<<"Linked list is empty";
    }
  
    else {
        Node *curr = head;
        int index = 0 ;
        while (head!=NULL)
        {
            
            if(data!=head->data){
                head = head->next;
                index++;
            }
            else{
                cout<<"index is "<<index<<endl;
            }
        }
        
    
    }
    
     

}

void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;        
    }
}
int main(){
    Node *head = takeInput();
    print(head);
    int i , data;
    cin>>i>>data;
    Node *input = insert(head, i,data);
    print(input);
    int j;
    cin>>j;
    deleteAtNode(head,j);
    print(head);
    
    int key;
    cin>>key;
    nodeAtindex(head, key);
    // cout<< ans <<endl;

}