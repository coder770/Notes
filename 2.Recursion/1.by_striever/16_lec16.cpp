// qn--> m coloring problem 
// can we color the graph with the given m color sucht that adjecent node should not get the same color 

// pseudo code 
// f(node){
//     if(node==N) return true,

//     for(col=1-->m){
//         if(possible-->col){
//             color[node]=col1;
//             if(f(node+1)==true)
//              return true;
//              color[node]=0 // backtracking
//         }
//     }
//     return false; 
// }


  bool isSafe(int node,int color[],bool graph[101][101],int n,int col){
        for(int k=0;k<n;k++){
            if(k!=node && graph[k][node]==1 && color[k]==col){
                return false;
            }
        }
        return true;
    }
    bool solve(int node,int color[],int m,int N,bool graph[101][101]){
        if(node==N){
            return true;
        }
        
        for(int i=1;i<=m;i++){
            if(isSafe(node,color,graph,N,i)){
                color[node]=i;
                if(solve(node+1,color,m,N,graph)) return true;
                color[node]=0;
            }
        }
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int N=n;
        int color[N]={0};
        if(solve(0,color,m,N,graph)) return true;
        return false;
    }