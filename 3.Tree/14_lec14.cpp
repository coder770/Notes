// maximum height of a binary tree
// also in copy

tc--> O(N) // because we havee to reach each node
sc--> O(N)
 int solve(struct Node* node){
        if(node==NULL) return 0;
        int l=solve(node->left);
        int r=solve(node->right);
        
        return 1+max(l,r);
    }
    int height(struct Node* node){
        // code here 
        return solve(node);
    }