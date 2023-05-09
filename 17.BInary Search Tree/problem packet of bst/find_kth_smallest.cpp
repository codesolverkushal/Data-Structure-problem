#include<bits/stdc++.h>
#include"class.h"
using namespace std;

int solve(node* root, int &i, int k){
    //base case
    if(root==NULL){
        return -1;
    }
    int left = solve(root->left,i,k);

    if(left!=-1){
        return left;
    }

    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right,i,k);
}

int main(){
    node* root = NULL;

    takeinput(root);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    int i = 0;
    int ans = solve(root,i,3);

    cout<<ans;


    return 0;
}