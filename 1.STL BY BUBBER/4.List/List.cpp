  #include<iostream>
  #include<list>

  using namespace std;

  int main(){
      list<int> l;
      list<int> n(l);

      list<int> m(5,100);
      cout<<"Printing m"<<endl;
      for(int i:m){
          cout<<i<<" ";
      }

      l.push_back(1);
      l.push_back(2);

      for(int i:l){
          cout<<i<<" ";
      }

      cout<<endl;

      l.erase(l.begin());
      cout<<"after erase"<<endl;
      for(int i:l){
          cout<<i<<" ";
      }
      cout<<"size of list"<<l.size()<<endl;
  }