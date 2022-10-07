#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int i,string s,int n){
    if(i>=n/2){
        return true;
    }
   
   if(isPalindrome(i+1,s,n) && s[i]==s[n-i-1])
   return true;
   return false;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<isPalindrome(0,s,n);
    return 0;
}
