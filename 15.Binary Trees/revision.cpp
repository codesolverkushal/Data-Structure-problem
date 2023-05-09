#include<bits/stdc++.h>
using namespace std;
#include"binary_tree2_takeinputlevelwise.cpp"
BinaryTreeNode<int>* treehelper(int* pre, int* in, int preS,int preE,int inS, int inE){
   
    int  rootData = pre[preS];
    int rootIndex = -1;
    for (int i = inS; i <=inE; i++)
    {
        if(rootData == in[i]){
          rootIndex = i;
          break;
        }
    }
    

    int linS = inS;
    int linE = rootIndex -1;
    int lpreS = preS + 1;
    int lpreE = linE - linS + lpreS ;

    int rpreS =  lpreE + 1;
    int rpreE = preE;
    int rinS = rootIndex + 1;
    int rinE = inE;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = treehelper(in,pre,linS,linE,lpreS, lpreE);
    root->right = treehelper(in,pre,rinS,rinE,rpreS,rpreE);

    return root;

}
BinaryTreeNode<int>* buildTree(int* pre, int* in, int size){
   return treehelper(pre,in,0,size-1,0,size-1);
}
int numNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1+ numNodes(root->left) + numNodes(root->right);
}
void inorder(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
  
  int in[] = {4,2,5,1,8,6,9,3,7};
  int pre[]= {1,2,4,5,3,6,8,9,7};

  BinaryTreeNode<int>* root = buildTree(in,pre,9);
  print(root);
  cout<<"Num:"<<numNodes(root)<<endl;
  inorder(root);
  delete(root);


}