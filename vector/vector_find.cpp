#include <iostream>
#include <vector>     // for vector
#include <algorithm>  // for find
using namespace std;

/*

Syntx: 
    iterator find(iterator start, iterator end, value);
Description:
    The find function searches for the first occurrence of the specified value
    within the range defined by the start and end iterators. It returns an iterator pointing to the 
    found element or the end iterator if the element is not found.

Time Complexity:
    O(n) - Linear search through the range

Example:
    auto it = find(v.begin(), v.end(), 50); // O(n) -> linear search
    if (it != v.end()){
        cout<<"Element found: "<<*it<<endl;
    }
    else {
        cout<<"Element not found"<<endl;
    }

*/



void printv(vector<int>v){
    // v.size()  ->  O(1)
    cout<<"Size of vector is : "<<v.size()<<endl;
    cout<<"Elements are : ";
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>v = {10,20,30,40,50,60,70,80,90};
    printv(v);

    // find element 50 in vector
    if(find(v.begin(), v.end(), 50) != v.end()){
        cout<<"Element found !"<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }

    // cout << typeid(it).name() << endl;

    return 0;
}