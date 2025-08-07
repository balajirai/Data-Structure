// finding the all prime factors of a given number
// optimized  O(log n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>prime_factors;

    // For any composite number N there is at least one prime number till sqrt(n)
    for(int i=2; i<=sqrt(n); i++){
        while(n%i == 0){
            prime_factors.push_back(i);
            n /= i;
        }
    }

    //when n becomes less than 2 (i.e sqrt(n) < 2 ) then it will not go inside the for loop
    if(n>1){
        prime_factors.push_back(n);
    }

    // printing the prime factors 
    for(int prime : prime_factors){
        cout<<prime<<" ";
    }
return 0;
}