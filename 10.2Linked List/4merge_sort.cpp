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
       temp = temp->next;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        
    }

}

Node *mid(Node *head){
    Node *slow = head;
    Node *fast = head->next;

    while (fast!=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
return slow;
}

Node *merge(Node *head1 , Node *head2){
    if(head1 == NULL){
        return head1;
    }
    else if(head2 ==NULL){
        return head2;
    }

    Node *finalhead = NULL;

    if(head1->data<=head2->data){
        finalhead = head1;
        head1 = head1->next;
    }
    else{
        finalhead = head2;
        head2 = head2->next;
    }

    Node *tail = finalhead;

    while(head1!=NULL && head2!=NULL){
        Node *temp = NULL;

        if(head1->data<=head2->data){
            temp = head1;
            head1 = head1->next;
        }
        else{
            temp = head2;
            head2 = head2->next;
        }

        tail->next = temp;
        tail = temp;
    }
    if(head1!=NULL){
        tail->next = head1;
    }
    if(head2!=NULL){
        tail->next = head2;
    }
    return finalhead;
}

Node *mergeSort(Node *head){
     if(head==NULL || head->next==NULL){
        return head;
     }
     Node *middle = mid(head);
     Node *left = head;
     Node *right = middle->next;    
     middle->next = NULL;

     Node *x = mergeSort(left);
     Node *y = mergeSort(right);

     Node *result = merge(x,y);
     return result;
}
int main(){
    Node *head = takeInput();
    // Node *temp = takeInput();
    // print(head);

    // Node *mer = merge(head,temp);

    // print(mer);
    
     Node *mer = mergeSort(head);
     print(mer);
    return 0;
}