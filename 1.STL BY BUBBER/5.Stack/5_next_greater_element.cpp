// i/p = arr[]={5,15,10,8,6,12,9,18}
// o/p =       15,18,12,12,12,18,18,-1

// i/p = arr[]={25,20,15,10}
//              -1 -1 -1 -1 

//Naive solution 
//own
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> ip(n,-1),op;
//     // for(int i=0;i<n;i++){
//     //     int x;
//     //     cin>>x;
//     //     ip.push_back(x);
//     // }
//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(ip[j]>ip[i]){
//     //            op.push_back(ip[j]);
//     //            break;
//     //         }

//     //     }
    
//     // }
//       for(int i=0;i<n;i++){
//           cout<<op[i]<<" ";
//     }
//     return 0;
// }

//gfg
// void nextGreaater(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j;
//         for(j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//         }
//         if(j==n)
//         cout<<-1<<" ";
//     }
// }