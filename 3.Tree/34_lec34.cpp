// qn--> construct binary tree from inorder and preorder
// time complaxity-->O(N)

Node* build(int pre[],int preStart,int preEnd,int in[],int inStart,int inEnd,map<int,int> inMap){
    if(preStart>preEnd || inStart>inEnd) return NULL;
    
    Node* root = new Node(pre[preStart]);
    int inRoot=inMap[root->data];
    int numsLeft=inRoot-inStart;
    root->left=build(pre,preStart+1,preStart+numsLeft,in,inStart,inRoot-1,inMap);
    root->right=build(pre,preStart+numsLeft+1,preEnd,in,inRoot+1,inEnd,inMap);
    return root;
}
 
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        map<int,int> inMap;
        for(int i=0;i<n;i++){
            inMap[in[i]]=i;
        }
        Node* root = build(pre,0,n-1,in,0,n-1,inMap);
        return root;
    }
 