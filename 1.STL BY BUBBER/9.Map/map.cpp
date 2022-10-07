#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[1]="babbar";
    m[13]="Kumar";
    m[2]="love";

   m.insert({5,"bheem"});

cout<<"before erase"<<endl;
   for(auto i:m){
       cout<<i.first<<" "<<i.second<<endl;
   }

   cout<<"finding 13 -->"<<m.count(13)<<endl;
  m.erase(13);

  cout<<"after erase"<<endl;
   for(auto i:m){
       cout<<i.first<<" "<<i.second<<endl;
   }
   

   //insert erase find and count have time complaxity o(log(n))
   // this map is implemented using red black tree and balanced tree

   //unordered map is implemented using hash table where the time complaxity of searching is o(1)

   auto it = m.find(5);

   for(auto i=it; i!=m.end(); i++){
       cout<<(*i).first<<endl;
   }


 
}