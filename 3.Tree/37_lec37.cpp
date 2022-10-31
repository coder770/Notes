// qn--> moris preorder/inorder traversal 
// also in copy 1
//  tc-->O(N)
//  sc-->O(N)


// inorder
vector<int> getInorder(TreeeNode* root){
    vector<int> inorder;
    TreeNode *curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            inorder.push_back(curr->val);
            cur=cur->left;
        }
        else{
            TreeNode *prev=cur->left;
            while(prev->right && prev->right!=curr){ //prev->right!=NULL means pehle se thread nhi bna hua hai
                  prev=prev->right;
            }
            if(prev->right==NULL){ // right node pr phoch chuke hai ab bari hai thread bnanae ki
                 prev->right=curr;
                 curr->curr->left;
            }
            else{ // isme tb aaynge jb alreeady thread bna hua hai means prev->right==curr
                prev->right=NULL;
                inorder.push_back(curr.val);
                cur=cur->right;
            }
        }
    }
    return inorder;
}


// preorder
vector<int> getPreorder(TreeeNode* root){
    vector<int> preorder;
    TreeNode *curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            preorder.push_back(curr->val);
            cur=cur->left;
        }
        else{
            TreeNode *prev=cur->left;
            while(prev->right && prev->right!=curr){ //prev->right!=NULL means pehle se thread nhi bna hua hai
                  prev=prev->right;
            }
            if(prev->right==NULL){ // right node pr phoch chuke hai ab bari hai thread bnanae ki
                 prev->right=curr;
                 preorder.push_back(curr.val);
                 curr->curr->left;
            }
            else{ // isme tb aaynge jb alreeady thread bna hua hai means prev->right==curr
                prev->right=NULL;
                cur=cur->right;
            }
        }
    }
    return preorder;
}
