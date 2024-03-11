#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  // map declaration
  map<int, string> sample_map;

  // map initialization at the time of declaration
  // map<int, string> sample_map{{1, "one"}, {2, "two"}};

  // map initialization
  sample_map.insert(pair<int, string>(1, "one"));
  sample_map.insert({2, "two"});
  sample_map.insert(make_pair(3,"three"));

  cout <<"Key   "<<"Value"<<endl;
  cout<<1<<"      "<<sample_map[1]<<endl;
  cout<<2<<"      "<<sample_map[2]<<endl;
  cout<<3<<"      "<<sample_map[3]<<endl;

return 0;
}