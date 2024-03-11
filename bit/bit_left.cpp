#include <bits/stdc++.h>
using namespace std;

void toBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}

int main(){
    int n,i;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Left shift by ith bit : ";
    cin>>i;

    cout<<"Before shifting the bit : ";
    toBinary(n);

    // shiftng the bit by i
    // 3 << 1
    // 11 --> 110
    int k = (n<<i);
    cout<<"After shifting the bit : ";
    toBinary(k);
    

return 0;
}