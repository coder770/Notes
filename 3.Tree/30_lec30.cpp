// qn--> print all the nodes at a distance k
// // also in copy 1;

Node* findTarget(Node* root,int target){
    if(root==NULL) return root;
    if(root->data==target) return root;
    findTarget(root->left,target);
    findTarget(root->right,target);
    
}
     void markParents(Node* root,unordered_map<Node*,Node*> &parent_track,Node* target){
         queue<Node*> queue;
         queue.push(root);
         while(!queue.empty()){
             Node* current=queue.front();
             queue.pop();
             if(current->left){
                 parent_track[current->left]=current;
                 queue.push(current->left);
             }
             if(current->right){
                 parent_track[current->right]=current;
                 queue.push(current->right);
             }
         }
     }

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
     Node* targen=    findTarget(root,target);
        
        unordered_map<Node*,Node*> parent_track; //node->parent
        markParents(root,parent_track,targen);
        
        unordered_map<Node*,bool> visited;
        queue<Node*> queue;
        queue.push(targen);
        visited[targen]=true;
        int cur_level=0;
        while(!queue.empty()){    // Second BFS to go upto K level from target node and using our hastable info
        int size=queue.size();
        if(cur_level++==k) break;
        for(int i=0;i<size;i++){
            Node* current = queue.front(); 
            queue.pop();
            if(current->left && !visited[current->left]){
                queue.push(current->left);
                visited[current->left]=true;
            }
            if(current->right && !visited[current->right]){
                queue.push(current->right);
                visited[current->right]=true;
            }
            if(parent_track[current] && !visited[parent_track[current]]){
                queue.push(parent_track[current]);
                visited[parent_track[current]]=true;
            }
        }
            
        }
        vector<int> result;
        while(!queue.empty()){
            Node* current=queue.front();
            queue.pop();
            result.push_back(current->data);
        }
        return result;
    }
