#include<bits/stdc++.h>
#include"1_intro.h"
using namespace std;


 node* deleteInBst(int data, node* root){
        if(root==NULL){
            return NULL;
        }
        if(data>root->data){
            root->left = deleteInBst(data,root->left);
            return root;
        }
        else if(data<root->data){
            root->right = deleteInBst(data,root->right);
            return root;
        }
        else{
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            else if(root->left ==NULL){
            node* temp = root->right;
             root->right = NULL;
             delete root;
             return temp;
            }
             else if(root->right ==NULL){
             node* temp = root->left;
             root->left = NULL;
             delete root;
             return temp;
            }

            else{
                node* minnode = root->right;
                while (minnode->left !=NULL)
                {
                    minnode = minnode->left;
                }
                int rightmin = minnode->data;
                root->data = rightmin;
                root->right = deleteInBst(rightmin, root->right);

                return root;
            }
        }
    }
int main(){
    node* root = NULL;
    cout<<"Enter the data to create bst"<<endl;
    takeinput(root);
    levelOrderTraversal(root);
    
    int x;
    cin>>x;
    root = deleteInBst(x,root);
    levelOrderTraversal(root);

  
}