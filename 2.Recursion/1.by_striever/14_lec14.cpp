// // qn--> n-queen problem
// --> every row should have 1Q
// --> every col should have 1Q
// --> none of the Q attak each other


// a queen can attack in 8 direction 
//   1 |  2 |  3 |  4 |
// 1   |  Q |    |    |
// ----|----|----|----|
// 2   |    |    |  Q |
// ----|----|----|----|
// 3 Q |    |    |    |
// ----|----|----|----|
// 4   |    |  Q |    |


//   1 |  2 |  3 |  4 |
// 1   |    |  Q |    |
// ----|----|----|----|
// 2 Q |    |    |    |
// ----|----|----|----|
// 3   |    |    |  Q |
// ----|----|----|----|
// 4   |  Q |    |    |

// hm first col ki every row p check krenge ki queen kha kha place ho skti hai or agle columns ka kam recursion ko sop denge 
bool isSafe(int row,int col,vector<string> board,int n){
    int duprow=row;
    int dupcol=col;

    while(row>=0 && col>=0){
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }

    col=dupcol;
    row=duprow;
    while(col>0){
        if(board[row][col]=='Q') return false;
        col--;
    }

    row=duprow;
    col=dupcol;
    while(row<n && col>=0){
        if(board[row][col] == 'Q') return false;
        row++;
        col--;

    }
    return false;
}

void solve(int col,vector<string>&board,vector<vector<string>> &ans,int n){
    if(col==n){
        ans.push_back(board);
        return ;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}





vector<vector<string> solveNQueens(int n){
    vector<vector<string> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
         board[i]=s;
    }
    solve(0,board,ans,n);
    return ans;
    }