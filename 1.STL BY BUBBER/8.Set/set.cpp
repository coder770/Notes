#include<iostream>
#include<set>
using namespace std;
//set works on the basis of binary search tree the complexity of inserting in it is o(logn)
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(2);
    s.insert(6);
    s.insert(5);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;
   set<int>::iterator it = s.begin();
   it++;
    s.erase(s.begin());
    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

     cout<<"5 is presnet or not"<<s.count(5)<<endl;

     set<int>::iterator itr=s.find(-1);

     cout<<endl<<*s.end()<<*itr;
     
     for(auto it=itr; it!=s.end(); it++){
         cout<<*it<<" ";
     }cout<<endl;
}
