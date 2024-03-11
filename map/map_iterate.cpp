#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    //initializing at the time of declaration
    map<int, string> sample_map{{1, "one"}, {2, "two"}};

    // map<int, string> sample_map = {{1, "one"}, {2, "two"}};          // using "=" operator

    sample_map[3] = "three";
    sample_map.insert({4, "four"});

    map<int, string>::iterator it;
    for (it = sample_map.begin(); it != sample_map.end(); it++){
        cout << it->second << ", ";
    }
    cout << endl;

    // using auto keyword
    cout<<"Using auto keyword : "<<endl;
    for(auto &itr:sample_map){              // here itr is of data type "pair<int,string>"
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    cout<<endl;

    return 0;
}