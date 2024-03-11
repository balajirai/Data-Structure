#include <bits/stdc++.h>
using namespace std;

// Previous Greater element [PGE]
vector<int> prevGreaterElement(vector<int>& arr, int n){
	vector<int>ans(n);
	stack<int>st;
	st.push(-1);
	for(int i=0; i<n; i++){
		int curr = arr[i];
		while(st.top() <= curr && st.top()!=-1){
			st.pop();
		}
		// ans will be st.top()
		ans[i] = st.top();
		st.push(curr);
	}
	return ans;
}

int main(){
    int n;
    cout<<"Number of Elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Elements : ";
    for(int &a:arr) cin>>a;

    cout<<"Previous Greater Elements : ";
    vector<int>ans = prevGreaterElement(arr, n);
    for(int &a:ans) cout<<a<<" ";
    cout<<endl;
    return 0;
}