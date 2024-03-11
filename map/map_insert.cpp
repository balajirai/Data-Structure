// insert function only insert those pairs whose key value are not already present in the map
// it would not update the map with same key value

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<int, string> sample_map{{1, "one"}};

    sample_map.insert({2,"insert_function"});   // this will insert 2 and its value because no key = 2 was there before
    
    sample_map[2] = "updating using square [] operator";   // this will go to key 2 (if not present it will create key 2) and update the value
    
    sample_map.insert({2, "inserting"});     // this will be ignored (neither inserted nor updated) because we are inserting a pair we existing key

    cout<<" 1 : "<<sample_map[1]<<endl;
    cout<<" 2 : "<<sample_map[2]<<endl;
}