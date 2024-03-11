// comparing two strings
// compare()

#include <iostream>
using namespace std;
int main(){
    string str1 = "Balaji";
    string str2 = "Rai";
    int k = str1.compare(str2);
    if (k == 0)
        cout << "Both the strings are equal";
    else
        cout << "Both the strings are unequal";

    auto it = str1.cend();
    cout<<*(it)<<endl;
}