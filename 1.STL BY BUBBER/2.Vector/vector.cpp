#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5, 1);
    cout << "print a" << endl;

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> last(a);

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Cpacity-->" << v.capacity() << endl;

    v.push_back(1);
    cout << "Cpacity-->" << v.capacity() << endl;

    v.push_back(2);
    cout << "Cpacity-->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Cpacity-->" << v.capacity() << endl;
    cout << "Size-->" << v.size() << endl;

    cout << "Element at 2nd Index" << v.at(2) << endl;

    cout << "front" << v.front() << endl;
    cout << "back" << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size" << v.size() << endl;
    v.clear();
    cout << "after clear size" << v.size() << endl;
}

// to traverse a vector
// this will not do any changes in the vector if you want to do so
// for (int x : v)
// {
//     cout << x << endl;
// }

// this would definatly make changes that you want to make
// for (int &x : v)
// {
//     x = 6;
//     cout << x << endl;
// }

// a new type of traversal
// iterators give the address of the element
// v.begin()--will return the address of first element
// v.end()--return the address of the element that is next to the last element but not the lase element
// vector<int>::iterator
// vector<int> v(n, 5);
// for (auto it = v.begin(); it != v.end(); it++)
// {
//     cout << *it << endll;
// }

// if you call v.find() on a vector and it doesnot find anything then it will return v.end();

// some of the vectors funcitons
// pop_back()
// front()----return refrence to the first element
// back()
// insert()
// error()
// v.front()=100; //same as v[0]
// auto it = v.insert(v.begin(),100);
// v.insert(v.begin()+2,200);
// //v.insert(v.begin(),2,300) we have 300 2 times at the begining
// vector<int> v2;
// v2.insert(v2.begin(),v.begin(),v.begin()+2)  copy the element from v2

// v.erase()
//  v.erase(v.begin());
//  v.erase(v.begin(),v.end()-1)---> it will remove all the element

// clear function will remove everythig from the vector
// empty function will tell you whether the vector is empty or not
//  if(v.empty==true)
//  cout<<"empty";
//  cout<<"not empty";

// resize function is used to resize the vector
//  like {10,5,20,5}
//  v.resize(3); {10,5,20}
//  v.resize(5); {10,5,20,0,0} filled with default value 0 for the case of __is_integer
//  you can also specify the remaining value
//  v.resize(8,100);  {10,5,20,0,0,100,100,100}

// vector are dynamic array please not confuse with dynamic allocatied array
//  dynamically allocated --- int *ptr = new int[n]----here you have to pass the size
//  dynamic array ---> vector<int> v;
//  vector internally have dynamically array

// if current allocated space becomes full do following 
// a) create a new larger space fo double size
// b) copy elemts from old space to new space 
// c) free old space 

