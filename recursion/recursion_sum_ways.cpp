#include <bits/stdc++.h>
using namespace std;

// possible ways to write n as sum of 1,3,4 (recursion)
int solve(int n, vector<int>nums){
    // base case
    if(n==0) return 1;
    if(n<0) return 0;

    int ans = 0;
    for(int i=0; i<nums.size(); i++){
        ans += solve(n-nums[i], nums);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the Sum : ";
    cin>>n;
    vector<int>nums{1,3,4};     // here 1,3,4 
    cout<< "Total ways to get "<<n<<" from 1, 3, 4 is : "<< solve(n,nums)<<endl;
    return 0;
}