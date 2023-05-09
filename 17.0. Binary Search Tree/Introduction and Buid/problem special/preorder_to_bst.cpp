#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
     this->data = val;
     this->left = NULL;
     this->right = NULL;  

    }
};


node* constructBst(int* preorder,int* preorderIndex, int key, int min , int max, int n){
    if(*preorder>=n){
        return NULL;
    }
    node* root = NULL;
    if(key>min && key <max){
       root = new node(key);
        *preorderIndex = *preorderIndex + 1;

        if(*preorderIndex<n){
            root->left = constructBst(preorder,preorderIndex,preorder[*preorderIndex],min,key,n);
        }
        if(*preorderIndex<n){
            root->right = constructBst(preorder,preorderIndex,preorder[*preorderIndex],key,max,n);
        }
    }
    return root;
}
void printPreorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    int preorder[] = {10,2,1,13,11};
    int n = 5;
    int preorderIndex = 0;
    node* root = constructBst(preorder,&preorderIndex,preorder[0],INT_MIN,INT_MAX,n);
    printPreorder(root);
return 0;
}