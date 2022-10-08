// check if the two trees are identical or not
// they are identical if their traversal is same
tc->o(N)
    sc->o(n);

// own
bool isIdentical(Node *r1, Node *r2)
{
    // Your Code here
    if (r1 == NULL && r2 == NULL)
        return true;
    if (r1 == NULL || r2 == NULL)
        return false;

    if (r1->data == r2->data && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right))
        return true;
    else
        return false;
}

// strieever
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL || q == NULL)
        return (p == q);

    return p->val == q.val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
