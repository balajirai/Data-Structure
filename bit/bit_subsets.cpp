//   generating/returning all possible subsets of a given integer array
//   complexity = O (n * (2^n))  (greater than what we get using recursion)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> all_subsets (vector<int> &nums){
    int n = nums.size();
    int sct = 1<<n;     // subset count = 2^n

    vector<vector<int>> superset;

    // bit masking technique 
    for (int mask = 0; mask < sct; mask++){
        vector<int> subset;
        for (int i = 0; i < n; i++){
            if((mask & (1<<i)) != 0)        // checking the set bits (eventually elements in this subsets)
                subset.push_back(nums[i]);
        }
        superset.push_back(subset);
    }
    return superset;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];
    
    // storing the return values
    auto superset = all_subsets(v);

    // printing the superset(all subsets)
    for(auto &subset : superset){
        for(auto &element : subset){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    
return 0;
}