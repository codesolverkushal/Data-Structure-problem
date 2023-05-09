#include<iostream>
#include<queue>
#include"Treenode.h"

using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootdata;
    cout<<"Enter root Data"<<endl;

    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout<<"Enter num of children of "<<front->data<<endl;

        int numChild;
        cin>>numChild;
        for(int i = 0;i<numChild;i++)
        {
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printTree(TreeNode<int>* root){
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    for (int i = 0; i < root->children.size(); i++)
    {
      cout<<root->children[i]->data<<",";  
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
    
}

int numNode(TreeNode<int>* root){
    int ans = 1;
    for(int i = 0;i<root->children.size();i++)
    {
        ans += numNode(root->children[i]);
    }
    
    return ans;
}
int sum(TreeNode<int>*root){
    int ans = root->data;
    for(int i = 0;i<root->children.size();i++){
        ans +=root->children[i]->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        sum(root->children[i]);
    }

    return ans;
}
int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);

    int result = numNode(root);
    cout<<result<<endl;
    cout<<"Ans we find that is: "<<endl;
    int ans1 = sum(root);
    cout<<result<<endl;
}