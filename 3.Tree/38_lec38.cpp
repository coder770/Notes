// qn--> flatten a binary tree to linked list;
// also in copy 1 
// such that we can't create the new linked list we have to arrange the nodes of the given tree to make it a linked list

// approch 1 using recursion 
// tc-> O(N)
// sc-> O(N)

Node* prev=NULL;
void flatten(node){
    if(node==NULL) return ;
    flatten(node->right);
    flatten(node->left);
    node->right=prev;    // prev will now containt the curr node ka left 
    node->left=NULL;
    prev=Node;
}


// approach 2 iterative approach which is based on using stack 
// tc--> O(N)
// sc--> O(N)

st.push(root){
    while(!st.empty()){
        cur=st.top();
        st.pop();
        if(curr->left){
            st.push(curr->left);
        }
        if(curr->right){
            st.push(curr->right);
        }
        if(!st.empty()){
            curr->right=st.top();
            curr->left=NULL;
        }
    }
}



// approach 3 space complaxity O(1) using moris traversal 

Node* curr=root;
while(curr!=NULL){
    if(curr->left!=NULL){
        prev=cur->left;
        while(prev->right){   // left tree k rightmost node tk jao or then thread bnado to that node to the current ka left
           prev=prev->right;
        }
        prev->right=cur->right;
        cur->right=cur->left;
    }
    cur=cur->right;
}