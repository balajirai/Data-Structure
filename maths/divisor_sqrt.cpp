// divisor of a number
// O(log n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum = 0;
    int count = 0;

    cout<<"Divisors of "<<n<<" are : "<<endl;
    for (int i = 1; i <= sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<endl;
            count++;
            sum += i;
            if(n/i != i){
                count++;
                sum += n/i;
            }
        }
    }

    cout<<"\nNo. of divisors are : "<<count<<endl;
    cout<<"Sum of divisors is  : "<<sum<<endl;
    
return 0;
}