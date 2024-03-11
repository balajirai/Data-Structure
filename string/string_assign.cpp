// Parameters
// str : str is a string object, whose value to be assigned.
// subpos : It defines the position of the character which is to be copied as a substring.
// sublen : It determines the number of characters of string to be copied in another string object.
// n : Number of characters to copy.
// ch : Character value to be copied n times

#include <iostream>
using namespace std;
int main(){
    string str = "C is a programming language";
    string str1;
    str1.assign(str, 7, 20);
    cout << str1;
    return 0;
}