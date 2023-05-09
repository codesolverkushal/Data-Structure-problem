#include<iostream>
#include"class.h"
#include<queue>
using namespace std;

int numNodes(BinaryTreeNode<int>* root){
  if(root==NULL){
    return 0;
  }
  return 1 + numNodes(root->left) + numNodes(root->right);
}

void preorder(BinaryTreeNode<int>* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

void inorder(BinaryTreeNode<int>* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void print(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
BinaryTreeNode<int>* buildTreeHelp(int* in, int* pre,int inS, int inE, int preS, int preE){
   if(inS>inE){
    return NULL;
   }

   int rootData = pre[preS];
   int rootIndex = -1;
   for(int i = inS;i<=inE;i++){
     if(in[i] == rootData){
      rootIndex = i;
      break;
     }
   }
   int lInS = inS;
   int lInE = rootIndex-1;
   int lPreS = preS + 1;
   int lPreE = lInE- lInS + lPreS;
   int rPreS = lPreE + 1;
   int rPreE = preE;
   int rInS = rootIndex + 1;
   int rInE = inE;

   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
   root->left = buildTreeHelp(in,pre,lInS,lInE,lPreS,lPreE);
   root->right = buildTreeHelp(in,pre,rInS,rInE,rPreS,rPreE);
   
   return root;
}
BinaryTreeNode<int>* buildTree(int* in, int* pre,int size){
    return buildTreeHelp(in,pre,0,size-1,0,size-1);
}

int main(){
  // BinaryTreeNode<int>* root = takeInputLevelWise();
  // print(root);
  // cout<<"Num: "<<numNodes(root)<<endl;

  int in[] = {4,2,5,1,8,6,9,3,7};
  int pre[]= {1,2,4,5,3,6,8,9,7};

  BinaryTreeNode<int>* root = buildTree(in,pre,9);
  print(root);
  cout<<"Num:"<<numNodes(root)<<endl;
  inorder(root);
  delete(root);
}