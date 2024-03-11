// Prefix sum is an technique to store the given array in a way of comulative sum / prefix sum like arr[i] = arr[i-1] + arr[i]
// this is quite useful for finding array sum from L to R position 
// we use 1 based indexing (better for prefix sum)

#include <iostream>
using namespace std;

const int N = 1e5+10;
int a[N];
int pf[N];      // gobal array initailized with every element as 0

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++){
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int q;
    cin>>q;
    while (q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }

return 0;
}

// time complexity : O(N) + O(Q) = O(N)