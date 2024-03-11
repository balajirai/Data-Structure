#include <bits/stdc++.h>
using namespace std;

// [LIS] longest increasing subsequence length (binary search)
int solve(int a[], int n){
    if(n==0) return 0;
    
    vector<int>ans;
    ans.push_back(a[0]);
    
    for(int i=1; i<n; i++){
        if(a[i] > ans.back()) ans.push_back(a[i]);
        else{
            // index of element just greater in ans
            int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
            ans[index] = a[i];
        }
    }
    return ans.size();
}

int main(){
    int n;
    cout<<"Enter Array Lenght   : ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements : ";
    for(int &x:a) cin>>x;
    cout<<"Longest Subsequence Length : "<<solve(a,n);
    return 0;
}