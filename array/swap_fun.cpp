// swapping two numbers using userdefined function

#include <iostream>
using namespace std;

void swap_num(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n,m;
    cout<<"Enter two numbers to swap  : ";
    cin>>n>>m;

    swap_num(n,m);
    cout<<"After swapping numbers are : "<<n<<" "<<m<<endl;
return 0;
}