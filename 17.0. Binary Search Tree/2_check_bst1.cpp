#include<bits/stdc++.h>
#include"proble.h"
using namespace std;
bool check(treenode* root, int min = INT_MIN, int max = INT_MAX){
    if(root == NULL){
        return true;
    }
    if(root->data<min || root->data>max){
        return false;
    }
    bool leftcheck = check(root->left, min, root->data);
    bool rightcheck = check(root->right,root->data, max);

    return leftcheck && rightcheck;
}
int main(){
    treenode* root = takeinput();
    bool ans = check(root);

    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
return 0;
}