#include <bits/stdc++.h>
using namespace std;

void solve(int n, string arr[]){
    // base case
    if(n==0) return;

    // processing
    int digit = n%10;
    n /= 10;

    // recursive call
    solve(n, arr);

    // printing the name of digits
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cin>>n;
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<endl;
    solve(n, arr);
    
return 0;
}