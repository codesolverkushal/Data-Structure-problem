#include<iostream>
#include"0class.h"

// bool search(node* root, int key){
//    if(root==NULL){
//     return false;
//    }
//    if(root->data == key){
//     return true;
//    }
//    if(root->data<key){
//     return search(root->right,key);
//    }
//    else{
//     return search(root->left,key);
//    }

// }


bool search(node* &root, int key){
  node* temp = root;
  while (temp!=NULL)
  {
    if(temp->data == key ){
        return true;
    }
    if(temp->data>key){
       temp = temp->left;
    }
    else{
        temp = temp->right;
    }
  }
  return false;

}
int main(){
    node* root = NULL;

    takeinput(root);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Enter data that you want search"<<endl;
    int data;
    cin>>data;
    bool ans = search(root,data);
    if(ans){
        cout<<"You get your key"<<endl;
    }
    else{
        cout<<"You do not get your key";
    }
    return 0;
}