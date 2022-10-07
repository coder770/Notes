// Binary Tree representation in c++

struct Node{
    int data;
    struct node* left;
    struct node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
}

main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
}
