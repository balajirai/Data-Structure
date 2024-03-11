#include <bits/stdc++.h>
using namespace std;

// template of sliding window
int slidingWindow(int arr[], int n){
    int ans = 0, res = 0;
    int start = 0, end = 0;
    unordered_map<char, int>mp;

    while(end < n){
        // new element enters & can make window invalid

        // lets make window valid again

        while(start <= end /* && condition when window is invalid */ ){
            start++;    // shrinking the window
        }
        
        ans = max(ans, end-start+1);        // ans (max lenght subarray or number)
        res += (end-start+1);               // res (count of all valid subarrays)

        end++;          // expanding the window
    }

    return ans;
}

int main(){
    
    return 0;
}