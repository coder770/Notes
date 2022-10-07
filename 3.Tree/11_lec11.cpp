// Post order traversal using two stack
// in copy 1 also

//own

// vector<int> postOrder(Node* root)
// {
// vector<int> ans;
// if(root==NULL) return ans;
// stack<Node*> s1,s2;
// s1.push(root);
// while(!s1.empty()){
//     Node* ele=s1.top();
//      s1.pop();
//   if(ele->left)  s1.push(ele->left);
//     if(ele->right) s1.push(ele->right);
//     s2.push(ele);
   
// }
// while(!s2.empty()){
//     Node* ele=s2.top();
//     ans.push_back(ele->data);
//     s2.pop();
// }
// return ans;
// }

// striever

vector<int> postorderTraversal(TreeNode* root){
    vector<int> postorder;
    if(root==NULL) return postorder;
    stack<TreeNode*> st1,st2;
    s1.push(root);
    while(!s1.empty()){
        root=s1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL){
            st1.push(root->left);
        }
        if(root->right!=NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top->val);
    }
    return postorder;
}
