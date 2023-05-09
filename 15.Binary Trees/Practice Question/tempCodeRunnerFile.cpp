int diameter(node* root){
   if(root==NULL){
    return 0;
   }
   int a = diameter(root->left);
   int b = diameter(root->right);
   int c = height(root->left) +1 + height(root->right);

   int ans = max(a,b,c);

   return ans;
}
