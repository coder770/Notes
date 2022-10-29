// qn--> children sum property ---> if not satisfy then we have to satisfy it 
// time complexity -> O(N)
// space complexity--> O(H)


void changeTree(BinaryTreeNode<int> *root){
    if(root==NULL) return ;
    int child=0;
    if(root->left){
        child+=root->left->data;
    }
    if(root->right){
        child+=root->right->data;
    }
    if(child>=root->data) root->data=child;
    else{
        if(root->left) root->left->data=root->data;
        else if(root->right) root->right->data=root data;
    }

    reorder(root->left);
    reorder(root->right);

    int tot=0;
    if(root->left) tot+=root->left->data;
    if(root->right) tot+=root->right->data;
    if(root->left or root->right) root->data=tot; // to chek that it is not a leaf node
}