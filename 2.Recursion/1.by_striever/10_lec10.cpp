// subset sum
// no of subsets is always equal to the 2^N which is equal to teh no of subsequence

// [3,1,2] n=3
// {} --> 0
// {3} --> 3
// {1} --> 1
// {2}-->2
// {3,1}-->4
// {3,2}-->5
// {1,2}-->3
// {3,1,2}-->6

// ans 0 1 2 3 3 4 5 6

// own 


// #include<bits/stdc++.h>
// using namespace std;

// void sumaa(int ind,int arr[],vector<int> &ans,vector<int>&ds,int n,int sum){
//     if(ind==n){
//         ans.push_back(sum);
//         return ;
//     }
//     ds.push_back(arr[ind]);
//     sumaa(ind+1,arr,ans,ds,n,sum+arr[ind]);

//     ds.pop_back();
//     sumaa(ind+1,arr,ans,ds,n,sum);

// }
// int main(){
//     int arr[]={3,1,2};
//     int n=3;
//     vector<int> ans,ds;
//     sumaa(0,arr,ans,ds,n,0);
//     sort(ans.begin(),ans.end());
//     for(auto i:ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }


// bruit force technique is to write the power set using power set algo such that using bit manipulation
// tc-> 2^n *n
// so interview will not be happay with the extra n so then you will do it with the revursive approach 

// recursive approach select not select for every index
// s  ns  s   ---> [3,4]
// 0  1   2
 
//  f(ind,s=0){
//      if(ind==arr.size()) return ; 
//      f(ind+1,s+a[ind]);
//      f(ind+1,s);
//  }

//  for every index two way pick and not pick 
//  so time complexity --> 2^Nlog(2^N);
//  log(2^N) is for sorting 

void func(int ind,int sum,vector<int> &arr,int N,vector<int> &sumSubset){
    if(ind==N){
        sumSubset.push_back(sum);
        return ;
    }
    // pick the element
    func(ind+1,sum+arr[ind],arr,N,sumSubset);

    // do not pick the element 
    func(ind+1,sum+arr[ind],arr,N,sumSubset);
}

vector<int> subsetSums(vector<int> arr, int N){
    vector<int> sumSubset;
    func(0,0,arr,N,sumSubset);
    sort(sumSubset.begin(),sumSubset.end());
    return sumSubset;
}