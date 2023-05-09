#include<bits/stdc++.h>
#include"binarytreenode.h"

using namespace std;

class BST{
      public:
    Bnode<int>* root;

  

    BST(){
        root == NULL;
    }
    ~BST(){
        delete root;
    }

//   Delete a node from BST 

    private:
    Bnode<int>* deleteInBst(int data, Bnode<int>* node){
        if(root==NULL){
            return NULL;
        }
        if(data>node->data){
            node->left = deleteInBst(data,node->left);
            return node;
        }
        else if(data<node->data){
            node->right = deleteInBst(data,node->right);
            return node;
        }
        else{
            if(node->left == NULL && node->right == NULL){
                delete node;
                return NULL;
            }
            else if(node->left ==NULL){
             Bnode<int>* temp = node->right;
             node->right = NULL;
             delete node;
             return temp;
            }
             else if(node->right ==NULL){
             Bnode<int>* temp = node->left;
             node->left = NULL;
             delete node;
             return temp;
            }

            else{
                Bnode<int>* minnode = node->right;
                while (minnode->left !=NULL)
                {
                    minnode = minnode->left;
                }
                int rightmin = minnode->data;
                node->data = rightmin;
                node->right = deleteInBst(rightmin, root->right);

                return node;
            }
        }
    }

    // void printTree(Bnode<int>* root){
    //     if(root==NULL){
    //         return;
    //     }
    //     cout<<root->data<<":";
    //     if(root->left!=NULL){
    //         cout<<"L"<<root->left->data;
    //     }
    //     if(root->right!=NULL){
    //         cout<<"R"<<root->right->data;
    //     }
    //     cout<<endl;

    //     printTree(root->left);
    //     printTree(root->right);
    // }
    void printTree(Bnode<int>* root){
        if(root==NULL){
            return;
        }
        printTree(root->left);
        cout<<root->data<<" ";
        printTree(root->right);
    }

    public:
    void deleteData(int data){
       root = deleteInBst(data,root);
    }

    void print(){
       printTree(root);
    }
    //Insert a node...
    private:
    Bnode<int>* insert(int data,Bnode<int>* node){
       if(node==NULL){
        Bnode<int>* newNode = new Bnode<int>(data);
        return newNode;
       }
       if(data<node->data){
          node->left = insert(data,node->left);
       }
       else{
        node->right = insert(data,node->right);
       }
       return node;
    }
    public:
    void insert(int data){
        this->root = insert(data,this->root);
    }
    
    private:
    bool hasData(int data, Bnode<int>* node){
       if(node==NULL){
        return false;
       }
       if(node->data == data){
        return true;
       }
       else if(data>node->data){
        return hasData(data,node->right);
       }
       else{
        return hasData(data,node->left);
       }
    }
    public:
    bool hasData(int data){
      return hasData(data,root);
    }
   
};