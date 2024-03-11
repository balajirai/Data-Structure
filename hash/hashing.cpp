// hashing is basically storing the number of occurances (frequency/number of count) of an element in an array corresponding to its index

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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
        hsh[a[i]]++;            // incrementing the value of hashing array at index a[i]
    }

    int q;
    cin>>q;
    while (q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    
    

return 0;
}

/*

6
3 5 5 7 7 8
5
3
5
7
8
9

*/