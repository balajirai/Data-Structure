// max power of 2 in the given number

#include <bits/stdc++.h>
using namespace std;

int MaxPow2(int n){
    int x = 0;
    while((1 << x) <= n){
        x++;
    }
    return x-1;
}
int main(){
    int n;
    cin>>n;
    int z = MaxPow2(n);
    cout<<"Max power of 2 can be : "<<z<<endl;
    cout<<"The number having max power of 2 is : "<<(1<<z)<<endl;
    
return 0;
}