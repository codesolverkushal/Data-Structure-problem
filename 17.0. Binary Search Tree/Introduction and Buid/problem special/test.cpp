
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
// Data structure to store a binary tree node
struct node
{
    int data;
    node* left = nullptr, *right = nullptr;
 
    node() {}
    node(int data): data(data) {}
};
 
// Function to print the inorder traversal on a given binary tree
void inorder(node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}
 
node* constructBst(int* preorder,int* preorderIndex, int key, int min , int max, int n){
    if(*preorder>=n){
        return nullptr;
    }
    node* root = nullptr;
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
    if(root==nullptr){
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