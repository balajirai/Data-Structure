// lcm = (a*b)/gcd

#include <bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    // lcm = (a*b)/gcd
    return (a*b)/(__gcd(a,b));
}
int main(){
    cout<<"LCM : "<<lcm(8,4)<<endl;
    cout<<"LCM : "<<lcm(12,18)<<endl;
return 0;
}