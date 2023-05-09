#include<bits/stdc++.h>
#include"class.h"
using namespace std;

bool isBst(node* root, int min, int max){
   if(root==NULL){
    return true;
   }

   if(root->data>min && root->data<max){
    bool left = isBst(root->left,min,root->data);
    bool right = isBst(root->right,root->data,max);
    return left && right;
   }
   else{
    return false;
   }
}
bool validateBst(node* root){
    return isBst(root,INT_MIN, INT_MAX);
}
int main(){
    node* root = NULL;

    takeinput(root);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    bool ans = validateBst(root);

    if(ans){
        cout<<"Sahi, you get ans"<<endl;
    }
    else{
        cout<<"Code to sahi se likho"<<endl;
    }

}