// gfg course qn
//  rool-no = {103,105,101,106}
//  marks = {70,80,40,50}
//  output--101 40
//          106 50
//          103 70
//          105 80

// own

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector<int> roll, marks;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        roll.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        marks.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        // ans.push_back({marks[i],roll[i]});
        ans.push_back(make_pair(marks[i], roll[i]));
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        cout << ans[i].second << " " << ans[i].first << endl;
    }

    return 0;
}

// videeo solution
// as the sort function will sort the element on the basis of the first element of the vector but we have to sort it on the basis of the second element of the vecotr so we use the comparision function
// void myCmp(pair<int,int> p1,pair<int,int> p2){
//     return p1.second>p2.second;
// }

// void printSortedByMarks(int roll[],int marks[],int n){
//     vector<pair<int,int>> v;
//     for(int i=0;i<n;i++){
//         v.push_back({roll[i],marks[i]});
//     }
//     sort(v.begin(),v.end(),myCmp);
//     for(int i=0;i<n;i++){
//         cout<<v[i].first<<" "<<v[i].second;
//         cout<<endl;
//     }
// }

// alternate implementation is first store the marks and then roolno in the pair then we will sort the vecotor on the basis of the first element of the array
// but sort funciton will sort in ascention order if we want it to sort it in descending ordere then we pass the greater<pair<int,int>>(); function to it
//  the syntax is
//  sort(v.begin(),v.end(),greater<pair<int,int>());

// ******** compelxity analysis *********
// space complexity -- O(N)
// time complexity  -- O(nlogn)-- for sorting

// for reducing the space complexity and if you have the control over input then you can directly take the input in the vector of pair
