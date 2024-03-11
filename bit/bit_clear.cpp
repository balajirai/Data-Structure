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
    cout<<"Enter the position : ";
    cin>>i;

    int a = n;

    // this is just to convert into binary
    cout<<"Binary of "<<a<<" is : ";
    toBinary(n);

    // clear LSB
    int l = (a & (~((1<<(i+1)-1))));
    cout<<"After clearing LSB : ";
    toBinary(l);


    // clear LSB
    int m = (a & (((1<<(i+1)-1))));
    cout<<"After clearing MSB : ";
    toBinary(m);

    return 0;
}