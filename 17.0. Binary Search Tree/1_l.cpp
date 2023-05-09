#include<bits/stdc++.h>
#include"proble.h"
using namespace std;

bool search(treenode* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        return true;
    }
    else if(root->data<key){
        return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }
    return false;
}

treenode* rangeBet(treenode* root){
    if(root==NULL){
        return NULL;
    }
    
}

int main(){
  treenode* root = takeinput();
  cout<<"Enter the key"<<endl;
  int key;
  cin>>key;
  bool get = search(root,key);

  if(get){
    cout<<"Pass ho gaya be"<<endl;
  }
  else{
    cout<<"Bhai koi baat nhi try again!";
  }
return 0;
}
//10 8 11 6 9 -1 12 -1 -1 -1 -1 -1 -1 