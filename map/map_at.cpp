// same as square operator it will updated the value at given key
// but the only difference is that it will throw an error if key is not already present

#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,char>m;
    m[1] = 'a';
    m[2] = 'b';

    // updating value using at operator
    m.at(2) = 'c';      // similar to m[2] = 'c'

    // // difference 
    // m.at(3) = 'd';         // try to access key 3 and update but key 3 isn't available so it will throw error
    // cout<<m.at(3)<<endl;   // this will throw error

    cout<<m.at(2)<<endl;

return 0;
}