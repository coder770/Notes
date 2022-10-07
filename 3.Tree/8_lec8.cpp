// level order traversal
// BFS
// also in copy


//own 

// vector<int> findSpiral(Node *root)
// {
//     // Your code here
//     vector<int> ans;
//     if (root == NULL)
//         return ans;
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             Node *ele = q.front();
//             q.pop();
//             if (ele->left != NULL)
//                 q.push(ele->left);
//             if (ele->right != NULL)
//                 q.push(ele->right);
//             ans.push_back(ele->data);
//         }
//     }
//     return ans;
// }

// striever
vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            TreeNode *node = q.front();
            q.pop();
            if(root->left!=NULL) q.push(node->left);
            if(root->right!=NULL) q.push(node->right);
            level.push_back(node->val);
        }
        ans.push_back(level);
    }
    return ans;
}