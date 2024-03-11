// sieve algorithm (prime) : It is used to cross out the multiples of prime numbers to find the prime numbers in the given range
// complexity : O(n*(log(log(n))))

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
// Q = 10^7 and N = 10^7

// Assuming all number to be prime in the vector using bool '1'
vector<bool> isPrime(N,1);
vector<int> lp(N,0) , hp(N,0);

int main(){
    isPrime[0] = isPrime[1] = false;    // removing 0 and 1 from the set of prime
    for (int  i = 2; i < N; i++){
        if(isPrime[i] == true){
            lp[i] = hp[i] = i;            // if it is prime then it is the lowest and highest prime factor of itself
            for(int j = 2*i; j<N; j+=i){
                isPrime[j] = false;
                hp[j] = i;              // multiple of i is crossing out so when greatest i come to mark j then that would be highest prime of j
                if(lp[j] ==0){
                    lp[j] = i;          // the first which mark j is the lowest prime
                }
            }
        }
    }

    // printing the result
    for(int i = 1; i<=100; i++){
        cout<<i<<" -> "<<lp[i]<<", "<<hp[i]<<endl;
    }
    

return 0;
}