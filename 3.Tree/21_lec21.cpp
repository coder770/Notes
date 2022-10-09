// vertical order traversal of a binary tree
vector<int> verticalOrder(Node *root)
{
    // Your code here
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<Node *, pair<int, int>>> todo;
    while (!todo.empty())
    {
        auto p = todo.front();
        todo.pop();
        Node *node = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(node->data);
        if (node->left)
        {
            todo.push({node->left, {x - 1, y + 1}});
        }
        if (node->right)
        {
            todo.push({node->right, {x + 1, y + 1}});
        }
    }

    // vector<int> col;
    // for(auto p:nodes){
    //     for(auto q:p.second){
    //         col.insert(col.end(),q.second.begin(),q.second.end());
    //     }
    // }
    // return col;

    // or

    vector<vector<int>> ans;
    for (auto p : nodes)
    {
        vector<int> col;
        for (auto q : p.second)
        {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}