#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    // left shift gives 2^n
    cout<<(1<<n)<<endl;

    // right shift gives 1/2^n
    cout<<(1>>n)<<endl;

return 0;
}