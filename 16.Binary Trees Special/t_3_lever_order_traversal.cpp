#include<iostream>
#include<vector>
#include<queue>
#include"implementation.cpp"

vector<vector<int>> levelorder(node* root){
     vector<vector<int>> ans;
     if(root==NULL){
        return ans;
     }
     queue<node*> q;
     q.push(root);
     while(!q.empty()){
        int size = q.size();
        vector<int> level;

        for(int i = 0;i<size;i++){
          node* temp = q.front();
          q.pop();

          if(temp->left!=NULL){
            q.push(temp->left);
          }
          if(temp->right!=NULL){
            q.push(temp->right);
          }
          level.push_back(temp->data);
        }
        ans.push_back(level);
     }
     return ans;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);

    vector<vector<int>> x = levelorder(root);

}