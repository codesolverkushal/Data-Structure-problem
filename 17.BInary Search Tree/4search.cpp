#include<bits/stdc++.h>
#include"0class.h"
using namespace std;


bool search(node* root,int key){
    node* temp = root;

    while (temp!=NULL)
    {
        if(temp->data== key){
            return true;
        }
        if(temp->data>key){
            temp = temp->left;
        }
        if(temp->data<key){
            temp = temp->right;
        }
    }
    return false;
    
}
int main(){
    node* root = NULL;

    takeinput(root);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Enter data that you want search"<<endl;
    int data;
    cin>>data;
    bool ans = search(root,data);
    if(ans){
        cout<<"You get your key"<<endl;
    }
    else{
        cout<<"You do not get your key";
    }
    return 0;
}