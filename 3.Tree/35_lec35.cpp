// qn--> construct a binary tree from post order and inorder traversal 
// also in copy1


// gfg some changees in striever by own 
Node* buildTreePostIn(int in[],int is,int ie,int post[],int ps,int pe,map<int,int> &hm){
    if(ps>pe || is>ie) return NULL;
    Node* root = new Node(post[pe]);
    int inRoot=hm[post[pe]];
    int numsLeft=inRoot-is;
    
    root->left=buildTreePostIn(in,is,inRoot-1,post,ps,ps+numsLeft-1,hm);
    root->right=buildTreePostIn(in,inRoot+1,ie,post,ps+numsLeft,pe-1,hm);
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    map<int,int> hm;
    for(int i=0;i<n;i++){
        hm[in[i]]=i;
    }
    return buildTreePostIn(in,0,n-1,post,0,n-1,hm);
}


// striever 
Node* buildTreePostIn(vector<int> &inorder,int is,int ie,vector<int> &postorder,int ps,int pe,map<int,int> &hm){
    if(ps>pe || is>ie) return NULL;
    Node* root = new Node(post[pe]);
    int inRoot=hm[post[pe]];
    int numsLeft=inRoot-is;
    
    root->left=buildTreePostIn(in,is,inRoot-1,post,ps,ps+numsLeft-1,hm);
    root->right=buildTreePostIn(in,inRoot+1,ie,post,ps+numsLeft,pe-1,hm);
    return root;
}
Node *buildTree(vector<int>& inorder,vector<int> &postorder) {
    // Your code here
    if(inorder.size()!=postorder.size())
      return NULL;


    map<int,int> hm;
    for(int i=0;i<n;i++){
        hm[in[i]]=i;
    }
    return buildTreePostIn(in,0,n-1,post,0,n-1,hm);
}

