// qn--> minimum time take to burn a binary tree from a given node/leaf
// also in copy 1
// time complaxity O(1)

class Solution {
  public:
  int FindMaxDistance(map<Node*,Node*> &mpp,Node* target){
      queue<Node*> q;
      q.push(target);
      map<Node*,int> vis;
      vis[target]=1;
      int maxi=0;
      while(!q.empty()){
          int sz=q.size();
          int fl=0;
          for(int i=0;i<sz;i++){
              auto node=q.front();
              q.pop();
              if(node->left && !vis[node->left]){
                  fl=1;
                  vis[node->left]=1;
                  q.push(node->left);
              }
              if(node->right && !vis[node->right]){
                  fl=1;
                  vis[node->right]=1;
                  q.push(node->right);
              }
              if(mpp[node] && !vis[mpp[node]]){
                  fl=1;
                  vis[mpp[node]]=1;
                  q.push(mpp[node]);
              }
          }
          if(fl) maxi++;
      }
      return maxi;
  }
   Node* bfsToMapParents(Node* root,map<Node*,Node*> &mpp,int start){
       queue<Node*> q;
       q.push(root);
       Node* res;
       while(!q.empty()){
           Node* node = q.front();
           if(node->data==start) res=node;
           q.pop();
           if(node->left){
               mpp[node->left]=node;
               q.push(node->left);
           }
           if(node->right){
               mpp[node->right]=node;
               q.push(node->right);
           }
       }
       return res;
   }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*> map;
        Node* start=bfsToMapParents(root,map,target);
        int maxi=FindMaxDistance(map,start);
        return maxi;
    }
};