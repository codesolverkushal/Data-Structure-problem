#include<bits/stdc++.h>
#include"class.h"
using namespace std;


void print(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
BinaryTreeNode<int>* takeinput(){
    int rootData;
    cout<<"ENter the data"<<endl;
    cin>>rootData;
    if(rootData==-1){
       return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeinput();
    BinaryTreeNode<int>* rightChild = takeinput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
}
int main(){
    // BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
    
    // root->left = node1;
    // root->right = node2;
    BinaryTreeNode<int>* root = takeinput();
    print(root);
    delete root;
}