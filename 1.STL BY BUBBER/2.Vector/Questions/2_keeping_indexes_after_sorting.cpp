// i/p---> arr[]={20,40,30,10}
//                0   1  2  3
// o/p----> 10 3
//          20 0
//          30 2
//          40 1

// own
#include <bits/stdc++.h>
using namespace std;
// void comp(pair<int,int> p1,pair<int,int> p2){
//     return p1.second>p2.second;
// }
int main()
{
    int n;
    int x;
    cin >> n;
    vector<pair<int, int>> v;

    for (auto i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    // for (auto i = 0; i < n; i++)
    // {
    //     cin >> x;
    //     v.push_back({i, x});
    // }
    // sort(v.begin(), v.end(),comp());
    // for (auto i : v)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
}

// gfg
// void printSortedIndexes(int arr[], int n)
// {
//     vector<pair<int, int>> v;
//     for (int i = 0; i < n; i++)
//         v.push_back({arr[i], i}); // make_pair(arr[i],i);
//     sort(v.begin(), v.end());
//     for (auto x : v)
//         cout << x.first << " " << x.second << endl;
// }

// ******* complexity analysis *******
// time compaxity -- O(NlogN)-- for sorting
// space complexity--O(N) --for making vector of pair 
