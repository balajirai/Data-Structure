#include <bits/stdc++.h>
using namespace std;

// find all possible subset of a given integer array
void solve(vector<int>input, vector<int>output, int i=0){
    if(i==input.size()){
        for(int x:output){
            cout<<x<<", ";
        }
        cout<<endl;
        return;
    }
    // not pick
    solve(input, output, i+1);

    // pick 
    output.push_back(input[i]);
    solve(input, output, i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>input(n), output;
    for(int i=0; i<n; i++) cin>>input[i];
    solve(input, output);
    return 0;
}