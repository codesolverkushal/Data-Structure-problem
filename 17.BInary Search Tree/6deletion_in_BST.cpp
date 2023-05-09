#include<bits/stdc++.h>
#include"0class.h"
using namespace std;

node* minval(node* root){
    node* temp = root;
    while (temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp;
    
}
node* maxVal(node* root){
    node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}

node* deleteFromBst(node* root, int val)
{
    if(root==NULL){
        return root;
    }
    if(root->data == val){
      if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
      }
      if(root->left!=NULL && root->right == NULL){
        node* temp = root->left;
        delete root;
        return temp;
      }
        if(root->right!=NULL && root->left == NULL){
        node* temp = root->right;
        delete root;
        return temp;
      }
      if(root->right!=NULL && root->left!= NULL){
         int mini = minval(root->right)->data;
         root->data = mini;
         root->right = deleteFromBst(root->right,mini);
         return root;
      }
    }
    else if(root->data>val){
        root->left = deleteFromBst(root->left,val);
        return root;
    }
    else{
        root->right = deleteFromBst(root->right,val);
        return root;
    }

}


int main(){
    node* root = NULL;

    takeinput(root);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    
    cout<<"Minimum value in BST is: "<<endl;
    node* ans1 = minval(root);
    cout<<ans1->data<<endl;

    cout<<"Maximum value in BST is: "<<endl;
    node* ans2 = maxVal(root);
    cout<<ans2->data;

    cout<<"Delete from BST "<<endl;
    int data;
    cin>>data;
    node* ans3 = deleteFromBst(root,data);
    levelOrderTraversal(ans3);

   
    return 0;
}