// divisor of a number
// brute force

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum = 0;
    int count = 0;

    cout<<"Divisors of "<<n<<" are : ";
    for (int i = 1; i < n; i++){
        if(n%i==0){
            cout<<i<<" ";
            count++;
            sum += i;
        }
    }

    cout<<"\nNo. of divisors are : "<<count<<endl;
    cout<<"Sum of divisors is  : "<<sum<<endl;
    
return 0;
}