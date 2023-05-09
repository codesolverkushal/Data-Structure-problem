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
bool isbalanced(node* root){
    if(root==NULL){
        return true;
    }
    bool left = isbalanced(root->left);
    bool right = isbalanced(root->right);
    bool diff = abs(height(root->left)-height(root->right)<=1);

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}

int main(){
      node* root = NULL;
     buildFromLevelOrder(root);
     levelOrderTraversal(root);
     int ans = isbalanced(root);
     if(ans){
        cout<<"You got balanced"<<endl;
     }
     else{
        cout<<"Not a balanced tree"<<endl;
     }

    
return 0;
}