#include <bits/stdc++.h>
using namespace std;

// cut the n length rod in x,y,z segment and return max/min possible segments
int maxSegment(int n, int x, int y, int z){
	if(n == 0) return 0;
	if(n < 0) return INT_MIN;

	int a = maxSegment(n-x, x, y, z)+1;
	int b = maxSegment(n-y, x, y, z)+1;
	int c = maxSegment(n-z, x, y, z)+1;

	return max({a,b,c});

}

int main(){
    int n,x,y,z;
    cout<<"Enter lenght of rod    : ";
    cin>>n;
    cout<<"Enter segments x, y, z : ";
    cin>>x>>y>>z;

	int ans = maxSegment(n,x,y,z);
	if(ans < 0) cout<<"Not possible"<<endl;
	else cout<<"Maximum segments : "<<ans<<endl; 
    return 0;
}