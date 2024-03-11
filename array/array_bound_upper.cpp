#include <bits/stdc++.h>
using namespace std;

// Upper Bound (first element that is greater than value passed)
int upperBound(vector<int>&v, int x){
    int n = v.size();
    int lo = 0, hi = n-1;
    while(hi - lo > 1){
        int mid = (lo + hi)/2;
        if(v[mid] <= x) lo = mid + 1;
        else hi = mid;
    }
    if(v[lo] > x) return lo;
    else if(v[hi] > x) return hi;
    else return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int x;
    cin>>x;

    int h = upperBound(v,x);
    cout<<( h != -1 ? v[h] : -1)<<endl;
    
return 0;
}