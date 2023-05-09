#include<iostream>
#include"class.h"
#include<queue>
using namespace std;
BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter the root data"<<endl;
    cin>>rootData;
    if (rootData==-1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size()!=0)
    {
         BinaryTreeNode<int> *front = pendingNodes.front();
         pendingNodes.pop();

         cout<<"Enter the left data"<<front->data<<endl;
         int leftData;
         cin>>leftData;
         if(leftData!=-1){
            BinaryTreeNode<int> *left = new BinaryTreeNode<int>(leftData);
            front->left = left;
            pendingNodes.push(left);
         }
                  cout<<"Enter the right data"<<front->data<<endl;
         int reftData;
         cin>>reftData;
         if(reftData!=-1){
            BinaryTreeNode<int> *right = new BinaryTreeNode<int>(reftData);
            front->right = right;
            pendingNodes.push(right);
         }
    }
    return root;
    
    
}


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



