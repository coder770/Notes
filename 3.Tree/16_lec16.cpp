// to find the diameter of a tree
// also in copyu

naive solution is to reach the each node and ifnd the left height and right height and then return the lenght of the path 
so this will take o(n^2) first we are finding the height of the tree then we are find the diametere the best way to do some changes in the code while finding the heigth of the tree so this will take o(N) __TIME__

maxi=0
findmax(root){
    if(root==NULL) return ;
    lh=findleftH(node->left);
    rh=findrightH(node->left);

    maxi=max(maxi,lh+rh);
    findmax(ndoe->left);
    findmax(node->right);
}
time complaxity-->O(N*N)

optimise soln
int findmax(node,maxi){
    if(node==NULL) return  0;
    lh=findmax(node->left,maxi);
    rh=findmax(node->right,maxi);
    maxi=max(maxi,lh+rh);
    return 1+max(lh+rh);
}