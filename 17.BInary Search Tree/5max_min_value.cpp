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

   
    return 0;
}