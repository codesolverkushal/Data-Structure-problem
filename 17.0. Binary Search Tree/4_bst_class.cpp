#include<bits/stdc++.h>
#include"proble.h"
using namespace std;

class BST{

   treenode* root;
   public:
  
   BST(){
    root = NULL;
   }
   void deleteData(int data){

   }
   void insert(int data){

   }
   private:
   bool hasData(int data, treenode* node){
    if(node==NULL){
        return false;
    }
       if(root==NULL){
        return true;
      }
      else if(data<root->left){
          return hasData(data,root->left);
      }
      else{
        return hasData(data,root->right);
      }
   }
   bool hasData(int data){
       return hasData(data,root);
   }

   ~BST(){
    delete root;
   }
};
int main(){

}