//inorder traversal 
// also in copy




void inorder(node){
    if(node==NULL){
        return;
    }
    inorder(node->left);
    print(node->data);
    inorder(node->right);
    
}
