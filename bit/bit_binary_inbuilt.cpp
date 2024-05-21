#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter Number : ";
    cin>>n;

    string binary = bitset<32>(n).to_string();
    // auto binary = bitset<32>(n);

    binary.erase(0, binary.find_first_not_of('0'));

    cout << "Binary is : " << binary << endl;
    
    return 0;
}