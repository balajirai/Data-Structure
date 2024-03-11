#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9,10,10,10};

    // min_element returns iterator/pointer to min element of conatainer
    auto i1 = min_element(v.begin(), v.end());
    cout<<"min_element  : "<<*i1<<endl;

    // max_element returns iterator/pointer to max element of conatainer
    auto i2 = max_element(v.begin(), v.end());
    cout<<"max_element  : "<<*i2<<endl;

    // accumulate retunrs the sum of element from given position plus initial sum provided by user
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<"accumulate  : "<<sum<<endl;

    // count return the occurance of given element
    int ct = count(v.begin(), v.end(),10);
    cout<<"count  : "<<ct<<endl;

    // find returns the itr/ptr to the given element or else return next to last itr/ptr
    auto i3 = find(v.begin(),v.end(),11);
    cout<<"find  : ";
    if(i3 != v.end()) cout<<*i3<<endl;
    else cout<<"NOT FOUND"<<endl;

    // reverse : reverse the elements of given container (NOT COPIES)
    reverse(v.begin(),v.end());
    cout<<"reverse  : ";
    for(auto &val : v) cout<<val<<" ";
    cout<<endl;
return 0;
}