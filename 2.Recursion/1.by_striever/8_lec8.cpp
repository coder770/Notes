// whenever you want to print the combination or subsequnce of an array always think of the recursion
// always think of the pick and not pick status

// arr[] = {2,3,6,7} target = 7

// ans = [2,2,3]
// expalnation

// status  PP   P    NP  NP
// index    0   1    2   3

// ans 7
// status  NP   NP   NP  P
// index    0   1    2   3

// f(ind,target,ds)
// {
//    if(ind==n){
//        if(target==0){
//         //    then add the current ds into some of the another ds
//        }
//        else return ;
//    }

// // pick the current element either one time or if we are picking more than one time then we will don't jump on to the next index
//     ds.add(a[ind]);
//     f(ind,target-a[ind],ds)

//     ds.remove(a[ind]);
//     f(ind+1,target,ds);
// }

// time complexity
// p/n   p/n   p/n  p/n
// 0      1     2    3

// Tc---> (2^N)*K
// we assusme here that the length of the data structur is k so copying the data structure intro another is not and constant operation so multiply k

// tc--> 2^t * k
// t is the target like 1st index in 1 and trget is 10 so we reduce the target every time by picking and picking and picking

#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int candidates[], int target, vector<vector<int>> &ans, vector<int> &ds, int n)
{
    if (ind == n)
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
    }
    return;

    // pick up the element
    if (candidates[ind] <= target)
    {
        ds.push_back(candidates[ind]);
        findCombination(ind, candidates, target - candidates[ind], ans, ds, n);
        ds.pop_back();
    }
    findCombination(ind + 1, candidates, target, ans, ds, n);
}

int main()
{
    int candidates[] = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> ds;
    // sort(candidates.begin(),candidates.end());
    findCombination(0, candidates, target, ans, ds, 4);
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();i++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}