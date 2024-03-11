// power of 2 or not using bit manipulation 

#include <bits/stdc++.h>
using namespace std;

bool isPowofTwo(int n){
    // n will check if n == 0 and !(n & (n - 1)) will check if n is a power of 2 or not
    return (n && !(n & (n-1)));
}

int main(){
    int n;
    cin>>n;

    if(isPowofTwo(n))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
return 0;
}