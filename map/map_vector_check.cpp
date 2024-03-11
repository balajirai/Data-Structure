#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int>m;
    m[3] = 4;
    cout<<"m[3] : "<< m[3]<<endl;
    cout<<"m[1] : "<< m[1]<<endl;
    cout<<endl;

    // map of int and vector
    unordered_map<int, vector<int>>mv;
    mv[3] = {1, 2, 3, 4};

    // Will enter the for loop
    cout<<"mv[3] : ";
    for(int &child:mv[3]) cout<<child<<",";
    cout<<endl;

    // blank (Wouln't enter for loop)
    cout<<"mv[1] : ";
    for(int &child:mv[1]) cout<<child<<",";
    cout<<endl;

    return 0;
}