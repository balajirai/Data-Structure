#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int* p ;
    p =  &a;

    cout<<"Pointer p is : "<<p<<endl;
    cout<<"Adddress of a : "<<&a<<endl;
    cout<<"Adddress of pointer p : "<<&p<<endl;

    // address of a is same as the pointer p
return 0;
}