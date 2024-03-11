#include <bits/stdc++.h>
using namespace std;

// cut the n length rod in x,y,z segment and return max/min possible segments
int maxSegment(int n, int x, int y, int z, vector<int>&dp){
	if(n == 0) return 0;
	if(n < 0) return INT_MIN;

	if(dp[n] != -1) return dp[n];

	int a = maxSegment(n-x, x, y, z, dp)+1;
	int b = maxSegment(n-y, x, y, z, dp)+1;
	int c = maxSegment(n-z, x, y, z, dp)+1;

	dp[n] = max({a,b,c});
	return dp[n];
}

int main(){
    int n,x,y,z;
    cout<<"Enter lenght of rod    : ";
    cin>>n;
    cout<<"Enter segments x, y, z : ";
    cin>>x>>y>>z;

    vector<int>dp(n+1,-1);
	int ans = maxSegment(n,x,y,z,dp);
	if(ans < 0) cout<<"Not possible"<<endl;
	else cout<<"Maximum segments can be: "<<ans<<endl; 
    return 0;
}