// qn find the root to node path in a binary tree or the question may to find the root to leaf path in a binary tree 
// in compy 1 also 
time complaxity O(N)
space complaxity O(H)

// by striever
bool getPath(TreeNode* root,vector<int> &arr, int x){
    if(!root) return false;

    arr.push_back(root->val);
    if(root->val==x) return true;

    if(getPath(root->left,arr,x) || getPath(root->right,arr,x))
    return true;

    arr.pop_back();
    return false;
}

vector<int> slove(TreeNode* A, int B){
    vector<int> arr;
    if(A==NULL){
        return arr;
    }
    getPath(A,arr,B);
    return arr;
}


// by me
qn to find the all the path from root to the leaf node 


 void getPath(vector<int> temp,vector<vector<int>> &ans,Node* root){
     if(root==NULL){
        return ;
     }
     temp.push_back(root->data);
     if(root->left==NULL && root->right==NULL){
         ans.push_back(temp);
         return ;
     }
     else{
         getPath(temp,ans,root->left);
         getPath(temp,ans,root->right);
         
     }

 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<int> temp;
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    getPath(temp,ans,root);
    return ans;
}