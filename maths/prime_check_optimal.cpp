// check prime numbers
// optimized O(log n)

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false; // 0 and 1 are not prime numbers
    if(n <= 3) return true; // 2 and 3 are prime numbers
    if(n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3

    for(int i=5; i*i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) {
            return false; // n is divisible by i or i+2, hence not prime
        }
    }
    return true; // n is prime if no divisors found    
}

int main(){
    while (true){
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}


/*



6k     → divisible by 2
6k + 2 → divisible by 2
6k + 3 → divisible by 3
6k + 4 → divisible by 2

So the only remaining forms that might (not necessarily) be prime are:

✅ 6k - 1 → same as 6k + 5
✅ 6k + 1

So, only 6k±1 can possibly be prime

*/