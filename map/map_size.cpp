#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> sample_map;
    sample_map.insert({1,"one"});
    sample_map.insert({2,"two"});
    sample_map.insert({3,"three"});

    cout<<sample_map.size()<<endl;

}