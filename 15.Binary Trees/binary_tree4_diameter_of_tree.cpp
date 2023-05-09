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
BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root Data"<<endl;
    cin>>rootData;

    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout<<"Left child of the "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
           BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
           front->left = child;
           pendingNodes.push(child);
        }

        cout<<"right child of the "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
           BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
           front->right = child;
           pendingNodes.push(child);
        }
    }
    return root;

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

int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}
int diameter(BinaryTreeNode<int>* root)
{
    if(root==NULL){
        return 0;
    }
    int option1 = height(root->left) + height(root->left);
    int option2 = diameter(root->left);
    int option3 = diameter(root->left);

    return max(option1,max(option1,option3));
}

pair<int,int> heightDiameter(BinaryTreeNode<int>* root)
{
    if(root==NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int,int> leftans = heightDiameter(root->left);
    pair<int,int> rightans = heightDiameter(root->right);
    int ld = leftans.second;
    int lh = leftans.first;

    int rd = rightans.second;
    int rh = rightans.first;

    int height = 1+ max(lh,rh);
    int diameter = max(lh+ rh,max(ld,rd));

    pair<int,int> p;

    p.first = height;
    p.second = diameter;

    return p;
}
int main(){
  // BinaryTreeNode<int>* root = takeInputLevelWise();
  // print(root);
  // cout<<"Num: "<<numNodes(root)<<endl;

  /*int in[] = {4,2,5,1,8,6,9,3,7};
  int pre[]= {1,2,4,5,3,6,8,9,7};

  BinaryTreeNode<int>* root = buildTree(in,pre,9);
  */

  BinaryTreeNode<int>* root = takeInputLevelWise();

  print(root);
  cout<<"Num:"<<numNodes(root)<<endl;

  pair<int,int> p =  heightDiameter(root);

  cout<<"Height of tree"<<p.first<<endl; 
  cout<<"Diameter of tree"<<p.second<<endl; 

  delete(root);
}