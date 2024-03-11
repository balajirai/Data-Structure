// finding the all prime factors of a given number
// brute force  O(n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>prime_factors;
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            prime_factors.push_back(i);
            n /= i;
        }
    }

    // printing the prime factors 
    for(int prime : prime_factors){
        cout<<prime<<" ";
    }
return 0;
}