// insert(position,val) we allot position at which we want to insert using iterator

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> v{"Balaji"};
    string str = "Rai";
    v.insert(v.begin() + 1, str);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}