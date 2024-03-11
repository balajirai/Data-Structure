// all function works the same as of ordered map 
// some differences are : 
// 1. inbuilt implementation  ->   hash table
// 2. time complexity         ->   effiecient ( O(1) in most of the cases )
// 3. valid keys data types   ->   complex data type not supported (like unordered_map<pair<int,int>,string>mp;  compilation error)

#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>m;
    m[1] = "one";       // here 1 is key not index and "one" is the value of that key
    m[2] = "two";       // O(1) for insertion/updation/access
    m[3] = "three"; 
    m[4] = "four";

    auto it = m.find(2);    // O(1)
    m.erase(2);             // O(1)
return 0;
}