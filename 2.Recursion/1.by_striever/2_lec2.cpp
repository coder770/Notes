// q1-- print name n times using recursion 

// own
// #include<bits/stdc++.h>
// using namespace std;
// int n;
// void print(){
//     if(n<=0) return;
//     cout<<"akshay"<<endl;
//     n--;
//     print();
// }
// int main(){
//     cin>>n;
//     print();
// }

// //striever
// void f(i,n){
//     if(i>n)
//     return ;
//     print("raj");
//     f(i+1,N);
// }

// main(){
//     int n;
//     cin>>n;
//     f(1,n);
// }
// Time Complexity--O(n)---> because we are calling a function n times and the lines inside function takes o(1)
// space complexity--O(n)--> because the n function go in the stack 

// q2--> Print(1-N)




// #include<bits/stdc++.h>
// using namespace std;
// int n;
// void print(int i, int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     i++;
//     print(i,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

// q3--> print from n to 1
// #include<bits/stdc++.h>
// using namespace std;
// int n;
// void print(int n){
//     if(n<1) return;
//     cout<<n<<endl;
//     n--;
//     print(n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// f(i,N){
//     if(i<1)
//     return ;
// }
// print(i)
// f(i-1,N);
// }
// main(){
//     input(N);
//     f(N,N);
// }


//q-4--> Print from 1 to N with bactrack 
// (withous using f(i+1,N))
//using print statement after the recursion

// f(i,N){
//     if(i<1)
//     return ;
//     f(i-1,N);
//     print(i);
// }
// main(){
//     input(n)
//     f(n,n);
// }


// q-5--> Print n to 1 by backtrak 
// #include<bits/stdc++.h>
// using namespace std;
// int n;
// void print(int n,int i){
//     if(i>n) return;
//     print(n,i+1);
//     cout<<i<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(5,1);
// }