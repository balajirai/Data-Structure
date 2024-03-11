#include <bits/stdc++.h>
using namespace std;

// reducing dishes (leetcode)
int solve(vector<int>&satisfaction, int index, int time){
    // base case
    if(index==satisfaction.size()) return 0;

    int include = satisfaction[index]*(time+1) + solve(satisfaction, index+1, time+1);
    int exclude = solve(satisfaction, index+1, time);

    return max(include, exclude);
}

int main(){
    int n;
    cout<<"Enter the number of dishes    : ";
    cin>>n;
    vector<int>satisfaction(n);
    cout<<"Enter satisfaction levels     : ";
    for(int &x:satisfaction) cin>>x;

    sort(satisfaction.begin(), satisfaction.end());
    cout<<"Maximum Like Time Coefficient : "<< solve(satisfaction, 0, 0)<<endl;
    
    return 0;
}