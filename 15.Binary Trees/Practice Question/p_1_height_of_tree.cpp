#include<bits/stdc++.h>
#include"main.cpp"
using namespace std;

int height(node* root){
    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right)+1;
    return ans;
}

int main(){
    node* root = NULL;
     buildFromLevelOrder(root);
     levelOrderTraversal(root);

     int finalAns = height(root);
     cout<<finalAns;
}