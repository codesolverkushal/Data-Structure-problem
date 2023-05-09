#include<bits/stdc++.h>
#include"proble.h"
using namespace std;

treenode* makeBst(int* a, int start, int end){
   
   if(start>end){
    return NULL;
   }

    int mid = (start+end)/2;

    treenode* root = new treenode(a[mid]);
    root->left = makeBst(a,start,mid-1);
    root->right = makeBst(a,mid+1, end);

    return root;
}

void preorder(treenode* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int a[] = {10,20,30,40,50};
    int n = sizeof(a)/sizeof(a[0]);
    treenode* root = makeBst(a,0,n-1);
    print(root);
    cout<<"Preodr of the tree is: "<<endl;
    preorder(root);
return 0;
}