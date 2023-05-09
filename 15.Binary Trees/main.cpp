#include"class.h"

int main(){
   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
   BinaryTreeNode<int>* child1 = new BinaryTreeNode<int>(2);
   BinaryTreeNode<int>* child2 = new BinaryTreeNode<int>(3);
   
   root->left = child1;
   root->right = child2;
}