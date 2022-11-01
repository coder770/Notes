// search in a bst 
// also in copy 1
// tc-->O(logN)

// striever
TreeNode* searchBST(TreeNode* root,int val){
    while(root!=NULL && root->val!=val){
        root=val<root->val?root->left:root->right;
    }
    return root;
}

// own
bool search(Node* root, int x) {
    // Your code here
    if(root==NULL) return 0;
    if(root->data==x) return 1;
    else if(x>root->data) search(root->right,x);
    else if (x<root->data) search(root->left,x);
}


//qn-> find minimum value in bst
int minValue(Node* root) {
    // Code here
    if(root==NULL) return -1;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
