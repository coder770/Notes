// Iterative preorder traversal of binary tree
// hint --> using stack 
// also in copy 1 




// vector<int> preorderTraversal(TreeNode* root){
//     vector<int> preorder;
//     if(root==NULL) return preorder;

//     stack<TreeNode*> st;
//     st.push(root);
//     while(!s.empty()){
//         root = st.top();
//         st.pop();
//         preorder.push_back(root->val);
//         if(root->right!=NULL){
//             st.push(root->right);
//         }
//         if(root->left!=NULL){
//             st.push(root->left);
//         }
//     }
//     return preorder;
// }


// own  

// vector <int> preorder(Node* root)
// {
// vector<int> ans;
// stack<Node*> s;
// if(root==NULL) return ans;
// s.push(root);
// while(!s.empty()){
//     Node* ele=s.top();
//     s.pop();
//     ans.push_back(ele->data);
//    if(ele->right)    s.push(ele->right);
//    if(ele->left)     s.push(ele->left);
// }
// return ans;
// }