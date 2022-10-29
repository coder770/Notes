// qn--> count total node in  a complete binary tree in less than O(N) __TIME__
// also in copy 1

// // O(N)
// inorder(node,&cnt){
//     if(root==NULL) return ;
//     cnt++;
//     inorder(node->left);
//     inorder(node->right);
}


O((logn)^2)
  int findHeightLeft(TreeNode* node){
        int hght=0;
        while(node){
            hght++;
            node=node->left;
        }
        return hght;
    }
    int findHeightRight(TreeNode* node){
        int hght=0;
        while(node){
            hght++;
            node=node->right;
        }
        return hght;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        int lh=findHeightLeft(root);
        int rh=findHeightRight(root);
        if(lh==rh) return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }