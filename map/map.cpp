// A C++ map is a way to store a key-value pair

// ordered map uses red black tree for inbuilt implementation
// maintains the order of the key
// time complexity relatively larger than unordered maps

#include <iostream>
#include <map>
using namespace std;
int main(){

    // syntax for declaring a map
    map<int, int> sample_map;

    // complexity of operations on maps
    // here n is the size of map (length)
    map<int, string> m;
    m[1] = "one"; // here 1 is key not index and "one" is the value of that key
    m[2] = "two"; // O(log(n)) for insertion/updation/access
    m[3] = "three";
    m[4] = "four";

    auto it = m.find(2); // O(log(n))
    m.erase(2);          // O(log(n))

    // for string as key the time complexity depends on the size of string (if string size is compratively larger)
    // because comparing the string with other strings to find the unique key or to increment the frequency takes time for larger strings
    // map<string,string>ms;       // tc = s.size() * log(n)

    return 0;
}