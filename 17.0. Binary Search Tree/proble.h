#include<iostream>
#include<queue>
using namespace std;

class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;

    treenode(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


void print(treenode* root){
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

treenode* takeinput(){
    int data;
    cout<<"Enter the root data"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }
    treenode* root = new treenode(data);
    queue<treenode*> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size()!=0)
    {
        treenode* front = pendingnodes.front();
        pendingnodes.pop();

        cout<<"Enter the left child"<<front->data<<endl;
        int ldata;
        cin>>ldata;
        if(ldata!=-1){
            treenode* leftchid = new treenode(ldata);
            front->left = leftchid;
            pendingnodes.push(leftchid);
        }

        cout<<"Enter the right child"<<front->data<<endl;
        int rdata;
        cin>>rdata;
        if(rdata!=-1){
            treenode* rightchid = new treenode(rdata);
            front->right = rightchid;
            pendingnodes.push(rightchid);
        }
    }
    

return root;
}
