// boundary order traversal of binary tree
//  also in copy 1

class Solution
{
public:
    bool isLeaf(Node *root)
    {
        if (root->left == NULL && root->right == NULL)
            return true;
        else
            return false;
    }
    void addLeftBoundary(Node *root, vector<int> &res)
    {
        Node *cur = cur->left;
        while (cur)
        {
            if (!isLeaf(cur))
                res.push_back(cur->data);
            if (cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }
    void addRightBoundary(Node *root, vector<int> &res)
    {
        Node *cur = root->left;
        vector<int> tmp;
        while (cur)
        {
            if (!isLeaf(cur))
                tmp.push_back(cur->data);
            if (cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }
        for (int i = tmp.size() - 1; i >= 0; i--)
        {
            res.push_back(tmp[i]);
        }
    }
    void addLeaves(Node *root, vector<int> &res)
    {
        if (isLeaf(root))
        {
            res.push_back(root->data);
            return;
        }
        if (root->left)
            addLeaves(root->left, res);
        if (root->right)
            addLeaves(root->right, res);
    }
    vector<int> boundary(Node *root)
    {
        // Your code here
        vector<int> res;
        if (!root)
            return res;
        if (!isLeaf(root))
            res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);
        return res;
    }
};