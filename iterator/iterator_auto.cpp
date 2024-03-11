// auto keyword 
// it actually detects the data type of the variable automatically
// auto a = 1;          //  here auto detects a to be integer
// auto a = 1.2456      //  here auto detects a to be float or double      

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6};

    cout<<"Using iterator : ";
    vector<int> :: iterator it;    // declaring iterator
    for (it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // using auto key word in iterator 
    cout<<"Using auto keyword in iterator : ";
    for (auto itr = v.begin(); itr != v.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    // auto a = 1;
    // auto b = 1.2456;
    // cout<<"auto a : "<<a<<endl;
    // cout<<"auto b : "<<b<<endl;

    // using auto keyword in range base loop (it allows us to skip (replace with auto) writing data type of container in range base variable)
    cout<<"Using auto keyword in range base loop : ";
    for(auto it : v){           // even for vector of pair instead of writing "pair<int,int> it : v" we can write "auto it : v"
        cout<<it<<" ";
    }
    cout<<endl;

return 0;
}