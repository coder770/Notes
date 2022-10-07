// qn--> palindrome partitionin 
"aabb"--> {a,a,b,b}
          {a,a,bb}
          {aa,b,b}
          {aa,bb}

    bool isPalindrome(string s,int st,int en){
        while(st<en){
            if(s[st++]!=s[en--]) return false;
        }
        return true;
    }
    
    void func(int index,string s,vector<string> &path,vector<vector<string>> &res){
        if(index==s.length()) {
            res.push_back(path);
            return ;
        }
        for(int i=index;i<s.length();i++){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                func(i+1,s,path,res);
                path.pop_back();
            }
        }
}
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(0,s,path,res);
        return res;
    }