// nested map 
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        pair<string,string>p;
        vector<int>v;
        string s1,s2;
        int ct;
        cin>>s1>>s2>>ct;
        p = {s1,s2};
        for (int i = 0; i < ct; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        m[p] = v;                        // a map storing "pair" as "key" and a "vector" as the "value" of that "key"
    }

    // // way 2
    // for (int i = 0; i < n; i++){
    //     string s1,s2;
    //     int ct;
    //     cin>>s1>>s2>>ct;
    //     for (int i = 0; i < ct; i++){
    //         int x;
    //         cin>>x;
    //         m[{s1,s2}].push_back(x);     // we are storing elements (more than one ) into the value part of map (value part of map has data type vector so we are using push_back function) 
    //     }                                // here {s1,s2} serves as key for the map and value part will be a vector 
    // }

    // printing the map 
    for(auto &p : m){
        cout<<p.first.first<<" "<<p.first.second<<" -> ";
        for (auto &q:p.second){
            cout<<q<<" ";
        }
        cout<<endl;
    }
    
return 0;
}

/*
input : we can relate it to real life example
there are "n" students 
s1 -> first name 
s2 -> last name
there are "ct" subjects
x -> marks of each subjects stored in vector "v" using v.push_back(x)

input : 

3
a b 4
1 2 3 4
c d 3
5 6 7
e f 3
8 9 10

*/