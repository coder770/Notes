
// Q--->reverse an array
// own

// #include<bits/stdc++.h>
// using namespace std;
// void rev(int st,int end,int* v){
//          if(st>end){
//              return ;
//          }
//          swap(v[st],v[end]);
//          rev(st+1,end-1,v);
// }
// int main(){
//     int n;
//     cin>>n;
//     int v[n];
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     rev(0,n-1,v);
//     for(auto i: v){
//         cout<<i<<" ";
//     }
// }

// striever

// f(l,r){
//     if(l>=r) return ;
//     swap(a[l],a[r]);
//     f(l+1,r-1);
// }
// main(){
//     arr;
//     f(0,n-1);

// }

// Using single variable
// f(i){
//     if(i>=n/2)
//     return ;
//     swap(a[i],a[n-i-1]);
//     f(i+1);
// }
// main(){
//     arr;
//     f(0);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void f(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//         return;
//     swap(arr[i], arr[n - i - 1]);
//     f(i + 1, arr, n);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     f(0, arr, n);
//     for (auto i : arr)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }





// Q2---> check if the given string is palindrome or not 
//own
// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrome(int i,string s,int n){
//     if(i>=n/2){
//         return true;
//     }
   
//    if(isPalindrome(i+1,s,n) && s[i]==s[n-i-1])
//    return true;
//    return false;
// }
// int main()
// {
//     string s;
//     cin>>s;
//     int n=s.length();
//     cout<<isPalindrome(0,s,n);
//     return 0;
// }


//striever
// f(i){
//    if(i>=n/2) return true;

//     if(s[i]!=s[n-i-1])
//     return false;
//     return f(i+1);
// }

// main(){
//     s;
//     print(f(0));
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool f(int i,string &s){
//     if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return f(i+1,s);
// }

// int main(){
//     string s= "madam";
//     cout<<f(0,s);
// }

// time complexity - O(N/2)
// space complexity - O(N/2)



