// subsequence---> a contiguous / non - contiguous squence, whick follows the order
// subarray ---> subarray is only contiguos
// a subarray can be a subsequences

// arr-->[3,1,2] subsequences are given below
// 3
// 1
// 2
// 3 1
// 1 2
// 3 2 ---> except this all are subarray
// 3 1 2
// n==3 ans = 8

// you can do it using algorithm power set
// but here we will do it using recursion

// [3,            1,           2]
// not take      take           take   [1,2]
// take          take        not take  [3,1]
// take          take          take    [3,1,2]
// not take   not take      not take   []

// []--> this is the subsequence that we have to form

// f(ind,[]){
//     if(ind>=n)
//      print([])
//      return ;

//     [].add[arr[i]];
//     f(ind+1,[]); ---- > take
//     [].remove(arr[i]);
//     f(ind+1,[]); -----> not take
// }
#include <bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int> &ds,int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();
// not pick or not take conditon this will not added in your subsequence
     printF(ind+1,ds,arr,n);
}

// another method

// void printF(int ind, vector<int> ds, int arr[], int n)
// {
//     if (ind == n)
//     {
//         for (auto it : ds)
//         {
//             cout << it << " ";
//         }
//         if (ds.size() == 0)
//         {
//             cout << "{}";
//         }
//         cout << endl;
//         return;
//     }
//     // not pick or not take conditon this will not added in your subsequence
//     printF(ind + 1, ds, arr, n);
//     // take or pick the particular index into the subsequence
//     ds.push_back(arr[ind]);
//     printF(ind + 1, ds, arr, n);
//     ds.pop_back();
// }

// int main()
// {
//     int arr[] = {3, 1, 2};
//     int n = 3;
//     vector<int> ds;
//     printF(0, ds, arr, n);
//     return 0;
// }


// time complexity
// 2 2 2 2 2
// _ _ _ _ _ 

// for every index we have two option so time complexity is O(2^N) * N
// where N is for print the subsequence
// space complecity -- O(N)
// because maximum dept of the tree is N so maximum n calls is waiting


//using power set method
// power set will basilcally contain all the substring


// S = "abc"
//      2  1  0
// 0    0  0  0    ""

// 1    0  0  1    a

// 2    0  1  0    b

// 3    0  1  1    ab

// 4

// 5

// 6

// 7

// how to know that ith bit of a number is set or not 
// if(n&(1<<n));




		// vector<string> AllPossibleStrings(string s){
		//     // Code here
        //     int  a=s.length();
        //      int  n=pow(2,a);
        //       vector<string> v;
              
        //       for(int i=0;i<n;i++){
        //           string str="";
        //           for(int j=0;j<a;j++){
        //               if(i&1<<j){
        //                   str+=s[j];
        //               }
        //           }
        //           if(str.length())
        //           v.push_back(str);
        //       }
        //       sort(v.begin(),v.end());
        //       return v;
		// }

        // time complaixty O()