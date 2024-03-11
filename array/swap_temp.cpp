// swap two numbers without using temp/third variable

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers to swap  : ";
    cin>>x>>y;

    // x = 25,  y = 23

    x = x + y;    // x = 25 + 23 i.e x = 48
    y = x - y;    // y = 48 - 23 i.e y = 25 (y gets swapped)

    x = x - y;    // x = 48 - 25 i.e x = 23 (x gets swapped)

    cout<<"After swapping numbers are : "<<x<<" "<<y<<endl;

return 0;
}
