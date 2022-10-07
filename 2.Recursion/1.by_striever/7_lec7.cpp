
// qn print all the subsequence having sum k
//  arr->[1,2,1]
//        0 1 2


//using method of take or not take
// pseudo code
// f(i, ds, s)
// {
//     if (i == n)
//     {
//         if (s == sum)
//         {
//             print(ds);
//         }
//     }
//     ds.add(arr[i]);
//     s += arr[i];
//     f(i + 1, ds, s);
//     ds.remove(arr[i]);
//     s -= arr[i];
//     f(i + 1, ds, s);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printF(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// {
//       if(ind==n){
//           if(s==sum){
//               for(auto it: ds) cout<<it<<" ";
//               cout<<endl;
//           }
//           return;
//       }
//       ds.push_back(arr[ind]);
//       s+=arr[ind];
//       printF(ind+1,ds,s,sum,arr,n);
//       s-=arr[ind];
//       ds.pop_back();

//       //not pick
//       printF(ind+1,ds,s,sum,arr,n);
// }
// int main()
// {
//     int arr[] = {1, 2, 1}, sum = 2;
//     vector<int> ds;
//     int n=3;
//     printF(0,ds,0,sum,arr,n);
//     return 0;
// }


//qn--> Print any one subsequence having sum k 
// #include <bits/stdc++.h>
// using namespace std;

// int flag =false;
// void printF(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// {
//       if(ind==n){
//           if(s==sum && flag==false){
                // flag=true
//               for(auto it: ds) cout<<it<<" ";
//               cout<<endl;
//           }
//           return;
//       }
//       ds.push_back(arr[ind]);
//       s+=arr[ind];
//       printF(ind+1,ds,s,sum,arr,n);
//       s-=arr[ind];
//       ds.pop_back();

//       //not pick
//       printF(ind+1,ds,s,sum,arr,n);
// }
// int main()
// {
//     int arr[] = {1, 2, 1}, sum = 2;
//     vector<int> ds;
//     int n=3;
//     printF(0,ds,0,sum,arr,n);
//     return 0;
// }

// but these above method is not preferd we will do it with the help of the functional method 
// technique to print one answer 

// f(){
//     //base case
//     cond--> staisfiec
//        return ture;
//     cond--? not satisfied
//        return false;
// }

// // main function 
// if(f()==ture)
//   return ;
// not nedd to go further such that no need to go to the not pick case 
// learn this technique


// #include <bits/stdc++.h>
// using namespace std;

// bool printF(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// {
//       if(ind==n){
//           // condtion satisfied
//           if(s==sum){
//               for(auto it: ds) cout<<it<<" ";
//               cout<<endl;
//               return true;
//           }
//           // condtion not satisfied
//         else  return false;
//       }
//       ds.push_back(arr[ind]);
//       s+=arr[ind];
//      if(printF(ind+1,ds,s,sum,arr,n)==true) return true ;
//       s-=arr[ind];
//       ds.pop_back();

//       //not pick
//      if(printF(ind+1,ds,s,sum,arr,n)==true) return true;
//      return false;
// }
// int main()
// {
//     int arr[] = {1, 2, 1}, sum = 2;
//     vector<int> ds;
//     int n=3;
//     printF(0,ds,0,sum,arr,n);
//     return 0;
// }


// Count the subsequence having sum =k
// made by me
// #include<bits/stdc++.h>
// using namespace std;
// void printF(int ind,int sum,int n,int s,vector<int> &ds,int arr[],int &count){
//   if(ind==n){
//       if(s==sum){
//         //   for(auto i:ds){
//         //       cout<<i<<" ";
//         //   }cout<<endl;
//         count++;
//       }
//       return;
//   }



//     ds.push_back(arr[ind]);
//     s+=arr[ind];
//     printF(ind+1,sum,n,s,ds,arr,count);

//     ds.pop_back();
//     s-=arr[ind];
//     printF(ind+1,sum,n,s,ds,arr,count);
// }
// int main(){
//     int arr[]={1,2,3,6,5,1,1,1,1,2,3,4,5};
//     int n=13;
//     vector<int> ds;
//     int sum=5,count=0;
//     printF(0,sum,n,0,ds,arr,count);
//     cout<<count<<endl;
//     return 0;
// }


//by striever
//  base case
//  return 1 --> condtion satisfy;
//  return 0 --> conditon not satisfy;

//  l=f();
//  r=f();
//  return l+r;
//  }

// if any qn there is n recursion calls(like in nqueen problem)
// then 
// s=0;
// f(i=1-->n)
//   s+=f();
// return s;

// keep this pattern right in your brain forever 
// #include <bits/stdc++.h>
// using namespace std;

// int printF(int ind,  int s, int sum, int arr[], int n)
// {
    // condtion not satisfy
    // strictly done if array contains positive only
//       if(ind==n){
//           if(s==sum){
             
//                 return 1;
//           }
//          else return 0;
//       }
   
//       s+=arr[ind];
//     int l=  printF(ind+1,s,sum,arr,n);
//       s-=arr[ind];
   

//       //not pick
//     int r= printF(ind+1,s,sum,arr,n);
//       return l+r;
// }
// int main()
// {
//     int arr[] = {1, 2, 1}, sum = 2;
//     int n=3;
//     cout<<printF(0,0,sum,arr,n);
//     return 0;
// }


// time complexity
// 2 2 2 2 2 2 ===> 2^n;
// _ _ _ _ _ _

// there is two option for every index pick or not pick so the time complaxity will be 2^n


// quick recap 
// print -------> parameter wise

// print 1 -----> return T/F & avoid further recursion calls if you got true;
// count ---> return 1
//            return 0  add all f() and return;