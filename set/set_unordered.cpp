// unordered set stores the unique keys in unsorted order 
// time complexity of almost every operation is same as that of unorederd map that is : O(1)
// internal implementation : hash table
// we can have compex data type in unordered set (in same way as in unordered map) ex: we can't store pairs,sets inside unoredered set

#include <iostream>
#include <unordered_set>
using namespace std;

void PrintUs(unordered_set<string>&us){     // passing the actual unordered set (not the copy) to the PrintUs function
    cout<<"Unordered set is : ";
    for(auto &it:us){                       // passing the actual unordered set elements (not the copy) to the range base loop
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    unordered_set<string>s;
    s.insert("abc");            // O(1)
    s.insert("efg");
    s.insert("hij");
    s.insert("klm");
    auto it = s.find("hij");    // find function takes "key" as parameter and return "iterator"    // O(1)
    if(it!=s.end())
        s.erase(it);            // erase function takes "key" as well as "iterator" as parameter
    PrintUs(s);                 // printing the unordered set 
return 0;
}