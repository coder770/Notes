 // to check the balanced binary treee
//in the code of height of binary tree we will add 2 or 3 lines 
// also in copy1 

 
 
 
 
 
//  int height(Node* root){
//         if(root==NULL) return 0;
        
//         int l=height(root->left);
//         if(l==-1) return -1;
//         int r=height(root->right);
//         if(r==-1) return -1;
//         if(abs(l-r)>1) return -1;
//         return 1+max(l,r);
//     }
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//       return (height(root)!=-1) ;
        
//     }