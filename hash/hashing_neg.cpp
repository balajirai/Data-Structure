// Given an array on N integers and Q queries. And for each queries given a number X . find the count of that number
// constraints : 
// 1 <= N <= 10^5
// 1 <= a[i] <= 10^7
// 1 <= Q <= 10^5

#include <iostream>
using namespace std;

const int N = 1e7 + 10;     // index of hashing array is denoting the value of element and hsh[index] will be the count of that number
int hsh[N];                 // hashing array

int main(){
    int n,mn = INT_MAX;
    cin>>n;
    int a[n];                   // we can have local array with size bound 10^5
    for (int i = 0; i < n; i++){
        cin>>a[i];
        mn = min(mn,a[i]);      // finding minimum (most negative) element of the original array
    }

    if(mn<0) mn = -1*mn;        // taking additive inverse (if minimum element is negative)

    for (int i = 0; i < n; i++){    // hashing array with new indeces (positive)
        hsh[a[i]+mn]++;
    }
    
    int q;
    cin>>q;
    while (q--){
        int x;
        cin>>x;
        cout<<hsh[x+mn]<<endl;
    }

return 0;
}
