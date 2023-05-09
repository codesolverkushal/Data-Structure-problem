#include<iostream>
#include"implementation.cpp"

void inorder(node* root){
     if(root==NULL){
     return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->right = new node(4);
    inorder(root);
}