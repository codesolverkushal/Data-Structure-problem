#include<iostream>
using namespace std;
#include<queue>

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        
    }
};

node* buildTree(node* root){
   cout<<"Enter the data:"<<endl;
   int data;
   cin>>data;

   root = new node(data);

   if(data==-1){
    return NULL;    
   }
   cout<<"Enter data inseting in left:"<<data<<endl;
   root->left = buildTree(root->left);
   cout<<"Enter data inserting in right:"<<data<<endl;
   root->right = buildTree(root->right);
   return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }

    
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        
        cout<<"Enter the left data: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right data: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
     node* root = NULL;
     buildFromLevelOrder(root);
     levelOrderTraversal(root);
    //  root = buildTree(root);

    //  cout<<"Print the level order traversal:"<<endl;
    //  levelOrderTraversal(root);

    //  cout<<"Inorder traversal is: ";
    //  inorder(root);

    //  cout<<"Preorder traversal is: "<<endl;
    //  preorder(root);
}

//Input is 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 