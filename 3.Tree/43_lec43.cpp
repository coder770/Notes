// qn--> insert a node in BST
// also in copy 1
Node* insert(Node* root, int Key) {
  //  Your code here
 
    if(root==NULL) return new Node(Key);
    Node *cur=root;
  
    while(true){
        if(cur->data<=Key){
            if(cur->right!=NULL) cur=cur->right;
            else{
                cur->right=new Node(Key);
                break;
            }
        }else{
            if(cur->left!=NULL) cur=cur->left;
            else{
                cur->left=new Node(Key);
                break;
            }
        }
    }
    return root;
}