// to find the maximum path sum 
// also in copy 1

//own 

//  int find(Node* root ,int &maxi){
//         if(root==NULL) return 0;
//         int ls=max(0,find(root->left,maxi));
//         int rs=max(0,find(root->right,maxi));
//         int s=ls+rs+root->data;
//         maxi=max(maxi,s);    
//         return root->data + max(ls,rs);
//     }
//     int findMaxSum(Node* root)
//     {
//         // Your code goes here
//         int maxi=INT_MIN;
//         find(root,maxi);
//         return maxi;
//     }

//striever
int maxPathDown(TreeNode* node,& maxi){
    if(node==NULL) return 0;
    int left=max(0,maxPathDown(node->left,maxi));
    int right=max(0,maxPathDown(node->right,maxi));
    maxi=max(maxi,left+right+node->val);
    return max(left,right) + node->val;
}