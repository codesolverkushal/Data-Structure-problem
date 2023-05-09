#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data = data;
        this->left = left;
        this->right = right;
    }

};

node* insertBst(node* &root, int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left = insertBst(root->left,val);
    }
    else{
        root->right = insertBst(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root = NULL;
    root = insertBst(root,3);
    insertBst(root,5);
    insertBst(root,2);
    insertBst(root,10);
    insertBst(root,8);
    insertBst(root,9);
    insertBst(root,1);
    insertBst(root,13);

    inorder(root);
return 0;
}