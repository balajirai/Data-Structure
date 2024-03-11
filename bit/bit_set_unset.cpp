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

    // checking the ith bit of a number is set or not using left shift operator
    // by taking and of the number by a number which has only ith bit is set (only ith bit is set 1<<i)
    cout<<"BIT "<<i<<" is : ";
    if((a & (1<<i)) != 0)
        cout<<"SET BIT"<<endl;
    else cout<<"NOT SET BIT"<<endl;


    // unseting the set bit
    if((a & (1<<i)) != 0){
        a = (a & (~(1<<i)));
        cout<<"UNSET BIT is : ";
        toBinary(a);
        cout<<endl;
    }

    // seting the unset bit
    else{
        a = (a | (1<<i));
        cout<<"SET BIT is : ";
        toBinary(a);
        cout<<endl;
    }

return 0;
}