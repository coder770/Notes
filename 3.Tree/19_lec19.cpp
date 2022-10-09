// zig zag traversal 
// also in copy1

time complexity O(N)
space complexity O(N)

vector<ector<int>> zigzagLevelOrder(TreeNode* root){
    vector<vector<int>> result;
    if(root==NULL) return result;

    queue<TreeNode*> nodesQueue;
    nodesQueue.push(root);
    bool leftToRight = True;

    while(!nodesQueue.empty()){
        int size=nodesQueue.size();
        vector<int> row(size);
        for(int i=0;i<size;i++){
            TreeNode* node=nodesQueue.front();
        nodesQueue.pop();

        //find position to fill the nodes value;

        int index=(leftToRight) ? i : (size-1-i);
        row[index]=node->val;
        if(node->left){
            nodesQueue.push(node->left);
        }
        if(node->right){
            nodesQueue.push(node->right);
        }
        }
        leftToRight=!leftToRight;
        result.push_back(row);
    }
    return result;
}
