// square []  operator
// sample_map[]

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<int, string> sample_map{{1, "one"}};
    
    // this will go to key 2 and update the value
    // if the key is not already present then it will create that key and put the given value in that key
    // if value is not given it will assign the default value (for example in int it will assign as 0)
    cout<<" 2 : "<<sample_map[2]<<endl;  // here it will create key 2 and assign it value "" (string value blank)

    sample_map[2] = "updating using square [] operator";    // here that key will be updated
    
    cout<<" 1 : "<<sample_map[1]<<endl;
    cout<<" 2 : "<<sample_map[2]<<endl;
}