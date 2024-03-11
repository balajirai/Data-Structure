#include <bits/stdc++.h>
using namespace std;

// add one to the given array/vector
vector<int> plusOne(vector<int> &digits){
    int n = digits.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--){
        if (digits[i] < 9){
            digits[i]++;
            carry = 0;
            break;
        }
        else{
            // unit digit is 9 then adding 1 makes it 10 so storing 0 at that place and carrying 1 for 10s digit and so on
            digits[i] = 0;
            carry = 1;
        }
    }
    if (carry){
        digits.push_back(0);
        digits[0] = 1;
    }
    return digits;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Length of array : ";
    cin>>n;
    cout<<"Enter digits    : ";
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"After adding one : ";
    plusOne(v);
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}