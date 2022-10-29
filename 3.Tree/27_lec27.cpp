// qn to find the least common ancestor
// also in copy 1

  Node* lowestCommonAncestor(Node* root,int n1,int n2){
        if(root==NULL||root->data==n1||root->data==n2) return root;
        
        Node* left = lowestCommonAncestor(root->left,n1,n2);
        Node* right = lowestCommonAncestor(root->right,n1,n2);
        
        if(left==NULL){
            return right;
        }
        else if(right==NULL){
            return left;
        }
        else{ // both left and right are not null, we found our restult this is the node
            return root;
        }
        
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       Node* ans = lowestCommonAncestor(root,n1,n2);
       return ans;
       
    }