#include<bits/stdc++.h>
#include"main.cpp"
using namespace std;
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int a = height(root->left);
    int b = height(root->right);
    int ans = max(a,b);
    return ans;
}
int diameter(node* root){
   if(root==NULL){
    return 0;
   }
   int a = diameter(root->left);
   int b = diameter(root->right);
   int c = height(root->left) +1 + height(root->right);

   int ans = max(a,max(b,c));

   return ans;
}

int main(){
      node* root = NULL;
     buildFromLevelOrder(root);
     levelOrderTraversal(root);
     int result = diameter(root);
     cout<<result;

    
return 0;
}