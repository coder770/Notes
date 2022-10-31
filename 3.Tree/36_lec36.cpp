// qn--> serialize and deserialize binary tree 
// also in copy 1 

// encodes a tree to a stingle string
// here only diff btw level order and this code is that if the root->left==NULL then also we are pushing it into the queue; 

// Encodes a tree to a single stirng;
string serialize(TreeNode* root){
   if(!root) return "";

   string s="";
   queue<TreeNode*> q;
   q.push(root);
   while(!q.empty()){
       TreeNode* currNode=q.front();
       q.pop();
       if(currNode==NULL) s.append("#,");
       else s.append(to_string(curNode->val)+',');
       if(curNode!=NULL){
           q.push(curNode->left);
           q.push(curNode->right);
       }
   }
   cout<<s;
   return s;
}

//Decodes your encoded data to tree
// stringstream and getline helps here to traverse the whole string by ignoring the commas 
TreeNode* deserializeZ(string data){
    if(data.size()==0) return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');
    TreeNode *root=new TreeNode(stoi(str));
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode *node = q.front();
        q.pop();

        getline(s,str,',');
        if(str=='#'){
            node->left=NULL;
        }
        else{
            TreeNode* leftNode=new TreeNode(stoi(str));
            node->left=leftNode;
            q.push(leftNode);
        }

        getline(s,str,',');
        if(str=="#"){
            node->right=NULL;
        }
        else{
            TreeNode* rightNode=new TreeNode(stoi(str));
            node->right=rightNode;
            q.push(rightNode);
        }
    }
    return root;
}



// using inorder traversal which is present on gfg 


void solve(Node* root,vector<int> &v){
        if(root==NULL){
            v.push_back(-1);
        };
               v.push_back(root->data);
        solve(root->left,v);

        solve(root->right,v);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> v;
      
        
        solve(root,v);
        return v;
        
    }
    
    //Function to deserialize a list and construct the tree.
    Node* solve(vector<int> &A,int *index){
        if(*index==A.size() || A[*index]==-1){
            *index+=1;
            return NULL;
        }
        
        Node* root=new Node(A[*index]);
        *index+=1;
        
        root->left=solve(A,index);
        root->right=solve(A,index);
        return root;
    }
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
         int index=0;
         return solve(A,&index);
    }