// sample i/p ---> 20 30 10 5 15 
//                 -1 -1 30 10 30


// naive solution 
// time complaxity -- o(n*n)
// in wrost the inner loop will run full and the outer loop will also run full so n*(n+1)/2

// void printPrevGreater(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j;
//         for(j=i;j>=0;j--){
//             if(arr[j]>arr[i]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//         }
//         if(j==-1)
//         cout<<-1<<" ";
//     }
// }

// efficient solution 
// this problem is basically the variation of the simple stock span problem here we not stroe the index in the stack but we will store the actual value because we dont want the difference we want the actual value here 

// time complexity -- O(N)
// void printPrevGreater(int arr[],int n){
//     stack<int> s;
//     s.push(arr[0]);
    //    cout<<-1<<" ";
//     for(int i=0;i<n;i++){
//         while(s.empty()==false && s.top()<=arr[i])
//         s.pop();
//         int pg = (s.empty())?-1:s.top();
//         cout<<pg<<" ";
//         s.push(arr[i]);
//     }
// }