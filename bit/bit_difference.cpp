// count the number of bits needed to be flipped to convert A to B.

#include <bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b){

        // 0 XOR 1 and 1 XOR 0 is equal to 1.
        // A XOR B will give us the count of the number of unmatching bits in A and B, which needs to be flipped

        int x = a^b;
        
        // counting set bit in x
        int count = 0;
        while(x){
            count += x&1;
            x >>=1;
        }
        return count;
    }

int main(){
    int a,b;
    cin>>a>>b;
    cout<<countBitsFlip(a,b)<<endl;

return 0;
}