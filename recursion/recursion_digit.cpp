// Digit sum using recursion 

#include <iostream>
using namespace std;

int sum(int n){
    if(n<=0) return 0;
    int last = n%10;
    return sum(n/10) + last;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
return 0;
}