
// i/p----> arr[]={10,20,30,40}
// o/p---->        1  2   3  4


//own //bruitforce
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v, ans;
    int n, val = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (v[j] <= v[i])
                val++;
        }
        ans.push_back(val);
        val=0;
    }
    for (int i = 0; i < n; i++)
    {
       cout<<ans[i]<<" ";
    }
}

//bruitforce  
for(int i=0;i<n;i++){
    int span=1;
    for(int j=i-1;j>=0;j--){
        if(arr[j]<=arr[i])
           span++;
           else
           break;
    }
    cout<<span<<" ";
}