// qn --> find the all the permutaiton of aray or string 
// [1,2,3] n=3
// n!=3!=6
// 1 2 3
// 1 3 2
// 2 1 3 
// 2 3 1 
// 3 1 2 
// 3 2 1 

// f(ds,map){
//     if(ds===n) ans.push_back(ds);
//     loop(0--->n-1){
//         if(i is!map){
//             ds.add(a[i])
//             map[i]=1
//         }
//     }
//     f(ds,map)
// }
// tc--->n!*n
// sc--->o(n) + o(n)

//own

// #include<bits/stdc++.h>
// using namespace std;
// void perm(vector<vector<int>> &ans,vector<int> &ds,int m[],int arr[],int n){
//     if(ds.size()==n){
//         ans.push_back(ds);
//         return ;
//     }
//     for(int i=0;i<n;i++){
//          if(m[i]==0){
//              ds.push_back(arr[i]);
//              m[i]=1;
//              perm(ans,ds,m,arr,3);
//              ds.pop_back();
//              m[i]=0;
//          }
//     }
// }

// int main(){
//     int arr[]={1,2,3};
//     int n=3;
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int m[3]={0,0,0};
//     perm(ans,ds,m,arr,3);
//     for(int i=0;i<ans.size();i++){
//      for(int j=0;j<ans[i].size();j++){
//        cout<<ans[i][j];
//      }
//      cout<<endl;
//     }
//     return 0;
// }


// void recurPermute(vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans,int freq[]){
//     if(ds.size()==nums.size()){
//         ans.push_back(ds);
//         return ;
//     }

//     for(int i=0;i<nums.size();i++){
//         if(!freq[i]){
//             ds.push_back(nums[i]);
//             freq[i]=1;
//             recurPermute(ds,nums,ans,freq);
//             freq[i]=0;
//             ds.pop_back();
//         }
//     }
// }

// vector<vector<int>> permute(vector<int> &nums){
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int freq[nums.size()]={0};
//     for(int i=0;i<nums.size();i++) freq[i]=0;
//     recurPermute(ds,nums,ans,freq);
//     return ans;
// }
