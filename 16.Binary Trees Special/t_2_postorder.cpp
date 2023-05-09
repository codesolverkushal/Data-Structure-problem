#include<iostream>
#include"implementation.cpp"

void postorder(node* root){
     if(root==NULL){
     return;
     }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";

}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->right = new node(4);
    postorder(root);
}