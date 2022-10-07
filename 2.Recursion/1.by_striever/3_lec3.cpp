// sum of first N natural number
// two methods 
// parameter based
// functional based 

//own
// #include<bits/stdc++.h>
// using namespace std;
// int addition(int n){
  
//       if(n<0)
//       return 0 ;

//       return addition(n-1) + n;
// }
// int main()
// {
//     int n,sum=0;
//     cin>>n;

//     cout<<addition(n);
// }


// parametrised funtion 
// f(i,sum){
//     if(i<1){
//         print(sum)
//         return ;
//     }
//     f(i-1,sum+i)
// }
// main(){
//     n;
//     f(n,0)
// }

//functional
// f(n){
//     if(n==0)
//     return 0;
// }
// return n+f(n-1);
// }
// main(){
//     n;
//     print(f(n));
// }

// q--> factorail 
//  #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
  
//       if(n==0 || n==1)
//       return 1 ;

//       return factorial(n-1)*n;
// }
// int main()
// {
//     int n,sum=0;
//     cin>>n;

//     cout<<factorial(n);
// }

// time complaxity -- O(n) -- due to n times functional __cpp_binary_literals
// space complexity -- O(n)
